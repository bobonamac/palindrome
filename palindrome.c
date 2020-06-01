/* 
Takes a word and checks if it's a palindrome
*/

#include<stdio.h>
#include<string.h>

#define MAX_STRING_LENGTH 25

int main(void) {
	char word[MAX_STRING_LENGTH];
	char wordReverse[MAX_STRING_LENGTH];
	int letterCount = 0;
	int countUp = 0;
	int isPalindrome;

	// prompt user
	printf("Enter a word: ");
	scanf("%s", word);

	// count letters
	while(word[letterCount] != '\0') {
		letterCount++;
	}

	// fill wordReverse
	while(letterCount > 0) {
		wordReverse[countUp] = word[letterCount - 1];
		letterCount--;
		countUp++;
	}
	// add null terminator to wordReverse
	wordReverse[countUp] = '\0';

	// compare forwards and backwards
	isPalindrome = strcmp(word, wordReverse);

	// sanity check
	printf("\nword: %s\nwordReverse: %s\niPalondrome: %d\ncountUp: %d\nletterCount: %d\n\n", 
		word, wordReverse, isPalindrome, countUp, letterCount);

	// output result
	if (isPalindrome == 0) {
		printf("Result: %s is a palindrome!\n", word);
	}
	else printf("Result: %s is not a palindrome.\n", word);
}

