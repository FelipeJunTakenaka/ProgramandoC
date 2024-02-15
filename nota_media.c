#include<stdio.h>


int main(){
    float n1;
    float n2;
    float n3;
    float n4;
    float resultado;

    printf("Digite a nota 1: \n");
    scanf("%f",&n1);

    printf("Digite a nota 2: \n");
    scanf("%f",&n2);

    printf("Digite a nota 3: \n");
    scanf("%f",&n3);

    printf("Digite a nota 4: \n");
    scanf("%f",&n4);

    resultado = (n1 + n2 + n3 + n4) /4;

    printf("O resultado da nota média é %.2f \n",resultado);

    return 0;
}