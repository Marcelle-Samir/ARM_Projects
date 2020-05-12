/*
 * LIN_cfg.h
 *
 *  Created on: May 8, 2020
 *      Author: DELL
 */

#ifndef LIN_CFG_H_
#define LIN_CFG_H_

#define MASTER_NODE  		1
#define SLAVE_NODE  		2
#define NODE_STATE   		MASTER_NODE

#define LISTENER      		1
#define OWNER    		    2

#define NUMBER_OF_MSGS   	2
#define MAX_TRANSMIT_SIZE	2
#define MAX_RECEIVE_SIZE	2

#define LIN_V1              0
#define LIN_V2              1

#define LIN_VERSION         LIN_V1

typedef struct
{
	uint_8t ID;
	uint_8t msgState;
	uint_8t dataSize;
	uint_8t * data;
}LIN_Slavecfg_t;

#if NODE_STATE == MASTER_NODE
#define MAX_MSGS_NUM    3
typedef struct
{
	uint_8t ID;
	uint_8t ExecTime;

}LIN_Mastercfg_t;
#endif

#endif /* LIN_CFG_H_ */
