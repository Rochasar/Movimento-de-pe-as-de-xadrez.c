#include <stdio.h>

// Funções recursivas para atender os novos reqisitos
void torreRecursiva(int t){
    if(t <= 0) return; 
    printf("Direita\n");
    torreRecursiva(t - 1); // chamada recursiva
}

void bispoRecursivo(int b){
    if(b <= 0) return;
    printf("Cima, direita\n");
    bispoRecursivo(b - 1); // chamada recursiva
}

void rainhaRecursiva(int r){
    if(r <= 0) return;
    printf("Esquerda\n");
    rainhaRecursiva(r - 1); // chamada recursiva
}

int main() {
    
    printf("Movimentos da torre:\n");
    torreRecursiva(5); // atualização: recursividade no lugar do loop for

    printf("Movimentos do Bispo:\n");
    bispoRecursivo(5); // atualização: recursividade no lugar do while

    printf("Movimento da Rainha:\n");
    rainhaRecursiva(8); // atualização: recursividade no lugar do do-while
    
    printf("Movimento do Cavalo:\n");
    
     int e= 0;
    while(e<1){//Controle do movimento do cavalo
        for(int b= 0; b<3; b++){//2 para cima e 1 para direita
            if(b < 2){
                printf("Cima\n"); // duas casas para cima
                continue;        // força próxima iteração
            }
            if(b == 2){
                printf("Direita\n"); // uma casa para direita
                break;               // encerra o loop interno
            }
        }
        e++;
    }
    
    return 0;
}
