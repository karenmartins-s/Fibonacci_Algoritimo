#include <stdio.h>
#include <stdlib.h>
/*
Cap.5 - Ex 7 Resolvido
Data: 31/08
*/
int main()
{
// Declara o de variaveis

int num1, num2, prox, N;

// Inicializar
num1 = 0;
num2 = 1;
printf("Digite o valor de N: ") ;
scanf("%d",&N);
printf("\n");

// Calcula e exibe cada termo
for (int termo=1; termo <= N; termo++)
{
if (termo == 1) printf("%d ",num1);
else if (termo == 2) printf("%d ",num2);
else
{
prox = num1 + num2;
printf("%d ",prox);

// atualizar num1 e num2
num1 = num2;
num2 = prox;
}
}
printf("\n");
return 0;
}
