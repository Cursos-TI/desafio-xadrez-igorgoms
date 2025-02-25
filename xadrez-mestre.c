#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Aluno Igor Gomes

void moverTorre(int casas){
    if(casas > 0 && casas <= 5){
        moverTorre(casas - 1);
        printf("\nA Torre se moveu para a %dº casa pela direita.", casas);
    }else{
        printf("\nLimites de 5 casas para a Torre");
    }
}

void moverBispo(int casas){
    if(casas > 0 && casas <= 5){
        moverBispo(casas - 1);
        printf("\nO Bispo se moveu para a %dº casa por cima, direita.", casas);
    }else{
        printf("\nLimites de 5 casas para o Bispo");
    }
}

void moverRainha(int casas){
    if(casas > 0 && casas <=8){
        moverRainha(casas - 1);
        printf("\nA Rainha se moveu para a %dº casa pela esquerda.", casas);
    }else{
        printf("\nLimites de 8 casas para a Rainha");
    }
}


int main(){
    int cavalo = 1;
    int option, movimento;

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
            printf("\nDigite quantos casas a Torre deve se mover para a direita: ");
            scanf("%d", &movimento);
            moverTorre(movimento);
        break;

        case 2:
            printf("\nDigite quantas casas o Bispo deve se mover na diagonal direita para cima: ");
            scanf("%d", &movimento);
            moverBispo(movimento);
        break;

        case 3:
            printf("\nDigite quantas casas a Rainha deve se mover para esquerda: ");
            scanf("%d", &movimento);
            moverRainha(movimento);
        break;

        case 4:
            while (cavalo > 0)
            {
                for (int i = 1; i <= 2; i++)
                {
                    printf("\nO Cavalo se moveu %d casa para cima.", i);
                }
                printf("\nO Cavalo completa seu movimento com uma casa para a direita!", cavalo);
                cavalo--;
            }
            cavalo++;
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