#include<stdio.h>
#include<conio.h>
void main() 
{
    char grade;
    int score;
    printf("Enter the grade (A, B, C, D, or F): ");
    scanf(" %c", &grade);  
    printf("Enter the score: ");
    scanf("%d", &score);
    switch (grade) {
        case 'A':
            printf("Excellent work!\n");
            break;
        case 'B':
            printf("Well done.\n");
            break;
        case 'C':
            printf("Good.\n");
            break;
        case 'D':
            printf("You passed, but you could do better.\n");
            break;
        case 'F':
            printf("Sorry, you failed.\n");
            break;
        default:
            printf("Invalid grade.\n");
    }
    getch();
}