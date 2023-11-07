#ifndef HEAP_H
#define HEAP_H

struct informacoes
{
    int dado;
    int prioridade;
};
typedef struct informacoes Informacoes;

struct heap
{
    Informacoes info;
    struct heap *esquerda;
    struct heap *direita;
};
typedef struct heap Heap;

Heap *heap_cria_vazia();

Heap *insere_na_fila(int prioridade, int dado);

int quant_de_nos(Heap *raiz);

Heap *ordena_heap(Heap *raiz);

Heap *fila_prio_inserir(Heap *raiz, int prioridade, int dado);

void imprimir(Heap *a);

void inserir(Heap **raiz);

Heap *encontra_ultimo_elemento(Heap *raiz);

Heap *troca_nos(Heap *raiz, Heap *ultimo);

Heap *remover(Heap *raiz);



#endif