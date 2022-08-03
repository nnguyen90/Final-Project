// TOKENIZING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300           
#include "tokenizing.h"			  // To include the header file "tokenizing.h"

// V1
void tokenizing(void) 
{
	printf ("*** Start of Tokenizing Words Demo ***\n");
	char words [BUFFER_SIZE]; 
	char* nextWord = NULL;    // Initializing 'nextWord' variable with NULL
	int wordsCounter;         
	do                        
	{
		printf ("Type a few words reparated by space (q - to quit):\n");    
		fgets (words, BUFFER_SIZE, stdin);								    
		words [strlen(words) - 1] = '\0';	    // to put NULL at the end of users' input
		if (strcmp(words, "q") != 0)			
		{
			nextWord = strtok(words, " ");		// Use 'strtok' function on words where delimiter is space(s)
			wordsCounter = 1;					
			while (nextWord)					
			{
				printf ("Word #%d is \'%s\'\n", wordsCounter++, nextWord);  // Print different words which are input by users
				nextWord = strtok (NULL, " ");								// Check if any token left to retrieve
			}
		}
	}while (strcmp(words, "q") != 0);           
	printf ("*** End of Tokenizing Words Demo ***\n\n");					
}
int main()           // Main function to run the code
{
	tokenizing();    
}