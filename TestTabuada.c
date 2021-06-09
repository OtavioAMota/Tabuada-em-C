#include <stdlib.h>
#include <stdio.h>

int tabuada(int numero){
	int i=0;
	for(i=0;i<=10;i++){
		printf("%d X %d = %d\n",numero,i,numero*i);
	}
}

int main(){
	int numero=1, i;
	while(1){
		printf("Escolha um numero de 0 ate 10:");
		scanf("%d",&numero);
		switch(numero){//Usando switch, porem poderia usar apenas a função tabuada sem este siwtch que tambem funcionaria
			case 0:
				tabuada(numero);
				break;
			case 1:
				tabuada(numero);
				break;
			case 2:
				tabuada(numero);
				break;
			case 3:
				tabuada(numero);
				break;
			case 4:
				tabuada(numero);
				break;
			case 5:
				tabuada(numero);
				break;
			case 6:
				tabuada(numero);
				break;
			case 7:
				tabuada(numero);
				break;
			case 8:
				tabuada(numero);
				break;
			case 9:
				tabuada(numero);
				break;
			case 10:
				tabuada(numero);
				break;
			default:
				printf("Numero escolhido passou do numero 10.\n");
				tabuada(numero);
				break;
		}
	}
	return(0);
}
