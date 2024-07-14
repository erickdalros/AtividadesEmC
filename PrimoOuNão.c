#include <stdio.h>
#include <stdlib.h>


int main(){
	//leitura do n
	int n;
	printf("Digite o número: ");
	scanf("%d", &n);
	
	//variaveis da divisão
	int i = 1, cont = 0, result;
	while(i <= n){
		result = n % i;
		if (result == 0){
			cont++;
		}
		i++;
	}
	
	//Exibir a quantidade de divisões feitas
	if (cont == 1){
		printf("vaor nao primo");
	}
	if(cont == 2){
		printf("valor primo");
	} if(cont > 2){
		printf("valor nao primo");
	}
	//printf("%d", result);
	return 0;
}
