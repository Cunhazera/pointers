#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int resolveEquacao(int a, int b, int c, float* x1, float* x2)  {
	float delta = (b * b) - 4 * a * c;

	if(delta < 0) {
		return 0;
	}

	*x1 = ( -b + sqrt( (b * b) - 4 * a * c ) ) / (2 * a);
	*x2 = ( -b - sqrt( (b * b) - 4 * a * c ) ) / (2 * a);

	return 1;
}

int main() {
	float x1, x2;
	int a, b, c;

	printf("Digite o número para A: ");
	scanf("%d", &a);

	printf("Digite o número para B: ");
	scanf("%d", &b);

	printf("Digite o número para C: ");
	scanf("%d", &c);

	printf("%d\n", resolveEquacao(a, b, c, &x1, &x2));

	return 0;
}
