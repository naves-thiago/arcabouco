#if ! defined( DADO_ )
#define DADO_
/**********************************************************************
*
*  $MCD Módulo de definição: Módulo dado
*
*  Arquivo gerado:              dado.h
*  Letras identificadoras:      DAD
*
*  Projeto: Disciplina INF 1301
*  Autores: gbo - Gabriel Barbosa de Oliveira
*           gapm - Guilherme de Azevedo Pereira Marques
*           tdn - Thiago Duarte Naves
*
*  $HA Histórico de evolução:
*     Versão  Autor             Data       Observações
*       1.00  gbo, gapm, tdn    18/09/2015 Início do desenvolvimento
*
*  $ED Descrição do módulo
*     Gera dois números aleatórios.
*
***********************************************************************/


/***********************************************************************
*
*  $TC Tipo de dados: DAD Condições de retorno
*
*
***********************************************************************/

   typedef enum {

      DAD_CondRetOK = 0
          /* Rodou sem erros */

   } DAD_tpCondRet ;


/***********************************************************************
*
*  $FC Função: DAD Jogar Dados
*
*  $ED Descrição da função
*     Gera dois números aleatórios entre 1 e 6.
*
*  $EP Parâmetros
*     $P pDado1 - Resultado do dado 1.
*     $P pDado2 - Resultado do dado 2.
*
*  $FV Valor retornado
*     DAD_CondRetOK
*
*  Assertivas de entrada:
*     - Os ponteiros passados como parametro devem ser válidos
*
*  Assertivas de saída:
*     - pDado1 e pDado2 tenham valores gerados aleatoriamente
*
***********************************************************************/

   DAD_tpCondRet DAD_JogarDados( int * pDado1 , int * pDado2 ) ;


/********** Fim do módulo de definição: Módulo dado **********/

#else
#endif
