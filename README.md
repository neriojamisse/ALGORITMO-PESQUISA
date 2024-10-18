# ALGORITMO DE PESQUISA

# Introdução

Este projeto contém dois exercícios em C, em quais sao implementados os algoritmos de pesquisa linear e pesquisa binaria. Para o caso de estudo esconlhi o problema de implementar o algoritmo para ajudar a encontrar um certo contacto dentro duma lista de contacto lista de contactos.

---

## Pesquisa Linear

```bash
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
```
<img src="images\Screenshot (24).png" alt="Console" width="300" height="300">

---

## Pesquisa binaria

```bash
struct Contato {
    char nome[50];
    char telefone[15];
};

int PesquisaBinaria(struct Contato contatos[], int tamanhoArray, char nomeProcurado[]) {
    int indiceInferior = 0;
    int indiceSuperior = tamanhoArray - 1;
    int indiceMeio;

    while (indiceInferior <= indiceSuperior) {
        indiceMeio = (indiceInferior + indiceSuperior) / 2;

        int comparacao = strcmp(contatos[indiceMeio].nome, nomeProcurado);

        if (comparacao == 0) {
            return indiceMeio;
        } else if (comparacao < 0) {
            indiceInferior = indiceMeio + 1;
        } else {
            indiceSuperior = indiceMeio - 1;
        }
    }

    return -1;
}
```
<img src="images\Screenshot (25).png" alt="Console" width="300" height="300">
