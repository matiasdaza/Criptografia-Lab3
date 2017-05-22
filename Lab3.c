#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char *argv[]) {
	int n, i=0,x, Elementos, j, pi, y=0, m, e, q, opc, indice=0;
	char aux;
	n=strtol(argv[1], NULL, 10);
	m=n;
	n=sqrt(n);
	int p[n], primos[n];
	for (i=0; i<= (n-2); i++){
		p[i]=i+2;
	}
	printf("\nValor de raíz de n: %d\n\n", n );
	printf("Valores de P={");
	for(i=0; i<=(n-2); i++){
		if(i!=(n-2))
			printf("%d, ",p[i]);
		else
			printf("%d",p[i]);
	}
	printf("} \n");
	Elementos = i;

	//Proceso para sacar los números no primos
	for(i=0; i < Elementos; i++){
		if(p[i]!=0){
			pi=p[i];

			for(j=0;j<Elementos;j++){
				if(p[j]!= 0){
					if( p[j]%pi ==0){
						p[j]=0;
					}
				}
			}
			primos[y]=pi; //Se almacenan los números que son primos
			
			y++;	
		}

		
	}

	//Se muestran los números primos 
	printf("\nValores primos={");
	Elementos=y;
	for(y=0; y< Elementos; y++){
		if(y!=Elementos-1)
			printf("%d, ",primos[y]);
		else
			printf("%d",primos[y]);
	}
	printf("} \n");

	q=m;
	for(i=0; i<Elementos; i++){
		q=m;
		e=0;
		if(q % primos[i] == 0){
			while(q % primos[i] == 0){
				e++;
				q =(q / primos[i]);-
				
			}
		if(indice==0){
			printf("\n n = \n");
			printf("(%d,%d)\n", primos[i], e);
			indice++;
		}else{
			printf("(%d,%d)\n ", primos[i], e);
		}
		}
	}
	if(indice==0){
		printf("\nEl número %d es primo, por lo que no tiene divisores. \n", m );
	}
	printf("\n");
}

