#include <stdio.h>

void swap(int *x, int *y);


int main () {
	
	/* local var definition */

	int a = 100;
	int b = 200;

	printf("Before the swap a: %d\n", a);
	printf("Before the swap b: %d\n", b);


	/* & indicates pointer to a ie. address of a var */

	swap(&a, &b);

	printf("After the swap a: %d\n", a);
	printf("After the swap b: %d\n", b);


	return 0;
}


void swap(int *x, int *y) {

	int temp;
	temp = *x;
	*x = *y;
	*y = temp;


	return;

}


