#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL, "portuguese");

	//variaveis para o while funcionar.
	int executar = 1;
	char repetir = 'S';
	
	//variaveis para as opreções.
	float resultado; 
	char operacao;
	float n1;
	float n2;

	while(executar > 0){
	printf("Digite a operação que desejada:\n(/ para divisao)\n(* para multiplicacao)\n(+ para soma)\n(- para subtracao)\n");
	scanf("%c",&operacao);

	switch ( operacao){

	//divisao
		case'/':printf("Digite o valor para ser dividido\n:");
		scanf("%f",&n1);
		printf("Digite o segundo valor \n:");
	        scanf("%f",&n2);
		resultado = n1/n2;
		printf("O resultado de %.2f dividido por %.2f e %.2f \n", n1, n2, resultado); //%.2 serve para mostar apenas dois numeros do calculo.
		break;

		//multiplicação
		case'*':printf("Digite o valor a ser multiplicado \n:");
		scanf("%f",&n1);
		printf("Digite o segundo valor a ser multiplicado \n:");
		scanf("%f",&n2);
		resultado =n1*n2;
		printf("O resultado de %.2f multiplicado por %.2f \n", n1, n2, resultado);
		break;

		//soma
		case'+':printf("Digite o valor que deseja somar \n");
		scanf("%f",&n1);
		printf("Digite o segundo valor desejado \n");
		scanf("%f",&n2);
		resultado = n1+n2;
		printf("O resultado de %.2f somado por %.2f e %.2f \n", n1, n2, resultado);
		break;

		//subtracao
		case'-':printf("Digite o valor que deseja subtrair \n");
		scanf("%f", &n1);
		printf("digite o segundo valor \n");
		scanf("%f", &n2);
		resultado = n1-n2;
		printf("O resultado da %2.f subtaido por %2.f e %2.f \n", n1, n2, resultado);
		break;

		default: printf("Operador nao identificado \n");;
	}




	printf("Deseja continuar? (S/N) ");
	scanf("%c", &repetir);
	if(repetir == 'n' || repetir == 'N'){ // || serve para fazer outra condicao (nessa situacao tanto em maiusculo quanto em minusculo
	    executar = 0;
	    printf("----FIM!---- :)");
	} else {
	    executar = 1;
	    getchar(); //limpar informacoes guardadas anteriormente.

	}
    
}
}
