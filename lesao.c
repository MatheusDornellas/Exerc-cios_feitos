#include <stdio.h>
#include<stdlib.h>
#include "lesao.h"

Lesao *criaLesao(char *cartaoSus, char *id, char *diagnostico, char *regiao, int malignidade){

}

/*
Função que lê os dados de uma lesão a partir da entrada padrão. Consulte o enunciado e/ou os casos de teste para o formato esperado.
@return Ponteiro para a lesão lida.
*/
Lesao *lerLesao(){

}

/*
Função que obtém o cartão SUS associado a uma lesão.
@param l: Ponteiro para a lesão da qual se deseja obter o cartão SUS.
@param cartaoSus: String onde o cartão SUS será armazenado.
*/
char *getCartaoSusLesao(Lesao *l){

}

/*
Função que verifica se uma lesão é cirúrgica (maligna).
@param l: Ponteiro para a lesão a ser verificada.
@return 1 se a lesão for cirúrgica (maligna), 0 caso contrário.
*/
int verificaCirurgicaLesao(Lesao *l){

}

/*
Função que imprime o identificador de uma lesão.
@param l: Ponteiro para a lesão cuja identificação será impressa.
*/
void imprimeIdLesao(Lesao *l){

}

/*
Função que libera a memória alocada para uma lesão.
@param l: Ponteiro para a lesão a ser liberada.
*/
void liberaLesao(Lesao *l){

}