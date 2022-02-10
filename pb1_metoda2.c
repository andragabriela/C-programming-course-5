#include <stdio.h>
#include <stdlib.h>
void citire(int num[], int nr)
{
    int i;
    for(i=0;i<=nr-1;i++)
    {
        printf("Introduceti numarul: ");
       scanf("%d", &num[i]);
    }
}
void afisare_min_max(int num[], int nr)
{
    int min=999, maxi=-1, i;
    for(i=0;i<=nr-1;i++)
    {
        if(num[i]>maxi) maxi=num[i];
        if(num[i]<min) min=num[i];
    }
    printf("Valoarea minima din sir este: %d, iar valoarea maxima este: %d", min, maxi);
}
int main()
{
    int num[100], nr;
    printf("Introduceti nr. de numere: ");
    scanf("%d", &nr);
    citire(num, nr);
    afisare_min_max(num, nr);

    return 0;
}
