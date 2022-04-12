#include <stdio.h>
#include <conio.h>

void main()
{
    int arr1[10], arr2[10], arr3[30];
    int i, n1, n2,m, index = 0;

    printf(" \t\t\t\t***** please Enter  0 to 10 *******");
    printf("\n\t\t note : If you Enterd the number Bigger Than 10..That you will pass the first Array : -");
    printf("\n\n \t\t Enter the Number of Array 1  :- ");
    scanf("%d", &n1);
    if (n1>10)
    {
        printf("Error :");
    }
    else
    {
    printf("\n\n \t\t Enter the Elements of the First Array :- ");
    printf("\n \t\t *************************************************");

    for (i = 0; i < n1; i++)
    {   
           printf("\n \t\t Arr [ %d ] = ", i);
           scanf("%d", &arr1[i]);
    }

    }



printf(" \n \t \t Enter the Number of elements of Array 2 :-  ");
scanf("%d", &n2);
printf("\n \t \t Enter the Elements Of second Array  : -");
printf("\n \t\t *********************************************");
for (i = 0; i < n2; i++)
{
    printf("\n\t\t Arr [ %d ] ", i);
    scanf("%d", &arr2[i]);
}
    m=n1 + n2;
    for ( i = 0; i < n1 ; i++)
    {
        arr3[ index ] = arr1[ i ];
        index++;
    }
    
    for ( i = 0; i < n2; i++)
    {
        arr3[ index ]= arr2[ i ];
        index++;
    }
    printf(" \n\n \t\t The Merged araay is  : -");
    printf("\n \t\t**********************************************");
    for ( i = 0; i < m ; i++)
    {
        printf(" \n Arr [ %d ] = %d " ,i ,arr3[ i ] );
    }
    
}