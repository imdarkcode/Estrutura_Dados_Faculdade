#include <stdio.h>

// Definir tipo de dado n�

typedef struct no {
    int valor;
    struct no *proximo;
}No;

// Fun��o de inserir valor na lista

void inserir_no_inicio(No **lista, int num) {
    No *novo = malloc(sizeof(No)); // Alocar espa�o na mem�ria para o valor

    // Verificar se foi alocado

    if(novo) {
        // Atribuir valores a lista e apontar para o pr�ximo n�

        novo -> valor = num;
        novo -> proximo = *lista;
        *lista = novo;
    }
    else {
        printf("Erro ao alocar mem�ria\n");
    }
}

// Fun��o de exibir lista

void exibir_lista(No *lista) {
    printf("Lista:");

    while(lista) {
        printf(" %d ->", lista -> valor);
        lista = lista -> proximo;
    }

    printf("NULL\n");
}

int main(void) {
    No *minha_lista = NULL; // Iniciar lista vazia

    // Inserir valores

    inserir_no_inicio(&minha_lista, 3);
    inserir_no_inicio(&minha_lista, 7);
    inserir_no_inicio(&minha_lista, 1);

    exibir_lista(minha_lista); // Chamar fun��o de exibir lista
}
