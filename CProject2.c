/*
A program capable of playing "rock,paper,scissors" game with you.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int RockPaperScissor(char you, char comp)                   // returns 1 if you win, -1 if you lose and 0 if draw
{    

    // Condition for draw
    if (you == comp)
    {
        return 0;
    }

    // Non-draw conditions
    if (you == 'r' && comp == 'p')
    {
        return -1;
    }
    else if (you == 'p' && comp == 'r')
    {
        return 1;
    }

    else if (you == 'p' && comp == 's')
    {
        return -1;
    }
    else if (you == 's' && comp == 'p')
    {
        return 1;
    }

    else if (you == 's' && comp == 'r')
    {
        return -1;
    }
    else if (you == 'r' && comp == 's')
    {
        return 1;
    }
}

int main()
{
    char you, comp;

    srand(time(0));
    int number = rand() % 4 + 1;                                // Generates a random number from 1 to 3

    // Computer chooses
    if (number == 1)
    {
        comp = 'r';
    }
    else if (number == 2)
    {
        comp = 'p';
    }
    else
    {
        comp = 's';
    }

    // User chooses
    printf("Enter 'r' for rock, 'p' for paper and 's' for scissors\n");
    scanf("%c", &you);

    // Checking the result
    int result = RockPaperScissor(you, comp);

    // Displaying the result
    if (result == 0)
    {
        printf("\nGame draw\n");
    }
    else if (result == 1)
    {
        printf("\nYou win\n");
    }
    else
    {
        printf("\nYou lose\n");
    }

    printf("You chose %c and computer chose %c\n", you, comp);

    return 0;
}
