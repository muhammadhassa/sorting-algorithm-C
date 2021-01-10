#include <stdio.h>
// code was written with help from geeksforgeeks.org
void insertionsort(int array[], int size);
void insertionsort(int array[], int size) {
  for (int s = 1; s < size; s++) {
    int key = array[s];
    int j = s - 1;
// comparing the key that is set to each element on the left to perform insertionsort
    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}
