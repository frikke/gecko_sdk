/***************************************************************************//**
 * @file
 * @brief CANopen CAN Interface Abstraction
 *******************************************************************************
 * # License
 * <b>Copyright 2018 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * The licensor of this software is Silicon Laboratories Inc.  Your use of this
 * software is governed by the terms of Silicon Labs Master Software License
 * Agreement (MSLA) available at
 * www.silabs.com/about-us/legal/master-software-license-agreement.
 * The software is governed by the sections of the MSLA applicable to Micrium
 * Software.
 *
 ******************************************************************************/

/********************************************************************************************************
 ********************************************************************************************************
 *                                               MODULE
 ********************************************************************************************************
 *******************************************************************************************************/

#ifndef _CANOPEN_IF_PRIV_H_
#define _CANOPEN_IF_PRIV_H_

/********************************************************************************************************
 ********************************************************************************************************
 *                                            INCLUDE FILES
 ********************************************************************************************************
 *******************************************************************************************************/

#include  <cpu/include/cpu.h>
#include  <common/include/rtos_err.h>

#include  <canopen/include/canopen_if.h>
#include  <canopen/include/canopen_types.h>
#include  <can/include/can_bus.h>
#include  <can/source/can_bus_priv.h>

/********************************************************************************************************
 ********************************************************************************************************
 *                                             DATA TYPES
 ********************************************************************************************************
 *******************************************************************************************************/

/****************************************************************************************************//**
 *                                           CANopen interface
 *
 * @note    This structure holds all data, which are needed for the CAN bus management.
 *******************************************************************************************************/

typedef struct canopen_if {
  CANOPEN_NODE   *NodePtr;                                      ///< Link to parent node.
  CAN_BUS_HANDLE Bus;                                           ///< CAN Bus Specification.
  CPU_INT08U     IntNbr;                                        ///< CAN Bus interrupt number.
} CANOPEN_IF;

/********************************************************************************************************
 ********************************************************************************************************
 *                                         FUNCTION PROTOTYPES
 ********************************************************************************************************
 *******************************************************************************************************/

void CANopen_IfInit(CANOPEN_IF   *p_if,
                    CANOPEN_NODE *p_node,
                    RTOS_ERR     *p_err);

void CANopen_IfRd(CANOPEN_IF     *p_if,
                  CANOPEN_IF_FRM *p_frm,
                  RTOS_ERR       *p_err);

void CANopen_IfWr(CANOPEN_IF     *p_if,
                  CANOPEN_IF_FRM *p_frm,
                  RTOS_ERR       *p_err);

void CANopen_IfStart(CANOPEN_NODE *p_node,
                     RTOS_ERR     *p_err);

void CANopen_IfReset(CANOPEN_IF *p_if,
                     RTOS_ERR   *p_err);

void CANopen_IfClose(CANOPEN_IF *p_if,
                     RTOS_ERR   *p_err);

void CANopen_IfTmrCbReg(RTOS_ERR *p_err);

/********************************************************************************************************
 ********************************************************************************************************
 *                                               MODULE END
 ********************************************************************************************************
 *******************************************************************************************************/

#endif // _CANOPEN_IF_PRIV_H_