#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "functions.c"


int main()
{
    // Stores the user's choice as a string.
    char * usersChoice;

    // Ask the user for their choice iteratively until a valid answer is given
    bool isAnswerValid = false;
    while (!isAnswerValid)
    {
        printf("Rock Paper Scissors? What do you choose?\n");
        isAnswerValid = checkValidAnswer(usersChoice);
    }

    // Get an random seed value for getComputerChoice based on current time
    srand(time(NULL));
    char* computersChoice = getComputerChoice();

    printf("You chose %s\n", usersChoice);

    printf("The computer chose %s\n", computersChoice);

    printf("\n");

    // Determine the winner
    if (strcmp(usersChoice, computersChoice) == 0)
    {
        printf("It's a tie!\n");
    }
    else if (strcmp(usersChoice, "rock") == 0 && strcmp(computersChoice, "scissors") == 0)
    {
        printf("You win!\n");
    }
    else if (strcmp(usersChoice, "rock") == 0 && strcmp(computersChoice, "paper") == 0)
    {
        printf("The computer wins!\n");
    }
    else if (strcmp(usersChoice, "paper") == 0 && strcmp(computersChoice, "rock") == 0)
    {
        printf("You win!\n");
    }
    else if (strcmp(usersChoice, "paper") == 0 && strcmp(computersChoice, "scissors") == 0)
    {
        printf("The computer wins!\n");
    }
    else if (strcmp(usersChoice, "scissors") == 0 && strcmp(computersChoice, "paper") == 0)
    {
        printf("You win!\n");
    }
    else if (strcmp(usersChoice, "scissors") == 0 && strcmp(computersChoice, "rock") == 0)
    {
        printf("The computer wins!\n");
    }
    else
    {
        printf("Error in main()\n");
    }
}