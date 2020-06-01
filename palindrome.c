/* 
Takes a word and checks if it's a palindrome
*/

#include<stdio.h>
#include<string.h>

#define MAX_STRING_LENGTH 25

int main(void) {
	
	// variables
	char word[MAX_STRING_LENGTH];
	int letterCount = 0;
	int countUp = 0;
	int isPalindrome;

	// prompt user
	printf("\nEnter a word: ");
	scanf("%s", word);

	// count letters
	while(word[letterCount] != '\0') {
		letterCount++;
	}

	// Mike's method
	while(letterCount - 1 >= countUp) {
		if(word[countUp] == word[letterCount - 1]) {
			letterCount--;
			countUp++;
			isPalindrome = 0;
		}
		else {
			isPalindrome = 1;
			break;
		}
	}

	// output result
	if (isPalindrome == 0) {
		printf("Result: %s is a palindrome!\n\n", word);
	}
	else printf("Result: %s is not a palindrome.\n\n", word);
}
