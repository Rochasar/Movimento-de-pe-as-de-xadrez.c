#include <stdio.h>
int main() {
 //Uso do for para movimento da torre
 printf("Movimentos da torre:\n");

 for(int t= 1; t <=5; t++){//quantidade definida e acrescimo para a quantidade que deve andar
    printf("Direita\n");
    }

    printf("Movimentos do Bispo:\n");
    //Uso do while para movimento do bispo
    int b = 1;
    while (b<=5)//andar 5 casas na diagonal direita
    {
        printf("Cima, direita\n");
        b++;//incremento para não ocorrer loop infinito
    }

    printf("Movimento da Rainha:\n");
    //Uso do Do-While para a movimentação da rainha
    int r=1;
    do{
        printf("Esquerda\n");//movimento de 8 casas a esquerda
        r++;//incremento para evitar loop infinito
    } while (r<=8);
    
    printf("Movimento do Cavalo:\n");

    int e= 0;
    while(e<1){//Movimento de ir para esquerda
    for(int b= 0; b<2; b++){//Movimento de ir duas vezes para baixo
        printf("Baixo\n");
    }
    
        printf("Esquerda\n");
        e++;

    }
    
    return 0;
}
