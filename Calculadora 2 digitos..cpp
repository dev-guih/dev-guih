/*
Desenvolva uma calculadora em linguagem c, 
1- O programa deve ser executado quantas vezes for necess�rio.
2- o programa deve contar com todas as opera��es b�sicas (+-/*) 
3- A precis�o da calculadora deve ser de dois d�gitos.
4- O programa perguntar ao usu�rio qual opera��o ele deseja realizar
5- O programa deve executar quntas vezes for necess�rio
*/ 

#include <stdio.h>
#include <math.h>

int main(void){
	float x=0, y=0, resultado=0;
	int op;
	
	do{
		printf("\n\t1 - SOMA\n\t2 - SUBTRACAO\n\t3 - MULTIPLICACAO \n\t4 - DIVISAO\n");
		scanf("%i", &op);
		printf("\nDigite o primeiro numero: ");
		scanf("%f", &x);
		printf("\nDigite o segundo numero: ");
		scanf("%f", &y);
		
		switch(op){
			case 1: 
		        	resultado= x + y;
		        	break;
		    case 2: 
			        resultado= x - y;
			        break;
			case 3: 
			        resultado= x * y;
			        break;
			case 4: 
			        resultado= x / y;
			        break;
			default:
				
				printf("\n Digite uma opcao valida\n");
				break; 
			
		}
		
		printf("\n\t O resultado e: %0.1f\n", resultado);
		printf("\n Digite 1 para continuar: ");
		scanf("%i", &op);
		
	}while(op==1);
}
