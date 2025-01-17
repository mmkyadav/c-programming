/*University Grading System
You are developing a grading system for a university. 
The system assigns letter grades to students based on their numerical scores. 
The university has a specific grading scheme as follows:
90-100: A
80-89: B
70-79: C
60-69: D
Below 60: F
Your task is to write a program that reads a student's numerical score and prints their letter grade.
Question:
Write a C program that reads an integer representing the student's 
score (0-100) from the user and prints the corresponding letter grade using a switch-case structure.*/

#include <stdio.h>

int main() {
    int score;
    
    scanf("%d", &score);

    char grade;
    switch (score / 10) {
        case 10:
            printf("wow you got full marks");
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        default:
            grade = 'F';
            break;
    }

    printf("Grade: %c\n", grade);

    return 0;
}
