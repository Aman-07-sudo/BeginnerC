#include <stdio.h>
#include <string.h>

//Declaring a variable rvrs

void rvrs(char* str) {
	int length = strlen(str);
	for(int i = 0; i<length/2; i++) {
		char temp = str[i];         //storeing the character in index i in temporary 
		str[i] = str[length-1-i];   // replacing i with length -i -1
		str[length-1-i] = temp;     //  replacint length -i -1 with i 
	}
}

int main() {
	char str1[100];                    // array str of max length 100
	printf("enter the character:");
	scanf("%s", str1);                 // take userinput 
	rvrs(str1);
	printf("%s\n",str1);

	return 0;
}

