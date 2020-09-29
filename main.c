#include <stdio.h>
#include "ArvoreB.h"

int main(void) {
	void visita(int x);
  
	ArvoreB *arvoreB = criaArvore(1);

	for (int i = 20; i<=20; i ++){
		adicionaChave(arvoreB, i);
	}
	percorreArvore(arvoreB->raiz, visita);

  return 0;
}

void visita(int x){
	printf("%d\t",x); 
}