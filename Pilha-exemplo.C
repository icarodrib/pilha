// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Constante do Tamanho da Pilha
#define TAM 5

// Funções
void menu();                                    // Menu de opções.
void push();                                    // Adicionando um item a pilha.
void pop();                                     // Removendo um item do topo da pilha.
void peek();                                    // Vendo o item que esta no topo da pilha.
bool isFull();                                  // Verificação se a pilha está cheia.
bool isEmpty();                                 // Verificação se a pilha está vazia.

// Variaveis
int topo = -1, array[TAM];                      // Criação do topo e da pilha[com tamanho 'TAM' que foi definido lá em cima.]

int main(void)                                  // Programa Principal.
{
    menu();
    printf("\n\nF I M  D O  P R O G R A M A.");
    return 0;
};

void menu(){
    do{
        int opcao;
        printf("MENU");
        printf("\n1.Adicionar a pilha");
        printf("\n2.Remover da pilha");
        printf("\n3.Mostrar topo da pilha");
        printf("\n0.Sair");
        printf("\n\nDigite a opcao que deseja utilizar (0-3): ");
        scanf("%d", &opcao);

        if(opcao == 0){
            break;
        };

        switch (opcao)
        {
        case 1:
            push();
            break;
        
        case 2:
            pop();
            break;
        
        case 3:
            printf("\nTopo da pilha: ");
            peek();
            break;
        
        default:
            printf("\nNumero digitado invalido, por favor digite uma opcao valida.\n\n");
            break;
        }
    }while(true);
};

void push()
{
    int valor;
    if(isFull() == true){
        printf("\nImpossivel adicionar novo item, a pilha se encontra cheia.\n\n");
    }else{
        topo++;
        printf("\nDigite o valor que deseja adicionar ao topo da pilha: ");
        scanf("%d", &valor);
        array[topo] = valor;
        printf("\n\n");
    };
};

void pop()
{
    if(isEmpty() == true){
        printf("\nImpossivel remover item do topo pois a pilha ja se encontra vazia.\n\n");
    }else{
        printf("\nItem removido com sucesso: ");
        peek();
        topo--;
    };
};

void peek()
{
    if(isEmpty() == true){
        printf("\nA pilha se encontra vazia.\n\n");
    }else{
        printf("%d\n\n", array[topo]);
    };
};

bool isFull(){
    if(topo == (TAM-1)){
        return(true);
    }else{
        return(false);
    };
};

bool isEmpty()
{
    if(topo == -1){
        return(true);
    }else{
        return(false);
    };
};