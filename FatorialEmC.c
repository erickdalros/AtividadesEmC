#include <stdio.h>
#include <stdlib.h>

int main(){
	//fazendo o fatorial de um numero
	
	//lendo n a ser fatoriado
	int n;
	printf("Digite um número a ser fatoriado: ");
	scanf("%d", &n);
	int result = 1;
	if (n >= 0){
		for (int i = 1; i <= n; i++){
			result *= i;
		}
		printf("valor fatoriado: %d", result);
	}else{
		printf("valor negativo nao pode");
	}
	
	
	
}
