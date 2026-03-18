#include <stdio.h>
#include <string.h>
//creating gtl function to measure length of string without using strlen function.
int gtl(char * str) {
	int offset = 0;
	while (str[offset] != 0) {
		offset++;
	}
        return offset;
}
//main code to check the password strength based on the following criteria:
int main () {
	int valid = 1;
    int vali = 1;
	int val = 1;
	int va = 1;

	char str1[100];
	while (1) {
//asking user to enter password and checking the length.		
                printf("enter your character: ");
	        scanf("%s", str1);
	        if (gtl(str1) < 10) {
			valid = 0;
		        printf("psswd too weak \n");
		}
//making sure the password contains numbers.
		else {
			vali = 0;
			for (int i = 0; i < gtl(str1); i = i+1) {
				if(str1[i] >= '0' && str1[i] <= '9') {
					vali = 1;
					break;
				}
			
			}

			if (vali == 0) {
				printf("please enter numbers too \n");
			}
//making sure no consecutive or adjacent numbers are used in the password.
	        val = 1;
			for (int i = 0; i < gtl(str1); i = i+1) {
				if (str1[i+1] - str1[i] == 1 || str1[i+1] - str1[i] == 0) {
					val = 0;
					break;
				}

		
			}
            if (val == 0) {
				printf("dont use consecutive or adjacent numbers \n");
			}

//making sure the password contains special characters.
		    va = 0;
			for (int i = 0; i < gtl(str1); i = i+1) {
				if (str1[i] == '!' || str1[i] == '@' || str1[i] == '#' || str1[i] == '$') {
					va = 1;
					break;
				}
		
			}


			if (va == 0) {
				printf("please use special characters too \n");
			}
		}
//if all the criteria are met, the password is accepted and the loop is broken.

         	if (valid == 1 && va == 1 && vali == 1 && val == 1) {
	        	printf("password accepted\n");
		        break;
		
		
	}

	return 0;                                      

}
                                                          	