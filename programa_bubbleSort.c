#include <stdio.h>
#include <string.h>
#include <locale.h>

/*Objetivo do programa: ordenar os pesos das encomendas em ordem crescente e decrescente, utilizando o método Bubble Sort*/

//Função para o método Bubble Sort (ordem crescente)

void bubbleSort(int vetor[], int n){
	int i, j, aux;
	
	for(i = 0; i < n-1; i++){
		for(j = 0; j < n-i-1; j++){
			if(vetor[j] > vetor[j+1]){
				aux = vetor[j];
				vetor[j] = vetor[j+1];
				vetor[j+1] = aux;
			}
		}
	}
}

//Função para o método Bubble Sort (ordem decrescente)

void bubbleSortDecresc(int vetor[], int n){
	int i, j, aux;
	
	for(i = 0; i < n - 1; i++) {
		for(j = 0; j < n - i - 1; j++){
			if(vetor[j] < vetor[j+1]){
				aux = vetor[j];
				vetor[j] = vetor[j+1];
				vetor[j+1] = aux;
			}
		}
	}
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	//Definição do vetor com os respectivos pesos das encomendas e declaração de variáveis 
	int vetor[10] = {50,25,60,15,5,10,65,30,8,7};
	int n = 10;
	int i;
	
	//Exibição do vetor original
	
	printf("Vetor original: \n");
	for(i = 0; i < 10; i++){
		printf("%d ", vetor[i]);
	}
	printf("\n");
	
	//Ordenação do vetor em ordem crescente 
	
	bubbleSort(vetor, n);
	printf("\nVetor ordenado em ordem crescente:\n");
	for(i = 0; i < n; i++){
		printf("%d ", vetor[i]);
	}
	printf("\n");
	
	//Ordenação do vetor em ordem decrescente 
	
	bubbleSortDecresc(vetor, n);
	printf("\nVetor ordenado em ordem decrescente:\n");
	for(i = 0; i < n; i++){
		printf("%d ", vetor[i]);
	}
	printf("\n");
	
	printf("\nAgradecemos por utilizar o nosso programa!\n");
	
	return 0;
}
