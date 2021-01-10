#include <stdio.h>
// code was written with help from geeksforgeeks.org
void selectionsort(int array[], int n);
void selectionsort(int array[], int n) {
   int i;
   int j;
   int minimum_position;
   int s;
   // moves boundry 
   for (i = 0; i < (n - 1); i++) 
  {

   minimum_position = i;    // Find the minimum element
   for (j = i + 1; j < n; j++) 
      if (array[j] < array[minimum_position]) 
      minimum_position = j;
  
  // swaps position
  if (minimum_position != i)
    s = array[i];
    array[i] = array[minimum_position];
    array[minimum_position] = s;

   }
}
