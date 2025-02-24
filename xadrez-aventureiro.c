#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Aluno Igor Gomes


int main(){
    int torre = 1, bispo = 1, rainha = 1, cavalo = 1;
    int option;

    do
    {
        printf("\n### Xadrez CLI ###");
        printf("\n1. Movimento da Torre.");
        printf("\n2. Movimento do Bispo.");
        printf("\n3. Movimento da Rainha");
        printf("\n4. Movimento do Cavalo.");
        printf("\n5. Sair.");
        printf("\nEscolha uma opção: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            for(torre; torre <= 5; torre++){
                printf("\nA Torre se moveu para a %dº casa pela direita.", torre);
            }
        break;

        case 2:
            while (bispo <= 5){
                printf("\nO Bispo se moveu para a %dº casa por cima, direita.", bispo);
                bispo++;
            }
        break;

        case 3:
            do
            {
                printf("\nA Rainha se moveu para a %dº casa pela esquerda.", rainha);
                rainha++;
            } while (rainha <= 8);
        break;

        case 4:
            while (cavalo--)
            {
                for (int i = 1; i <= 2; i++)
                {
                    printf("\nO Cavalo se moveu %d casa para cima.", i);
                }
                printf("\nO Cavalo completa seu movimento com uma casa para a direita!", cavalo);
                
            }
        break;

        case 5:
            printf("\nSaindo do programa...");
        break;
        
        default:
            printf("\nOpção invalida!");
        break;
        }
    } while (option != 5);

    return 0;
}