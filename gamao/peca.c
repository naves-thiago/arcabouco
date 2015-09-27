/**********************************************************************
*
*  $MCD Módulo de definição: Módulo Peça
*
*  Arquivo gerado:              peca.c
*  Letras identificadoras:      PEC
*
*  Projeto: Disciplina INF 1301
*  Autores: gbo - Gabriel Barbosa de Oliveira
*           gapm - Guilherme de Azevedo Pereira Marques
*           tdn - Thiago Duarte Naves
*
*  $HA Histórico de evolução:
*     Versão  Autor               Data     Observações
*       1.00  gbo, gapm, tdn    18/09/2015 Início do desenvolvimento

*  $ED Descrição do módulo
*     Descrição...
*
***********************************************************************/

#include   <stdio.h>
#include   <stdlib.h>
#include   "peca.h"

typedef struct peca {

int cor;
/*cor da peca*/

}tpPeca;

/*****  Código das funções exportadas pelo módulo  *****/


/***************************************************************************
*
*  Função: PEC Criar
*  ****/

   PEC_tpCondRet Criar( PEC_tppPeca * pPeca , int cor )
   {
	   tpPeca * peca;

	   if(pPeca == NULL)
	   {
		   return PEC_CondRetPonteiroRetornoNulo;
	   }/*if*/

	   *pPeca = (tpPeca*) malloc(sizeof(tpPeca)) ;

	  if ( *pPeca == NULL )
      {
         return PEC_CondRetFaltouMemoria ;
      } /* if */

	  peca = ( tpPeca *) *pPeca ;
      peca->cor = cor;

	  return PEC_CondRetOK;

   } /* Fim função: PEC Criar */


/***************************************************************************
*
*  Função: PEC Destruir
*  ****/

   PEC_tpCondRet Destruir( PEC_tppPeca pPeca )
   {
	   tpPeca * peca = ( tpPeca * ) pPeca ;

	   if(pPeca == NULL)
	   {
		   return PEC_CondRetPonteiroRetornoNulo;
	   }/*if*/

	   free(peca);

	   return PEC_CondRetOK;

   } /* Fim função: PEC Destruir */


/***************************************************************************
*
*  Função: PEC Obter cor
*  ****/

   PEC_tpCondRet ObterCor( PEC_tppPeca pPeca , int * pCor )
   {
	   tpPeca * peca = ( tpPeca * ) pPeca ;
	   
	   if(pPeca == NULL)
	   {
		   return PEC_CondRetPonteiroRetornoNulo;
	   }/*if*/

	   *pCor = peca->cor ;

	   return PEC_CondRetOK;


   } /* Fim função: PEC Obter cor */


/*****  Código das funções encapsuladas pelo módulo  *****/


/********** Fim do módulo de implementação: Módulo Peça **********/

