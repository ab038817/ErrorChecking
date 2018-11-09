#include <stdio.h>
#include <stdlib.h>
#include "errorcheck.h"

float getLowRange(char grade);

int main()
{

    //Ask the user for a letter grade.
    printf("Enter a letter grade A-F: ");


    //store the entered value into a char variable.
    char userInput;
    scanf("%c", &userInput);


    //start error checking process.
    if ( errorCheck(userInput) == OK )
    {
        //Print success message, show lowest possible grade .
        printf("\nSUCESS: you entered %c \n", userInput);
        printf("Lowest possible score for this letter grade: %.1f", getLowRange(userInput) );
    }
    else
    {
        //Print error, you did not give good data.
        printf("\nERROR: Not a valid entry!\n");
    }




    return 0;
}

float getLowRange(char grade)
{
    float returnVal;

    switch(grade)
    {
     case 'A':
     case 'a':
    returnVal = 93.5;
    break;

    case 'B':
     case 'b':
    returnVal = 82.5;
    break;

    case 'C':
     case 'c':
    returnVal = 72.5;
    break;
    case 'D':
     case 'd':
    returnVal = 62.5;
    break;
    case 'F':
     case 'f':
    returnVal = 0;
    break;
    }
    return returnVal;
    }

