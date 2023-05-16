#include <stdio.h>
#include <stdlib.h>


int main() {


	int num1, num2, soma, subtracao, multi, div;
	printf("Digite um número inteiro qualquer:\n");
	scanf("%i", &num1);
	printf("Digite outro numero:\n");
	scanf("%i", &num2);

	soma = num1 + num2;
	printf("O resultado da soma é: %i\n", soma);
	
	subtracao = num1-num2;
	printf("O resultado da subtracao é: %i\n", subtracao);
	
	multi = num1*num2;
	printf("O resultado da multiplicação é: %i\n", multi);

	div = num1/num2;
	printf("O resultado da divisão é: %i\n", div);


	return 0;
}
