#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

char* getComputerChoice();
bool checkValidAnswer(char* answer);


bool checkValidAnswer(char* answer)
/**
 * Checks if the given answer is valid.
 *
 * @param answer The user input to be checked.
 * @return True if the answer is valid, false otherwise.
 *
 * @note The answer should be one of the following: "rock", "paper", "scissors".
 *       The comparison is case-sensitive.
 *       If the answer is not valid, an error message will be printed.
 */
{
    // Get the user input from the terminal
        scanf("%s", answer);

        // make the answer lower case to prevent any errors in the future
        int tolower(int answer);

        // Check if the input is valid. If not, ask again.
        if (strcmp(answer, "rock") == 0)
        {
            return true;
        }
        else if (strcmp(answer, "paper") == 0)
        {
            return true;
        }
        else if (strcmp(answer, "scissors") == 0)
        {
            return true;
        }
        else
        {
            printf("Invalid answer\n");
            printf("Usage : Rock, Paper, Scissors\n");
            return false;
        }
}

char* getComputerChoice()
{
    // An array of all the possible choices
    // char* choices[] = {"rock", "paper", "scissors"};

    // Generate a random number between 0 and 2
    int randomIndex = rand() % 3;

    if (randomIndex == 0)
    {
        return "rock";
    }
    else if (randomIndex == 1)
    {
        return "paper";
    }
    if (randomIndex == 2)
    {
        return "scissors";
    }
    else
    {
        printf("Error in getComputerChoice()\n");
        return NULL;
    }
}
