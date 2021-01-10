#include <stdio.h>
// code was written with help from geeksforgeeks.org and www.program.com
void bubblesort(int array[], int n);
void swap(int *a, int *b);

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
void bubblesort(int array[], int n)
{ 
   int i;
   int j;
   // moves boundry
   for (i = 0; i < (n-1); i++)
         for (j = 0; j < n-i-1; j++)
            if (array[j] > array[j+1])
         	// swap position
               swap(&array[j], &array[j+1]);
}