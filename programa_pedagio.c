#include <stdio.h>
#include <string.h>
#include <locale.h>

/* Programa: Pedágio (quantidade de carros por dia); destaque dia de pico com cor ou negrito */
/* Nome fictício do programa: Sentinela */

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	//Declaração de variáveis
	int sentinela[7], i;
	int maior = 0;
	int dia = 1;
	
	printf("******Bem-vindo ao Programa Sentinela!******\n");
	printf("\n");
	
	//Contabilização dos carros em cada dia da semana
	
	for(i=0;i<7;i++){
		printf("Insira a quantidade contabilizada de carros no dia %d: \n", i+1);
		scanf("%d", &sentinela[i]);
   }
   
   //Cálculo da maior quantidade de carros registrada no sistema
   
   for(i=0;i<7;i++){
   		if(sentinela[i] > maior){
   			maior = sentinela[i];
   			dia = i+1;
		}	
   }
   
   //Resultado dia de pico 
   printf("\n");
   printf("\033[1m*****DIA DE PICO*****\033[0m\n");
   printf("\033[1mMaior quantidade de carros registrada em nosso sistema: %d.\033[0m\n", maior);
   printf("\033[1mDia de pico: %d.\033[0m\n", dia);
   printf("\n");
   printf("Agradecemos por utilizar nosso programa!\n");
   
}
