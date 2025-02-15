#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main() {
    int number, guess, start;
    int attempt = 5;

    // Initialize random number generator
    srand(time(0));
    number = rand() % 100 + 1; // Random number between 1 and 100

    printf("Welcome to the Basic Number Guessing Game!\n");
    printf("Press '2' To Start \n");
    scanf("%d", &start);

    if (start != 2) {
        printf("Invalid Input. Exiting Game.\n");
        return;
    }

    printf("I have chosen a number between 1 and 100.\n");

    // Loop until the user runs out of attempts
    do {
        printf("Enter Your Guess number: ");
        scanf("%d", &guess);
        attempt--;

        if (guess > number) {
            printf("Too High Sir !!\n");
        }
        else if (guess < number) {
            printf("Too Low Sir !!\n");
        }
        else {
            printf("Hurray Sir! You Got That Right!! \n");
            return;
        }

        printf("Attempts Left: %d\n", attempt);

    } while (attempt > 0);

    // If the user fails to guess the number
    printf("Out of attempts! The correct number was %d. Better luck next time!\n", number);
}
