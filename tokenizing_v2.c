#define _CRT_SECURE_NO_WARNINGS // _CRT_SECURE_NO_WARNINGS means you don't want the compiler to suggest the secure versions of the library functions, e.g. scanf_s when you use scanf
#define BUFFER_SIZE 300
#include "tokenizing.h" // Include header file created as "tokenizing.h"

void tokenizing(void) {
	printf("*** Start of Tokenizing Words and Phrases Demo ***\n"); // print statement to tell the user about the Demo
	char* nextWord = NULL; // initialize nextWord with NULL
	int wordsCounter; // Declare wordsCounter Variable
	char phrases[BUFFER_SIZE]; // Declare phrases array
	char* nextPhrase = NULL; // initialize nextPhrase with NULL
	int phrasesCounter; // Declare phrasesCounter Variable
	do { // Start DO...WHILE Loop
		printf("\nType a few Phrases separated by comma with words separated by space (q - to quit):\n"); // print statement for asking user to type few phrases or q to quit
		fgets(phrases, BUFFER_SIZE, stdin); // gets input from user
		phrases[strlen(phrases) - 1] = '\0'; // put null at the end of user input
		if(strcmp(phrases, "q") != 0) { // check if phrases has q or not (To check whether user want to continue or terminate)
            char *p = strtok_r(phrases, ",", &nextPhrase); // used strtok_r() on phrases separated comma(i.e ",")
            phrasesCounter = 1; // Initialized phrasesCounter as 1
            wordsCounter = 1; // Initialized wordsCounter as 1
            while(p) { // start WHILE Loop to traverse nextPhrase separated by comma
                printf("Phrase #%d is \'%s\'\n", phrasesCounter++, p); // print different phrase in the sentence entered by user
                char *q = strtok_r(p, " ", &nextWord); // used strtok_r() on words separated by space(i.e " ")
                while(q) { // start WHILE Loop to traverse nextword separated by space
                    printf("\tword #%d is \'%s\'\n", wordsCounter++, q); // print different words in the phrase entered by user
                    q = strtok_r(NULL, " ",&nextWord); // check if there are any tokens left to retrieve
                }
                p = strtok_r(NULL, ",", &nextPhrase); // check if there are any tokens left to retrieve
            }
		}
	} while(strcmp(phrases, "q") != 0); // DO...WHILE Loop end condition
	printf("*** End of Tokenizing Words and Phrases Demo ***\n\n"); // print statement for telling user the end of Demo
}

//Uncomment below main() function to run the code and check for different inputs
int main() {
    tokenizing();
}
