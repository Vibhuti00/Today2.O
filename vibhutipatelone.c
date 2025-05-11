#include<stdio.h>
#include<conio.h>
void main() 
{
  int score;
  char grade;
  printf("Enter the score (0-100): ");
  scanf("%d", &score);
  grade = (score >= 90) ? 'A' :
          (score >= 80) ? 'B' :
          (score >= 70) ? 'C' :
          (score >= 60) ? 'D' : 'F';
  printf("The grade for the score %d is: %c\n", score, grade);
  getch();
}