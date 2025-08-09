#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

int peca;
int torre;
//exercício novato
// Não entendi direito a obrigatóriedade do exercício e decidir fazer desta forma.Mas como tem uma "liberdade de exercitar o código" estou fazendo.


// menu das peças
printf("**Escolha a peça do xadrez para movimentar **\n");
printf("1. Torre\n");
printf("2. Bispo\n");
printf("3. Rainha\n");

scanf("%d", &peca);

switch (peca) // para determinar cada movimento das peças separados
{
case 1:
    int movimento;
    printf("escolha a direção da movimentação da torre:\n");
    printf("1 movimenta para horinzontal\n");
    printf("2 movimenta para Vertical\n");
    scanf("%d",&movimento);

    if (movimento == 1)
    {
        char movimento2;
        printf("movimentando torre para horizontal\n");
        printf("Para esquerda use o E e para  Direita use o D :\n");
        scanf("%s",&movimento2);

         switch (movimento2)
         {
         case 'e':
         case 'E':{
         int i;
         int mov = 0;
            printf("escolha quantas casas\n");
            scanf("%d",&i);
            while (mov < i )
            {
                printf("Esquerda\n");
                mov++;
            }
        
            break;
        }
            case 'd':
         case 'D':{
         int i;
         int mov = 0;
            printf("escolha quantas casas\n");
            scanf("%d",&i);
            while (mov < i )
            {
                printf("Direita\n");
                mov++;
            }
            
            break;
        }
         default:
            break;
         }

    }else{
         char movimento2;
         printf("movimentando torre para Vertical\n");
         printf("Para cima use C e  baixo use o B:\n");
         scanf("%s",&movimento2);

         switch (movimento2)
         {
         case 'c':
         case 'C':{
         int i;
         int mov = 0;
            printf("escolha quantas casas\n");
            scanf("%d",&i);
            while (mov < i )
            {
                printf("Cima\n");
                mov++;
            }
        
            break;
        }
            case 'b':
         case 'B':{
         int i;
         int mov = 0;
            printf("escolha quantas casas\n");
            scanf("%d",&i);
            while (mov < i )
            {
                printf("Baixo\n");
                mov++;
            }
            
            break;
        }
         default:
            break;
         }


    }
    

    break;
case 2:
// fiquei sem tempo pra terminar o restante .
  printf("escolha a direção da movimentação do Bispo:\n");
  printf("Escolha prédefinida pelo professor .:\n");
  for (int i = 0; i < 5; i++)
  {
    printf("cima\n");
    printf("direita\n");
  }
  
    break;
case 3:{
 // fiquei sem tempo pra terminar o restante .
 int i = 0;
  printf("escolha a direção da movimentação do Rainha:\n");
  printf("Escolha pré definida pelo professor .:\n");
  
  do{
    printf("Esquerda\n");
    i++;
  }while (i < 8);
  
}
default:
    break;
}





return 0;

}

