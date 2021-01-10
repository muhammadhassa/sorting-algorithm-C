#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "insertion.h"
//number generator for insertion sort

int main(int argc, char *argv[])
{
	int n;
	n = atoi(argv[1]);
	printf("\n%d\n", n);
	int *a = (int*)malloc(n * sizeof(int));
	srand(time(NULL));
	int i;
	for (int i = 0; i < n; i++)
	{
		int b = rand();
		a[i] = b;
		printf("%d, ",a[i]);
	}
	insertionsort(a, n);
	for (int i = 0; i < n; i++)
	{
		printf("%d\n", a[i]);
	}
	return 0;

}