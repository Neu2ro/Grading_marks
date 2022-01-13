/*Write a C program that first asks for the marks.Take an input after printing “Enter marks”.
Then use decision making and print “Grade A”, “Grade B”, “Grade C”, “Grade D” or “Grade F” based on the bins provided above.
M>=85 grade a ; M>=70 grade b ; M>=55 grade c ; M>=40 grade d ; Grade f*/

#include <stdio.h>

void main()
{
    //Taking marks from the user
    int m;
    printf("Enter marks(Out of 100) : ");
    scanf("%d", &m);

    //nested if else
    if(m > 100)                     //if input marks are out of boundary i.e 100
    {
        printf("Invalid input");
    }
    else if(m <= 100 && m >= 85)    //when marks are between 85 - 100
    {
        printf("Grade A");
    }
    else if(m < 85 && m >= 70)      //when marks are between 70 - 85
    {
        printf("Grade B");
    }
    else if(m < 70 && m >= 55)      //when marks are between 55 - 70
    {
        printf("Grade C");
    }
    else if(m < 55 && m >= 40)      //when marks are between 40 - 55
    {
        printf("Grade D");
    }
    else                            //when marks are below 40
    {
        printf("Grade F");
    }
}
