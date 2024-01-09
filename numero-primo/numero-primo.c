#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "");
	setlocale(LC_NUMERIC, "en_US.UTF-8");

	// Crie um algoritmo que informe se o valor lido � primo ou n�o
	int i, valor, aux = 0;

	printf("Digite um valor para saber se ele � primo: ");
	scanf_s("%d", &valor);

	for (i = 1; i <= valor; i++) {

		// Conferindo quantas vezes houve divisibilidade
		if (valor % i == 0) {
			aux++;
		}

		// Exibe o resto da divis�o na tela
		printf("%d / %d tem o resto = %d \n", valor, i, valor % i);
	}

	if (aux == 2) {
		printf("\nO n�mero %d � primo, pois ele tem %d divisores\n", valor, aux);
	} else {
		printf("\nO n�mero %d n�o � primo, pois ele tem %d divisores\n", valor, aux);
	}
}