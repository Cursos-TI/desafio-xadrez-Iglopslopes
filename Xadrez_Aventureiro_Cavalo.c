#include <stdio.h>

int main() {
    int Qdte_Movimento = 0;

    printf("Quantos movimentos voce deseja dar no cavalo? ");
    // Adicionado o & antes da variável
    scanf("%d", &Qdte_Movimento); 

    while (Qdte_Movimento--) {
        // Loop para as duas casas para cima
        for (int i = 0; i < 2; i++) {
            printf("Cima\n");
        }
        // Uma casa para a direita para completar o "L"
        printf("Direita\n");
    }

    return 0;
}