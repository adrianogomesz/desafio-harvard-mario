#include <stdio.h>

// Criar um programa para representar uma pirâmide de Mario, o usuário poderá escolher a altura da pirâmide (entre 1 e 8).

int main(void) 
{

    int height;
    
    do {
        printf("Qual a altura da piramide (entre 1 e 8)?");
        scanf("%d", &height);
    } while (height < 0 || height > 8);

    
    for(int linha = 0; linha != height; linha++) {

        for(int espaco = 0; espaco < height - linha; espaco++) {
            printf(" ");
            
        }

        for(int blocos = 0; blocos <= linha; blocos++){
            printf("#");
        }
        
        printf("\n");

    }    
}

