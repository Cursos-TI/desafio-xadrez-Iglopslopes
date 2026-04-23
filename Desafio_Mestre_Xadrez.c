#include <stdio.h>

// Função recursiva para a Torre
void moverTorre(int casas){

    if (casas > 0) {
        printf("Torre: Direita \n");
        moverTorre(casas -1);
    }    

}

// Função recursiva para a Rainha
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Rainha: Direita\n");
        moverRainha(casas - 1);
    }
}

// Função recursiva parao Bispo

void moverBispo(int casas) {
    if (casas > 0) {
        printf("Bispo: Cima, Direita \n");
        moverBispo(casas - 1);
    }
}

int main(){

    printf("--- Movimentando a Torre ---\n");
    moverTorre(5); // Move 5 casas
    
    printf("\n--- Movimentando a Rainha ---\n");
    moverRainha(8); // Move 8 casas

    printf("\n ----Movimentação do Bispo:----\n");
    moverBispo (5); // move 5 casas
        

    printf("\n--- Movimentação do Cavalo: ---\n");

    // Loop externo para as casas verticais (2 casas para cima)
    for (int i = 1; i <= 1; i++) { 
        
        // Loop aninhado 
        for (int j = 1; j <= 2; j++) {
            printf("Cima\n");
            
            // Aqui entra a "condição" ou "fluxo preciso" que o exercício pede
            if (j == 2) {
                printf("Direita\n");
                break;
            }
        }
    }

    
        
return 0;

}    



