#include <stdio.h>
#define PI 3.141592

int main() {
	printf("%f\n", PI);

	int r = 5;
	//���� ���� PI * r * r
	printf("%f\n", PI*r*r);
	//���� �ѷ� 2 * PI * r
	printf("%f\n", 2 * PI * r);
	//���� ���� 4/3 * PI * r * r * r
	printf("%f\n", 4.0 / 3.0 * PI * r * r * r);

	return 0;
}