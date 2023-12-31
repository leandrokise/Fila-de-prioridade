#include <stdio.h>
#include <stdlib.h>
#include "heap.h"

void espera_enter()
{
    printf("\nPressione Enter para continuar...");
    while (getchar() != '\n')
        ;
    getchar();
}

void menu_opcoes(Heap **raiz, int opcao)
{
    Heap *ultimo_no;
    switch (opcao)
    {
    case 1:
        *raiz = inserir(*raiz);
        break;
    case 2:
        *raiz = remover(*raiz);
        break;
    case 3:
        imprimir(*raiz);
        break;
    default:
        break;
    }
}

void menu(Heap *raiz)
{
    int opcao;
    do
    {
        printf("\n\tMENU:\n");
        printf("1. Inserir na Heap.\n");
        printf("2. Remover da Heap.\n");
        printf("3. Imprimir Heap.\n");
        printf("4. Sair\n");

        do
        {
            printf("DIGITE A OPERACAO QUE DESEJA REALIZAR: ");
            scanf("%d", &opcao);
            if (opcao < 1 || opcao > 4)
            {
                printf("POR FAVOR DIGITE UM NUMERO VALIDO!\n");
            }
        } while (opcao < 1 || opcao > 4);

        menu_opcoes(&raiz, opcao);
        espera_enter();

    } while (opcao != 4);
}

int main()
{
    Heap *raiz = heap_cria_vazia();
    menu(raiz);
    return 0;
}
