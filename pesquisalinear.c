#include <stdio.h>
#include <string.h>

struct Contato {
    char nome[50];
    char telefone[15];
};

int PesquisaLinear(struct Contato contatos[], int tamanhoArray, char nomeProcurado[]) {
    for (int i = 0; i < tamanhoArray; i++) {

        if (strcmp(contatos[i].nome, nomeProcurado) == 0) {
            return i;
        }
    }
    return -1;
}

int main() {

    struct Contato contatos[] = {
        {"Alice", "+258-841234567"},
        {"Bruno", "+258-841234568"},
        {"Carlos", "+258-841234569"},
        {"Diana", "+258-841234570"},
        {"Eduardo", "+258-841234571"}
    };

    int tamanhoArray = sizeof(contatos) / sizeof(contatos[0]);
    char nomeProcurado[50];

    printf("===PESQUISA LINEAR===\n\n");

    printf("Digite o nome do contato a ser pesquisado: ");
    scanf("%s", nomeProcurado);

    int resultado = PesquisaLinear(contatos, tamanhoArray, nomeProcurado);

    if (resultado != -1) {
        printf("Contato encontrado: Nome: %s, Telefone: %s\n", contatos[resultado].nome, contatos[resultado].telefone);
    } else {
        printf("Contato nao encontrado.\n");
    }

    return 0;
}
