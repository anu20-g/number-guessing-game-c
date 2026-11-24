/*
 * Number Guessing Game
 * Team 1
 * Concepts: Loops, Conditional Statements, Random
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, userGuess, attempts = 0;
    const int maxAttempts = 7;

    srand(time(0));
    secretNumber = (rand() % 100) + 1; // Range: 1 to 100

    printf("========================================\n");
    printf("    WELCOME TO NUMBER GUESSING GAME     \n");
    printf("========================================\n");
    printf("I have selected a secret number between 1 and 100.\n");
    printf("You have %d attempts to find it!\n\n", maxAttempts);

    while (attempts < maxAttempts) {
        printf("Attempt %d/%d - Enter your guess: ", attempts + 1, maxAttempts);
        if (scanf("%d", &userGuess) != 1) {
            printf("Invalid number!\n");
            return 1;
        }
        attempts++;

        if (userGuess == secretNumber) {
            printf("\nCONGRATULATIONS! You found the number %d in %d attempts!\n", secretNumber, attempts);
            return 0;
        } else if (userGuess < secretNumber) {
            printf(">> Hint: Go HIGHER!\n");
        } else {
            printf(">> Hint: Go LOWER!\n");
        }
    }

    printf("\nGame Over! You've used all %d attempts. The number was: %d\n", maxAttempts, secretNumber);
    return 0;
}
