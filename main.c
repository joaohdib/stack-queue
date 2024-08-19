#include <Stdio.h>
#include <Stdlib.h>

typedef struct elemento Elemento;
struct elemento {
	int num;
	struct elemento* prox;
};

typedef struct pilha Pilha;
struct pilha {
	Elemento* topo;
};

typedef struct fila Fila;
struct fila {
	Elemento* final;
	Elemento* inicial;
};

Fila* criarFila() {
	Fila* novaFila = (Fila*)malloc(sizeof(Fila));
	if (novaFila == NULL) {
		exit(1);
	}
	novaFila->final = NULL;
	novaFila->inicial = NULL;

	return novaFila;
}

Fila* inserirFila(int num, Fila* f) {
	Elemento* novoEl;
	Elemento* antigoFinal;

	novoEl = (Elemento*)malloc(sizeof(Elemento));
	if (novoEl == NULL) {
		return NULL;
	}

	novoEl->num = num;
	antigoFinal = f->final;

	if (antigoFinal == NULL) {
		f->inicial = novoEl;
	}
	else {
		antigoFinal->prox = novoEl;
	}
	f->final = novoEl;
	novoEl->prox = NULL;

	return f;
}

Fila* excluirFila(Fila* f) {
	Elemento* elemento = f->inicial;
	Elemento* anterior = (f->inicial)->prox;
	if (f->inicial == NULL || f->final == NULL) {
		exit(1);
	}
	f->inicial = anterior;
	if (f->inicial == NULL) {
		f->final = NULL;
	}
	free(elemento);

	return f;
}

void exibirFila(Fila* f) {
	Elemento* el = f->inicial;
	while (el != NULL) {
		printf("%d -> ", el->num);
		el = el->prox;
	}
	printf("\n");
	return;
}

void liberarFila(Fila* f) {
	Elemento* atual = f->inicial;
	while (atual != NULL) {
		Elemento* proximo = atual->prox;
		free(atual);
		atual = proximo;
	}
	free(f);
	printf("Fila liberada com sucesso! \n");
}

Pilha* criarPilha() {
	Pilha* p = (Pilha*)malloc(sizeof(Pilha));
	if (p == NULL) {
		exit(1);
	}
	p->topo = NULL;


	return p;
}

Pilha* inserirPilha(int num, Pilha* p) {
	Elemento* novoEl;
	Elemento* antigoTopo;
	novoEl = (Elemento*)malloc(sizeof(Elemento));
	if (novoEl == NULL) {
		exit(1);
	}
	novoEl->num = num;
	antigoTopo = p->topo;
	p->topo = novoEl;
	novoEl->prox = antigoTopo;


	return p;

}

Pilha* excluirPilha(Pilha* p) {
	Elemento* anterior = (p->topo)->prox;
	Elemento* topoAntigo;

	if (p->topo == NULL) {
		exit(1);
	}

	topoAntigo = p->topo;
	free(topoAntigo);

	p->topo = anterior;

	return p;
}

void exibirPilha(Pilha* p) {
	Elemento* el = p->topo;
	while (el != NULL) {
		printf("%d -> ", el->num);
		el = el->prox;
	}
	printf("\n");
	return;
}

void liberarPilha(Pilha* p) {
	Elemento* atual = p->topo;
	while (atual != NULL) {
		Elemento* proximo = atual->prox;
		free(atual);
		atual = proximo;
	}
	free(p);
	printf("Pilha liberada com sucesso! \n");
}

int main() {
	Pilha* p;
	Fila* f;

	p = criarPilha();
	printf("ADICIONANDO 10 ELEMENTOS NA PILHA: \n");
	for (int i = 1; i <= 10; i++) {
		inserirPilha(i, p);
		exibirPilha(p);
	}
	printf("EXCLUINDO 10 ELEMENTOS NA PILHA: \n");
	for (int i = 1; i <= 10; i++) {
		excluirPilha(p);
		exibirPilha(p);
	}

	liberarPilha(p);

	f = criarFila();
	printf("\nADICIONANDO 10 ELEMENTOS NA FILA: \n");
	for (int i = 1; i <= 10; i++) {
		inserirFila(i, f);
		exibirFila(f);
	}

	printf("\nEXCLUINDO 10 ELEMENTOS NA FILA: \n");
	for (int i = 1; i <= 10; i++) {
		excluirFila(f);
		exibirFila(f);
	}

	liberarFila(f);
}






