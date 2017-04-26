#include <stdio.h>
#include <math.h>

int main () {
	int n, i=0;
	printf("Ingrese el valor de n: \n");
	scanf("%d", &n);
	n=sqrt(n);
	int p[n];
	for (i=0; i<= (n-2); i++){
		p[i]=i+2;
	}
	printf("\n valor de raíz de n: %d\n", n );
	for(i=0; i<=(n-2); i++){
		printf("%d, ",p[i]);
	}
}
