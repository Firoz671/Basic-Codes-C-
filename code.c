/*1. It is taking input from the user for 5 subjects.
2. Then it is calculating the sum of all the marks.
3. Then it is calculating the average of all the marks.
4. Then it is checking if the average is between 80 and 100, then it will print "Congratulations! You Got A+".
5. If not, then it will check if the average is between 70 and 79, then it will print "Congratulations! You Got A".*/
#include <stdio.h>
int main()
{
    int marks[5];
    int i, j, k, avg, sum = 0;
    char arr[5] = {'P', 'C', 'B', 'M', 'I'};
    printf("P for 'Physics'\nC for 'Chemistry'\nB for 'Biology'\nM for 'Math'\nI for 'Ict'\n");
    for (k = 0; k <= 4; k++)
    {
        for (i = 0; i <= 4; i++)
        {
            printf("Enter your marks %c: ", arr[k]);
            scanf("%d", &marks[i]);
            break;
        }
    }
    for (j = 0; j <= 4; j++)
    {
        sum = sum + marks[i];
    }

    printf("Total marks = %d", sum);
    avg = sum / 5;

    printf("\nAverage  = %d", avg);
    if (avg > 100 || avg < 0)
    {
        printf("\nInvalid");
    }
    else if (avg >= 80 && avg <= 100)
    {
        printf("\nCongratulations! You Got A+");
    }
    else if (avg >= 70 && avg <= 79)
    {
        printf("\nCongratulations! You Got A");
    }
    else if (avg >= 60 && avg <= 69)
    {
        printf("\nCongratulations! You Got B");
    }
    else if (avg >= 50 && avg <= 59)
    {
        printf("\nCongratulations! You Got C");
    }
    else if (avg >= 40 && avg <= 49)
    {
        printf("\nCongratulations! You Got D");
    }
    else
    {
        printf("\nSorry you Failed");
    }
    return 0;
}
