/*
Este programa pede ao usuário um número qualquer e depois exibe o número na tela
*/
#include <stdio.h> //estamos importando uma bliblioteca para trabalhar com entrada e saída de dados

int main(){
    int idade; //declaração da variável idade do tempo inteiro
    printf("Digite a sua idade e tecle enter\n");
    scanf("%d",&idade); //para pegar o número digitado pelo usuário
                        // estamos usando o comando scanf e adicionando
                        //o valor digitado ao endereço de memória
                        //da variável idade. Usamos o e-comercial para
                        //referenciar o endereço de memória da variável
                        //idade
    printf("A idade digitada é %d\n endereço da variável idade %x \n ",idade, &idade);
    return 0;                        
}   