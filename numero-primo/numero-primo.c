#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "");
	setlocale(LC_NUMERIC, "en_US.UTF-8");

	// Crie um algoritmo que informe se o valor lido é primo ou não
	int i, valor, aux = 0;

	printf("Digite um valor para saber se ele é primo: ");
	scanf_s("%d", &valor);

	for (i = 1; i <= valor; i++) {

		// Conferindo quantas vezes houve divisibilidade
		if (valor % i == 0) {
			aux++;
		}

		// Exibe o resto da divisão na tela
		printf("%d / %d tem o resto = %d \n", valor, i, valor % i);
	}

	if (aux == 2) {
		printf("\nO número %d é primo, pois ele tem %d divisores\n", valor, aux);
	} else {
		printf("\nO número %d não é primo, pois ele tem %d divisores\n", valor, aux);
	}
}