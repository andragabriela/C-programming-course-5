#include <stdio.h>
#include <stdlib.h>
///Solve 2 ways:
///- first, without using any user defined functions (just using main, but using arrays)
///- second, using your own defined functions (at least one more function besides main)
///at least one of the following problems:
///1. Write a program to read a set of integers and print the maximum and minimun value.
///2. Use Eratosthenes's sieve to determine all prime numbers less than a given integer.
///3. Write a program to read an integer with max 3 digits and print the value in words (111 will be printed as one hundred and eleven)
///4. Write a program that, given an integer n, computes the first n values from Fibonacci Series.
int main()
{
    ///1
    int num[100], maxi=-1, min=99999,i, nr, x;
    printf("Introduceti nr. de numere: ");
    scanf("%d", &nr);
    for(i=1;i<=nr;i++)
       { printf("Introduceti numarul: ");
       scanf("%d", &num[i]);
        if(num[i]<min) min=num[i];
        if(num[i]>maxi) maxi=num[i];
        }

    printf("elementul minim este %d\n", min);
    printf("elementul maxim este %d\n", maxi);

    ///1-metoda 2
    return 0;
}
