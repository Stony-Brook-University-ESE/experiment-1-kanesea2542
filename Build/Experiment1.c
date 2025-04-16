#include <stdio.h>
#include <string.h>
#include <ctype.h> // Added ctype.h for tolower function

int main() {
    char str[100]; // Modified the string length to account for larger character words
    printf("Enter a word: ");
    scanf("%s", str); 
    
    int len = strlen(str);
    int isPalindrome = 1;
   
    for (int i = 0; i < len / 2; i++) {
        if (tolower(str[i]) != tolower(str[len - 1 - i])) { // Added tolower function, account for different upper/lowcased cases
            isPalindrome = 0;       
            break;
        }
    }

    if (isPalindrome) {
        printf("It's a palindrome!\n");
    } else {
        printf("Not a palindrome.\n");
    }

    return 0;
}
