#include <stdio.h>
#include <stdlib.h>

// Escreva um programa em C que calcula a média-x de duas
// turmas de graduação. O programa deve solicitar ao usuário a
// quantidade de alunos da primeira turma, alocar um vetor de
// notas (n os reais), calcular a média-x e mostrar a resposta. Depois,
// deve-se solicitar a quantidade de alunos da segunda turma e
// fazer o mesmo procedimento.
// Exige-se que não deva ocorrer desperdício de memória; e após
// utilizada, a memória deve ser liberada.
// Média-x = (maior_nota – menor_nota)*0,15 + média_aritmética*0,85

int main() {

	int i = 0, j = 0, k = 0, l = 0, m = 0;
	int numAlunos = 0;
	float mediaAritmetica = 0, menorNota = 0, maiorNota = 0, media = 0;
	float *notas;

	for (i = 0; i < 2; i++) {
		printf("Quantos alunos tem na sala %d?\n", i + 1);
		scanf("%d", &numAlunos);

		if(i == 0) notas = (float *) malloc (numAlunos * sizeof(float));
		else notas = (float *) realloc (notas,numAlunos* sizeof(float));

		for (j = 0; j < numAlunos; j++) {
			printf("A nota do aluno %d: ", j + 1);
			scanf("%f", &notas[j]);
		}

		for (k = 0; k < numAlunos; k++) {
			if (notas[k] > maiorNota) {
				maiorNota = notas[k];
			}

			if (k == 0) {
				menorNota = notas[k];
			} else {
				if (notas[k] < menorNota) {
					menorNota = notas[k];
				}
			}
		}

		for (l = 0; l < numAlunos; l++) {
			mediaAritmetica += *(notas);
		}
		printf("Menor %f\n", menorNota);
		printf("Maior %f\n", maiorNota);
		menorNota = 0;
		maiorNota = 0;
		mediaAritmetica = mediaAritmetica / numAlunos;


		media = (maiorNota - menorNota) *0.15 + mediaAritmetica *0.85;
		printf("%f\n", media);
		media = 0;
		mediaAritmetica = 0;

	}

	free(notas);
	return 0;
}