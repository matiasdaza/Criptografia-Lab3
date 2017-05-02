#include <stdio.h>
#include <math.h>

int main () {
	int n, i=0,x, Elementos, j, pi, y=0, m, e, q, opc, indice=0;
	printf("Ingrese el valor de n: ");
	scanf("%d", &n);
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
	//printf("%d\n", Elementos );

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
			//Todo esto comentado era para ver el proceso de "sacado de números no primos"
			/*
			printf("\n\n");
			for(x=0; x< Elementos; x++){
				if(x!=Elementos-1)
					printf("%d, ",p[x]);
				else
					printf("%d",p[x]);
			}
			printf("\n\n");
			*/
			primos[y]=pi; //Se almacenan los números que son primos
			//printf("jaja %d \n\n", primos[y] );
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
	//printf("hooola%d\n",q );
	
	for(i=0; i<Elementos; i++){
		q=m;
		//printf("hooola%d\n",q );
		e=0;
		if(q % primos[i] == 0){
			while(q % primos[i] == 0){
				//printf("hola1 %d\n", q );
				//scanf("%d", opc);
				e++;
				q =(q / primos[i]);
				//printf("hola2 %d\n", q );
				//scanf("%d", opc);
				
			}
		if(indice==0){
			printf("\n n = ");
			printf("%d^%d", primos[i], e);
			indice++;
		}else{
			printf(", %d^%d ", primos[i], e);
		}
		}
	}
	if(indice==0){
		printf("\nEl número %d es primo, por lo que no tiene divisores. \n", m );
	}
	printf("\n");
}

