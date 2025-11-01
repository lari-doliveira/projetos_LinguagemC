#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Programa realizado com o objetivo de calcular e classificar o IMC do usuário*/

/*Neste programa será utilizada apenas três classes de classificação de IMC:
- Magreza: abaixo de 18,5;
- Peso normal: 18,5 - 24,9;
- Sobrepeso: 25,0 - 29,9 */


int main() {
	setlocale(LC_ALL, "Portuguese");
	
	//Declaração de variáveis 
	float peso, altura, indice;
	int resposta, quantidade;
	float soma = 0;
	
	//Início do programa
	printf("-----CÁLCULO DO ÍNDICE DE MASSA CORPORAL-----\n");
	
	do{
		printf("\nInsira o seu peso atual (kg):\n");
		scanf("%f", &peso);
		printf("Insira a sua altura (m):\n");
		scanf("%f", &altura);
		printf("Dados informados:\n");
		printf("Peso: %.2f kg\n", peso);
		printf("Altura: %.2f m\n", altura);
		indice = (peso) / (altura * altura);
		printf("IMC: %.2f kg/m²\n", indice);
		//Classificação do IMC
			if(indice < 18.5){
				printf("Classificação do IMC: Magreza.\n");
			}
			if(indice >= 18.50 && indice < 24.90){
				printf("Classificação do IMC: Peso normal.\n");
			}
			if(indice >= 24.90){
				printf("Classificação do IMC: Sobrepeso.\n");
			}
		//Acumula para a média e incrementa a quantidade 
		soma += indice; 
		quantidade++;
		printf("\nDeseja continuar? Se sim, digite 1. Caso contrário, digite 2 para encerrar o programa.\n");
		scanf("%d", &resposta);
	} while (resposta == 1);
		printf("Agradecemos a sua participação!\n");

	//Média dos IMCs registrados 
	
	if(quantidade>0){
		float media;
		media = soma / quantidade;
		printf("\nSegue abaixo o resumo dos dados obtidos no programa:\n");
		printf("\nUsuários cadastrados: %d\n", quantidade);
		printf("Média dos IMCs registrados: %.2f kg/m²\n", media);
		printf("Programa encerrado\n");
	} else {
		printf("\nPrograma encerrado. Nenhum usuário cadastrado.\n");
	}
	
	return 0;
			
}
