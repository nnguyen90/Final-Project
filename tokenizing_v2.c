/*
-------------------------------------------------
Full Name  : Ngoc Diem Thy Nguyen
Student ID#: 105310221
Email      : nnguyen90@myseneca.ca
Section    : NEE
-------------------------------------------------
*/

// TOKENIZING MODULE SOURCE VERSION 2

#define _CRT_SECURE_NO_WARNINGS // _CRT_SECURE_NO_WARNINGS means you don't want the compiler to suggest the secure versions of the library functions, e.g. scanf_s when you use scanf
#define BUFFER_SIZE 300
#include "tokenizing_v2.h" // Include header file created as "tokenizing.h"

void tokenizing(void) 
{
	printf("*** Start of Tokenizing Words Demo ***\n");
	char* nextWord = NULL;
	char words[BUFFER_SIZE];
	int wordsCounter;
	do 
	{
		printf("Type a few words separated by space (q - to quit):\n");
		fgets(words, BUFFER_SIZE, stdin);
		words[strlen(words) - 1] = '\0';
		if (strcmp(words, "q") != 0) 
		{
			nextWord = strtok(words, " ");
			wordsCounter = 1;
			while (nextWord) 
			{
				printf("Word #%d is \'%s\'\n", wordsCounter++, nextWord);
				nextWord = strtok(NULL, " ");
			}
		}
	} while (strcmp(words, "q") != 0);
	printf("*** End of Tokenizing Words Demo ***\n\n");

	printf("*** Start of Tokenizing Phrases Demo ***\n");
	char phrases[BUFFER_SIZE];
	char* nextPhrase = NULL;
	int phrasesCounter;
	do 
	{
		printf("Type a few Phrases separated by comma (q - to quit):\n");
		fgets(phrases, BUFFER_SIZE, stdin);
		phrases[strlen(phrases) - 1] = '\0';
		if (strcmp(phrases, "q") != 0) 
		{
			nextPhrase = strtok(phrases, ",");
			phrasesCounter = 1;
			while (nextPhrase)
			{
				printf("Phrase #%d is \'%s\'\n", phrasesCounter++, nextPhrase);
				nextPhrase = strtok(NULL, ",");
			}
		}
	} while (strcmp(phrases, "q") != 0);
	printf("*** End of Tokenizing Phrases Demo ***\n\n");
}


int main() 
{
	tokenizing();
}
