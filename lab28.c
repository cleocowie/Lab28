/** lab28.c
* ===========================================================
* Name: FIRST LAST, DATE
* Section: SECTION
* Project: Progamming Assessment 3 Practice
* Documentation: DOC STATEMENT
* ===========================================================  */

int getNumLines(char*);

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "lab28.h"

int main(void)
{

    char array[100] = "hello world.";
//    PROBLEM 1 - STRING MANIPULATION
//          a.) Define a function called numVowels that takes in a character array and outputs
//          an integer.  The function itself finds the number of vowels within the provided character
//          array. The character array may contain spaces and punctuation.  Do not inlcude 'y' as a
//          vowel.

    int vowels = numVowels(array);
    printf("Number of vowels is %d.\n",vowels);


    //      b.) Define a function called sortString that expects an array of characters and
    //      and returns a pointer to an array of characters.  The function sorts the characters
    //      in the string in alphabetic order, stores them in this order, and returns a pointer to
    //      this sorted array of characters.
    //      The character array may contain spaces and punctuation. When sorting, spaces and punctuation
    //      should be ignored and all alphabetic characters should be changed to lowercase for
    //      sorting and output.  The spaces and special characters will not appear in the sorted array.
    //      NOTE: In order to return a pointer to an array of characters that has scope outside a
    //          function call, the memory used to store the sorted array must by dynamically
    //          allocated.

  system("pause");
    return 0;
}

int getNumLines(char filename[])
{
    char c;
    int count = 0;
    // Open the file
    FILE* fp = fopen(filename, "r");

    // Check if file exists
    if (fp == NULL)
    {
        printf("Could not open file %s", filename);
        return 0;
    }

    // Extract characters from file and store in character c
    for (c = getc(fp); c != EOF; c = getc(fp))
        if (c == '\n') // Increment count if this character is newline
            count = count + 1;

    // Close the file
    fclose(fp);
    //printf("The file %s has %d lines\n ", filename, count);

    return count;
}


int numVowels(char vowels[]) {
    int numOfVowels = 0;
    int i;
    int lengthOfArray = strlen(vowels);


    for ( i = 0; i < lengthOfArray; i++)
    {
        tolower(vowels[i]);    
    }
    

    for ( i = 0; i < lengthOfArray; i++)
    {
        switch (vowels[i])
        {
        case 'a':
            numOfVowels++;
            break;
        case 'e':
            numOfVowels++;
            break;
        case 'i':
            numOfVowels++;
            break;
        case 'o':
            numOfVowels++;
            break;
        case 'u':
            numOfVowels++;
            break;

        default:
            break;
        }
    }

    return numOfVowels;

}