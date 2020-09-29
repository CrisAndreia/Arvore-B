typedef struct no {
	int total;
	int* chaves;
	struct no** filhos;
	struct no* pai;
} No;

typedef struct arvoreB {
	No* raiz;
	int ordem;
} ArvoreB;

No* criaNo(ArvoreB* arvore);
ArvoreB* criaArvore(int ordem);
void percorreArvore(No* no, void (visita)(int chave));
int pesquisaBinaria(No* no, int chave);
int pesquisaBinaria(No* no, int chave);
int localizaChave(ArvoreB* arvore, int chave);
No* localizaNo(ArvoreB* arvore, int chave);
void adicionaChaveNo(No* no, No* novo, int chave);
int transbordo(ArvoreB *arvore, No *no);
No* divideNo(ArvoreB* arvore, No* no);
void adicionaChaveRecursivo(ArvoreB* arvore, No* no, No* novo, int chave);
void adicionaChave(ArvoreB* arvore, int chave);