#include <stdio.h>
#include <stdlib.h>

// Criar um algoritmo que leia um vetor A e depois um vetor B, após isso verifique quantas vogais cada um tem, e em seguida mostrar qual tem mais vogais


int main(){
	
	//Criação vetor a e b
	//leitura vetor a
	char a[5], b[5];
	for (int i = 0; i < 5; i++){
		printf("Digite 5 valores para vetor a: ");
		scanf(" %c", &a[i]);
	}
	//leitura vetor b
	for(int i = 0; i < 5; i++){
		printf("Digite 5 valores para vetor b: ");
		scanf(" %c", &b[i]);
	}
	
	
	//contagem de vogais vetor a
	int cont_a = 0;
	for(int i = 0; i < 5; i++){
		if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u'){
			cont_a++;
		}
	}
	printf("Quantidade de vogais no vetor a: ");
	printf("%d", cont_a);
	printf("\n");
	
	//contagem vogais vetor b
	int cont_b = 0;
	for (int i = 0; i < 5; i++){
		if (b[i] == 'a' || b[i] == 'e' || b[i] == 'i' || b[i] == 'o' || b[i] == 'u'){
			cont_b++;
		}	
	}
	printf("Quantidade de vogais no vetor b: ");
	printf("%d", cont_b);
	printf("\n");
	
	//Verificação de qual tem mais vogais
	
	if (cont_a > cont_b){
		printf("Vetor a tem mais vogais....");
	} if ( cont_a == cont_b){
		printf("Os dois vetores tem a mesma quantidade de vogais: %d", cont_a);
	}if (cont_a < cont_b){
		printf("Vetor b tem mais vogais....");
	}
	
	return 0;
}
