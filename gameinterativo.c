# include <stdio.h>
# include <stdlib.h>
# include <math.h>
/*Desenvolvimento do Jogo de Adivinhação de Números em C
Objetivo: Desenvolver um jogo interativo de adivinhação de números utilizando a linguagem de programação C, aplicando conceitos de vetores, matrizes, funções e registros. O jogo deve incluir um menu de opções e só deve ser encerrado quando o usuário solicitar.

Descrição da Atividade:

 Introdução ao Projeto:

O aluno deve criar um jogo onde o computador escolhe um número aleatório e o jogador tenta adivinhar esse número.
O jogo deve ser interativo, permitindo que o usuário faça escolhas através de um menu.
 Requisitos Técnicos:

Vetores: Utilizar vetores para armazenar as tentativas do jogador.
Matrizes: Embora não seja essencial para este jogo, pode-se usar uma matriz para armazenar múltiplas sessões de jogo.
Funções: Implementar funções para modularizar o código, como funções para inicializar o jogo, processar tentativas, verificar acertos, etc.
Registros: Utilizar registros (structs) para agrupar dados relacionados, como informações de um jogador (nome, número de tentativas, etc.).
 Funcionalidades do Jogo:

Menu Principal: O jogo deve iniciar com um menu principal que permita ao usuário escolher entre as opções de iniciar um novo jogo, visualizar as instruções, ou sair do jogo.
Interatividade: O jogo deve responder às entradas do usuário e atualizar o estado do jogo conforme necessário.
Encerramento: O jogo só deve ser encerrado quando o usuário selecionar a opção de sair no menu principal.
 Regras do Jogo:

O computador escolhe um número aleatório entre 1 e 100.
O jogador tenta adivinhar o número, recebendo dicas se o palpite é maior ou menor que o número escolhido.
O jogo termina quando o jogador adivinha o número ou decide sair.*/


struct registro{
    char name[60];
    int tentativas;
};

int escolha2(int aleatorio){
int n1;


printf("\n");

printf("escolha um nunero de 1 a 100\n");
scanf("%d", &n1);

if(n1<aleatorio){
    printf("o numero que voce digitou eh menor do que o numero escolhido\n");
    printf("\n\n"); 
    
    
}else if(n1>aleatorio){
    printf("o numero que voce digitou eh maior que o numero escolhido\n");
    printf("\n\n");
    
    
}

if (n1==aleatorio){
    printf("parabens voce conseguiu acertar o numero\n");
    return 1;
}else if(n1==0){
    printf("que pena que voce desistiu\n");
}

}
void menu(){   
    printf("digite 1 para iniciar o jogo ou tentar novamente:\n2 para vizualizar as instrucoes\nou 0 para sair\n");
    
}
void instrucoes(){
    printf("tente acertar um numero de 1 a 100, vou te dar dicas se o numero eh maior ou menor do que voce digitou\n");
}

int main(){ 
    
for(int i=0;i<10;i++){
   
    int numeroAleatorio=(rand()%100)+1;
    printf("numero:%d\n", numeroAleatorio);
  //guardando informações 
    struct registro n;    
    printf("digite seu nome:\n");
    scanf(" %[^\n]", n.name);
    int escolha1,a;
    struct registro t;
    t.tentativas=0;

    do{
    menu();
    
    scanf("%d", &escolha1);
    if(escolha1==1){
        printf("tentativa %d", t.tentativas+1);
        t.tentativas++;
        a=escolha2(numeroAleatorio);
        if(a==1){
            break;
        }
        
    }else if(escolha1==2){
        instrucoes();

    }
    
    }while(escolha1!=0);
   

    printf("o jogo  do jogador %s terminou com %d tentativas\n", n.name, t.tentativas+1);
    int matriz[i][t.tentativas];
    int secao;
   printf("se nao quiser outra secao de jogo digite 0 caso contrario digite outro numero\n");
   scanf("%d", &secao);
   if(secao==0){
    break;
   } 

    
    
    }






    return 0;
}