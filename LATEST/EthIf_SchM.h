#pragma once
/*****************************************************/
/* File   : EthIf_SchM.h                             */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "Compiler_Cfg_EthIf.h"

#include "SchM_Client.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class interface_EthIf_SchM : public interface_SchM_Client{
   public:
/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
      FUNC(void, ETHIF_CODE) MainFunction      (void);
      FUNC(void, ETHIF_CODE) MainFunctionRx    (void);
      FUNC(void, ETHIF_CODE) MainFunctionTx    (void);
      FUNC(void, ETHIF_CODE) MainFunctionState (void);
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
extern interface_EthIf_SchM *SchM_Client_ptr_EthIf;

/*****************************************************/
/* EOF                                               */
/*****************************************************/
