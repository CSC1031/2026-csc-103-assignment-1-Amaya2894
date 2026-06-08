#include <stdio.h>

int main() {
    int math, science, english;
    int total;
    float average;
    char grade;

    // Input marks
    printf("Enter Mathematics marks: ");
    scanf("%d", &math);

    printf("Enter Science marks: ");
    scanf("%d", &science);

    printf("Enter English marks: ");
    scanf("%d", &english);

    // Calculate total and average
    total = math + science + english;
    average = total / 3.0;

    // Determine grade
    if (average >= 80)
        grade = 'A';
    else if (average >= 70)
        grade = 'B';
    else if (average >= 60)
        grade = 'C';
    else if (average >= 50)
        grade = 'D';
    else
        grade = 'F';

    // Display results
    printf("\nTotal: %d\n", total);
    printf("Average: %.2f\n", average);
    printf("Grade: %c\n", grade);

    // Pass / Fail status
    if (math >= 40 && science >= 40 && english >= 40)
        printf("Result: PASS\n");
    else
        printf("Result: FAIL\n");

    return 0;
}
