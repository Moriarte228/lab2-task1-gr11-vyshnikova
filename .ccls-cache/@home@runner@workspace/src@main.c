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

int main ()
{
	int class1[CLASS_SIZE], class2[CLASS_SIZE];
	srand(time(0));

	// Генерация случайных значений роста
	for (int i = 0; i < CLASS_SIZE; i++) {
			class1[i] = 150 + rand() % 51; // Рост от 150 до 200 см
			class2[i] = 150 + rand() % 51;
	}
	
	int third_heights_class1 = find_third_heights(class1);
	int third_heights_class2 = find_third_heights(class2);
	printf("Третий по высоте в классе 1: %d см\n", third_heights_class1);
	printf("Третий по высоте в классе 2: %d см\n", third_heights_class2);
	
	if (third_heights_class1 > third_heights_class2) {
		printf("В классе 1 третий по высоте ученик выше.\n");
	} else if (third_heights_class1 < third_heights_class2) {
		printf("В классе 2 третий по высоте ученик выше.\n");
	} else {
		printf("Третий по высоте ученик одинакового роста в обоих классах.\n");
	}

	return 0;
}
