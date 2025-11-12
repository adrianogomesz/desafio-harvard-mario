#include <stdio.h>

// Criar um programa para representar uma pirâmide de Mario, o usuário poderá escolher a altura da pirâmide (entre 1 e 8).

int main(void) 
{

    int height;
    
    do {
        printf("Qual a altura da piramide (entre 1 e 8)?");
        scanf("%d", &height);
    } while (height < 0 || height > 8);

    
    for(int line = 0; line != height; line++) {

        for(int space = 0; space < height - line; space++) {
            printf(" ");
            
        }

        for(int blocks = 0; blocks <= line; blocks++) {
            printf("#");

        }
        
        printf(" ");

        for(int blocos = 0; blocos <= line; blocos++) {
            printf("#");

        }

        printf("\n");

    }    
}

