/* main.c */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CLASS_SIZE 23

int find_third_heights(int height[]) {
	for(int i = 0; i < 3; i++) {
		int ind_max = i;
		for (int j = ind_max + 1; j < CLASS_SIZE; j++) {
			if (height[j] > height[ind_max])
				ind_max = j;
		}
		int temp = height[i];
		height[i] = height[ind_max];
		height[ind_max] = temp;
	}
	return height[2];
}

void main (void)
{
	printf ("Hello World\n");
	printf ("Goodbye World\n");
}
