#include <stdio.h>

void rotation(int *, int *, int *);

main() 
{
	int a, b, c;

	puts("ROTATION\n");
	printf("a: ");
	scanf_s("%d", &a);
	printf("b: ");
	scanf_s("%d", &b);
	printf("c: ");
	scanf_s("%d", &c);
	puts("\n\nBefore enter rotation() function");
	printf("a: %d b: %d c: %d\n", a, b, c);
	rotation(&a, &b, &c);
	puts("After enter rotation() function");
	printf("a: %d b: %d c: %d\n", a, b, c);
}

void rotation(int *px, int *py, int *pz) {
	int temp;

	temp = *pz;
	*pz = *py;
	*py = *px;
	*px = temp;
}
