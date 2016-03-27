#include <stdio.h>
#include <stdlib.h>

main() {

	FILE *file;
	char fileChars[256];
	char chars[128];
	int i, value = 0;

	for (i = 0; i < 128; i++) {
		chars[i] = 0;
	}

	printf("Digite o path do arquivo: ");
	scanf("%s", &fileChars);
	file = fopen(fileChars, "r");

	while(!feof(file)) {
		value = fgetc(file);
		if (value < 128) chars[value]++;
	}
	fclose(file);

	for (i = 0; i < 128; i++) {
		printf("%d %c\n", chars[i], i);
	}

}
