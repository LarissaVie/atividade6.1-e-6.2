#include <stdio.h>
#include <stdbool.h>

#define MAX 100 

typedef struct {
    int l[MAX];
    int h;
    int v;
} Fila;

// Inicializa a fila
void inicializarFila(Fila *fila) {
    fila->h = 0;
    fila->v = -1; 
}


bool filaVazia(Fila *fila) {
    return fila->h > fila->v;
}


bool filaCheia(Fila *fila) {
    return fila->v == MAX - 1;
}


void inserir(Fila *fila, int y) {
    if (!filaCheia(fila)) {
        fila->v += 1;
        fila->l[fila->v] = y;
    } else {
        printf("Fila cheia. Não é possível inserir o elemento %d.\n", y);
    }
}


int remover(Fila *fila) {
    if (!filaVazia(fila)) {
        int elemento_removido = fila->l[fila->h];
        fila->h += 1;
        return elemento_removido;
    } else {
        printf("Fila vazia. Não há elementos para remover.\n");
        return -1;
    }
}


void imprimirFila(Fila *fila) {
    if (filaVazia(fila)) {
        printf("Fila vazia.\n");
    } else {
        printf("Fila: ");
        for (int i = fila->h; i <= fila->v; i++) {
            printf("%d ", fila->l[i]);
        }
        printf("\n");
    }
}

int main() {
    Fila fila;
    inicializarFila(&fila);

    inserir(&fila, 10);
    inserir(&fila, 20);
    inserir(&fila, 30);
    imprimirFila(&fila); 

    printf("Elemento removido: %d\n", remover(&fila)); 
    imprimirFila(&fila);

    return 0;
}
