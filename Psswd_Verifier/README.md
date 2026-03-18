# Password Validator in C

A command-line password validator written in C. My first major C project — built entirely from scratch without using high-level string libraries.

## What it does

Keeps asking the user for a password until it meets all the requirements, then prints `password accepted`.

## Password Requirements

- At least **10 characters** long
- Must contain at least **one number** (0-9)
- Must contain at least **one special character** (`!`, `@`, `#`, `$`)
- Must **not** contain consecutive or repeated adjacent numbers (e.g. `12`, `34`, `99`)

## How to Compile and Run

Make sure you have `gcc` installed, then:

```bash
gcc str.c -o str
./str
```

## Example Usage

```
enter your character: hlw
psswd too weak

enter your character: lolthouartcoked
please enter numbers too
please use special characters too

enter your character: lolthouartcoked19528
please use special characters too

enter your character: hlwkityartcokedwhatareyoudoing1423!#
password accepted
```

## How it works

### Custom string length function
Instead of using the built-in `strlen`, I wrote my own called `gtl` that manually counts characters until it hits the null terminator:

```c
int gtl(char * str) {
    int offset = 0;
    while (str[offset] != 0) {
        offset++;
    }
    return offset;
}
```

### Validation Logic
Four separate flag variables track each condition independently:
- `valid` — overall length check
- `vali` — whether a digit was found
- `val` — whether no consecutive numbers were found
- `va` — whether a special character was found

All flags reset at the top of every loop iteration so previous failed attempts don't carry over.

## What I learned building this

- How strings are stored in memory as character arrays
- ASCII values and why `'9' - '0' == 9` works
- Why shared state between checks causes bugs
- How flag variables work to track conditions across loops
- The pain and reward of debugging in C 

## Built with

- C
- gcc compiler
- Vim (first attempt )
- VSCode (sanity restored)
