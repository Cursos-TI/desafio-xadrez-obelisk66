#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void MovCavalo(int mov){//movimentação do cavalo
     while (mov--)
    {
        for(int i = 0;i < 2; i++ ){
            printf("Cavalo(Cima)\n");

        }
        printf("Cavalo(Direita)\n");
    }
}

void MovRainha(int mov){//movimentação da Rainha
     do{
     printf("Rainha(Esquerda)\n");
     mov--;
    }while (mov > 0);
    
}

void MovBispo(int mov){//movimentação do Bispo
  for (mov ; mov > 0; mov--)
  {
    printf("Bispo(Cima)\n");
    for (int i = 1; i > 0; i--)
    {
        printf("Bispo(Direita)\n");
    }
    
  }
  

}

/*movimentação da Torre.jé estudava react e java Bastante iniciante!, aí fiz essa implementação para nao copiar 4 vezes o mesmo código
a const char*variavél eu tive que olhar no gpt, mas a chamada já sabia fazer .
*/

void MovTorre(int mov, const char*texto){
     while (mov-- ) {
        printf("%s \n", texto);   
     }

}






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
printf("4. Cavalo\n");

scanf("%d", &peca);

switch (peca) // para determinar cada movimento das peças separados
{
case 1:
    int movimento;  //seleção para movimentação da torre Vertical ou Horinzontal
    printf("escolha a direção da movimentação da torre:\n");
    printf("1 movimenta para horinzontal\n");
    printf("2 movimenta para Vertical\n");
    scanf("%d",&movimento);

    if (movimento == 1)
    {
        char movimento2;
         //seleção para movimentação da torre Esquerda ou Direita
        printf("movimentando torre para horizontal\n");
        printf("Para esquerda use o E e para  Direita use o D :\n");
        scanf("%s",&movimento2);

         switch (movimento2)
         {
         case 'e':
         case 'E':{
        
            int mov;
            printf("escolha quantas casas:\n");
            scanf("%d",&mov);
            MovTorre(mov,"Torre(Esquerda)");// troca do loop por código Recursivo 
        
            break;
        }
            case 'd':
         case 'D':{
         
         int mov;
            printf("escolha quantas casas:\n");
            scanf("%d",&mov);
            MovTorre(mov,"Torre(Direita)");// troca do loop por código Recursivo 
            
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

            int mov;
            printf("escolha quantas casas:\n");
            scanf("%d",&mov);
            MovTorre(mov,"Torre(Cima)");// troca do loop por código Recursivo 
        
            break;
        }
         case 'b':
         case 'B':{

           int mov;
           printf("escolha quantas casas:\n");
           scanf("%d",&mov);
           MovTorre(mov,"Torre(Baixo)");// troca do loop por código Recursivo 
            
            break;
        }
         default:
            break;
        }


    }
    

    break;
case 2:
// fiquei sem tempo pra terminar o restante .
int casa ;
// pensei em implentar igual a torre, só que o código iria ficar muito longo

  printf("escolha a direção da movimentação do Bispo:\n");
  printf("Escolha quantas casas o Bispo deve mover para diagonal direira (Cima) .:\n");
  scanf("%d", &casa);
  MovBispo(casa); // troca do loop por código Recursivo 
  
    break;
case 3:{
 // fiquei sem tempo pra terminar o restante .
 int mov = 8;
  printf("escolha a direção da movimentação do Rainha:\n");
  printf("Escolha pré definida pelo professor .:\n");

  MovRainha(mov);

  break;
}
case 4:{
    int mov = 1;
    printf(" Escolha o movimento do Cavalo: \n");
    printf("escolha pré definida pelo professor.: \n");
    MovCavalo(mov);// troca do loop por código Recursivo 
  
    break;
}
default:
    break;
}




return 0;

}