//Created by Naman Kukreti
// dated - 10/10/2021
// Copyright (C) 2007 Free Software Foundation, Inc. <https://fsf.org/>
//  Everyone is permitted to copy and distribute verbatim copies
//  of this license document, but changing it is not allowed.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int me;
    int a = 0, b = 0;
    char name[10];
    printf("The Game\n");
    printf("Enter your Name\n");
    scanf("%s", name);
    printf("Player 1 = %s\n", name);
    printf("Player 2 = Computer\n");
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Round %d:-\n", i+1);
        
        printf("Enter 0 for ROCK\n");
        printf("Enter 1 for PAPER\n");
        printf("Enter 2 for SCISSOR\n");
        scanf("%d", &me);
        printf("\n");
        switch (me)
        {
        case 0:
            printf("You chose ROCK\n");
            break;
        case 1:
            printf("You chose PAPER\n");
            break;
        case 2:
            printf("You chose SCISSOR\n");
            break;
        default:
            printf("Invalid\n");
            break;
        }

        srand(time(NULL));
        int comp = rand() % 3;
        switch (comp)
        {
        case 0:
            printf("Computer chose ROCK\n");
            break;
        case 1:
            printf("Computer chose PAPER\n");
            break;
        case 2:
            printf("Computer chose SCISSOR\n");
            break;
        default:
            break;
        }

        switch (me)
        {
        case 0:
            switch (comp)
            {
            case 0:
                printf("    No result\n");
                break;
            case 1:
                printf("    Computer won\n");
                b++;
                break;
            case 2:
                printf("    You won\n");
                a++;
                break;
            default:
                break;
            }
            break;
        case 1:
            switch (comp)
            {
            case 0:
                printf("    You won\n");
                a++;
                break;
            case 1:
                printf("    No result\n");
                break;
            case 2:
                printf("    Computer won\n");
                b++;
                break;
            default:
                break;
            }
            break;
        case 2:
            switch (comp)
            {
            case 0:
                printf("    Computer won\n");
                b++;
                break;
            case 1:
                printf("    You won\n");
                a++;
                break;
            case 2:
                printf("    No result\n");
                break;
            default:
                break;
            }
        default:
            break;
        }
        printf("\n");
    }

    if (a > b)
    {
        printf("%s has Won the game!!!\n", name);
    }
    else if (b > a)
    {
        printf("%s lost :(\n", name);
    }
    else
    {
        printf("Game tied !!\n");
    }
    printf("Thanks for playing!!\n");
    return 0;
}