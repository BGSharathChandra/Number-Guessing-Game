//This is a Game where the Computer shall choose a number between 1 to 100 and we must guess the Number.The Computer will Tell Whether the Guessed Number is Greater tor lesser than
//choosen Number
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number;
    int guess;
    int nguesses = 0; //Here nguesses means Number of Guesses.

    srand(time(0));
    number = rand() % 100 + 1;

    do
    {
        printf("Enter your Guessed Number(from 1 to 100):");
        scanf("%d", &guess);
        nguesses++;
        if (guess > number)
        {
            printf("Enter a Lower Number\n"); // Making the Computer to Print 'Enter a Lower Number' meaning that we must enter a Greater Number If the Guessed Number is Greater than the Choosen Number .
        }
        else if (guess < number)
        {
            printf("Enter a Greater Number\n"); // Making the Computer to Print 'Enter a Greater Number' meaning that we must enter a Lower Number If the Guessed Number is Lower than the Choosen Number .
        }
        else if (guess == number)
        {
            printf("You Win\n"); //Making the Computer to Print 'You Win' if we have Guessed the Number Choosen by the Computer

            printf("The Number of turns you have taken to guess the number is %d", nguesses); //Printing how Many Guessewe have taken to Guess the Number.
            break;
        }
        if (nguesses == 4)
        {
            printf("You Have taken 4 guesses you have a last guess\n"); //Printing 'You Have taken 4 guesses you have a last guess' if we have taken Four Guesses.
        }

        if (nguesses == 5)
        {
            printf("You have taken more than 5 Guesses so YOU LOOSE\n"); //Ending the Game if we have Taken 5 Guesses
            printf("The Number the Computer had choosen was %d\n", number);
            break;
        }

    } while (guess != number);

    return 0;
}
