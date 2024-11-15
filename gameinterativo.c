# include <stdio.h>
# include <stdlib.h>

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
