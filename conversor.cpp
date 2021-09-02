#include<stdio.h>
#include<stdlib.h>
    float dolar=20, pesos, dolares;
    int op;
    	void comparacion(void);
        	void dolarpeso(void);
        	void pesodolar(void);
main(){
	system("title Conversor");
		printf("1.-Dolar A Pesos\n2.-Pesos A Dolares\n\nIngrese la opcion: ");
			scanf("%d",&op);
    			comparacion();
}
void comparacion(){
	switch(op){
		case 1:
			dolarpeso();
			break;
		case 2:
			pesodolar();
			break;
		default:
			printf("Seleccion Inexistente");
			break;
	}
}
void dolarpeso(){
	system("cls");
		printf("Ingrese la cantidad de dolares: ");
			scanf("%f",&dolares);
				pesos = dolares * dolar ;
					printf("\nLa conversion es de %f pesos", pesos);
}
void pesodolar(){
	system("cls");
		printf("Ingrese la cantidad de pesos: ");
			scanf("%f",&pesos);
				dolares = pesos / dolar;
					printf("\nLa conversion es de %f dolares", dolares);
}
