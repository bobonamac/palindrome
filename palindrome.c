/* 
Takes a word and checks if it's a palindrom or not
First let's see if I can take a word and return the number of letters in it...
*/

#include<stdio.h>
#include<string.h>
#define MAX_STRING_LENGTH 25

int main(void) {
	char word[MAX_STRING_LENGTH];
	char wordReverse[MAX_STRING_LENGTH];
	int howManyLetters = 0;
	int countUp = 0;
	int isPalindrome;


	printf("Enter a word: ");
	scanf("%s", word);

	// count letters
	while(word[howManyLetters] != '\0') {
		howManyLetters++;
	}

	// fill wordReverse
	while(howManyLetters > 0) {
		wordReverse[countUp] = word[howManyLetters];
		howManyLetters--;
		countUp++;
	}

	// compare forwards and backwards
	isPalindrome = strcmp(word, wordReverse);

	// sanity check
	printf("\nword: %s\nwordReverse: %s\niPalondrome: %d\ncountUp: %d\nhowManyLetters: %d\n\n", 
		word, wordReverse, isPalindrome, countUp, howManyLetters);

	// output result
	if (isPalindrome == 0) {
		printf("Your word %s is a palindrome!\n", word);
	}
	else printf("Your word %s is not a palindrome.\n", word);
}

