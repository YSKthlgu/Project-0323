#include <stdio.h>
#define PI 3.141592

int main() {
	printf("%f\n", PI);

	int r = 5;
	//원의 면적 PI * r * r
	printf("%f\n", PI*r*r);
	//원의 둘레 2 * PI * r
	printf("%f\n", 2 * PI * r);
	//구의 부피 4/3 * PI * r * r * r
	printf("%f\n", 4.0 / 3.0 * PI * r * r * r);

	return 0;
}