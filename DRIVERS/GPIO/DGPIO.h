
#ifndef DGPIO_H_
#define DGPIO_H_


/*************************************
 ***************ALL_PINS**************
 *************************************/
#define PIN_0	0x0001
#define PIN_1   0x0002
#define PIN_2	0x0004
#define PIN_3	0x0008
#define PIN_4	0x0010
#define PIN_5	0x0020
#define PIN_6	0x0040
#define PIN_7	0x0080
#define PIN_8	0x0100
#define PIN_9	0x0200
#define PIN_10	0x0400
#define PIN_11	0x0800
#define PIN_12	0x1000
#define PIN_13	0x2000
#define PIN_14	0x4000
#define PIN_15	0x8000
#define PIN_ALL 0xFFFF

/*************************************
 **************MODES_PIN0*************
 *************************************/
#define MODE_PIN0_OP_PP				0X0000000000000000
#define MODE_PIN0_OP_OD				0X0000000000000004
#define MODE_PIN0_AF_PP				0X0000000000000008
#define MODE_PIN0_AF_OD				0X000000000000000C
#define MODE_PIN0_IP_ANALOG			0X0000000000000000
#define MODE_PIN0_IP_FLOATING	    0X0000000000000004
#define MODE_PIN0_IP_PDR		    0X0000000000000008
#define MODE_PIN0_IP_PUR			0X000000000000000C

/*************************************
 **************MODES_PIN1*************
 *************************************/
#define MODE_PIN1_OP_PP				0X0000000000000000
#define MODE_PIN1_OP_OD				0X0000000000000040
#define MODE_PIN1_AF_PP				0X0000000000000080
#define MODE_PIN1_AF_OD				0X00000000000000C0
#define MODE_PIN1_IP_ANALOG			0X0000000000000000
#define MODE_PIN1_IP_FLOATING	    0X0000000000000040
#define MODE_PIN1_IP_PDR     		0X0000000000000080
#define MODE_PIN1_IP_PUR			0X00000000000000C0

/*************************************
 **************MODES_PIN2*************
 *************************************/
#define MODE_PIN2_OP_PP				0X0000000000000000
#define MODE_PIN2_OP_OD				0X0000000000000400
#define MODE_PIN2_AF_PP				0X0000000000000800
#define MODE_PIN2_AF_OD				0X0000000000000C00
#define MODE_PIN2_IP_ANALOG			0X0000000000000000
#define MODE_PIN2_IP_FLOATING	    0X0000000000000400
#define MODE_PIN2_IP_PDR    		0X0000000000000800
#define MODE_PIN2_IP_PUR            0X0000000000000C00

/*************************************
 **************MODES_PIN3*************
 *************************************/
#define MODE_PIN3_OP_PP				0X0000000000000000
#define MODE_PIN3_OP_OD				0X0000000000004000
#define MODE_PIN3_AF_PP				0X0000000000008000
#define MODE_PIN3_AF_OD				0X000000000000C000
#define MODE_PIN3_IP_ANALOG			0X0000000000000000
#define MODE_PIN3_IP_FLOATING	    0X0000000000004000
#define MODE_PIN3_IP_PDR	    	0X0000000000008000
#define MODE_PIN3_IP_PUR			0X000000000000C000

/*************************************
 **************MODES_PIN4*************
 *************************************/
#define MODE_PIN4_OP_PP				0X0000000000000000
#define MODE_PIN4_OP_OD				0X0000000000040000
#define MODE_PIN4_AF_PP				0X0000000000080000
#define MODE_PIN4_AF_OD				0X00000000000C0000
#define MODE_PIN4_IP_ANALOG			0X0000000000000000
#define MODE_PIN4_IP_FLOATING	    0X0000000000040000
#define MODE_PIN4_IP_PDR	    	0X0000000000080000
#define MODE_PIN4_IP_PUR			0X00000000000C0000

/*************************************
 **************MODES_PIN5*************
 *************************************/
#define MODE_PIN5_OP_PP				0X0000000000000000
#define MODE_PIN5_OP_OD				0X0000000000400000
#define MODE_PIN5_AF_PP				0X0000000000800000
#define MODE_PIN5_AF_OD				0X0000000000C00000
#define MODE_PIN5_IP_ANALOG			0X0000000000000000
#define MODE_PIN5_IP_FLOATING	    0X0000000000400000
#define MODE_PIN5_IP_PDR     		0X0000000000800000
#define MODE_PIN5_IP_PUR			0X0000000000C00000

/*************************************
 **************MODES_PIN6*************
 *************************************/
#define MODE_PIN6_OP_PP				0X0000000000000000
#define MODE_PIN6_OP_OD				0X0000000004000000
#define MODE_PIN6_AF_PP				0X0000000008000000
#define MODE_PIN6_AF_OD				0X000000000C000000
#define MODE_PIN6_IP_ANALOG			0X0000000000000000
#define MODE_PIN6_IP_FLOATING	    0X0000000004000000
#define MODE_PIN6_IP_PDR	    	0X0000000008000000
#define MODE_PIN6_IP_PUR			0X000000000C000000

/*************************************
 **************MODES_PIN7*************
 *************************************/
#define MODE_PIN7_OP_PP				0X0000000000000000
#define MODE_PIN7_OP_OD				0X0000000040000000
#define MODE_PIN7_AF_PP				0X0000000080000000
#define MODE_PIN7_AF_OD				0X00000000C0000000
#define MODE_PIN7_IP_ANALOG			0X0000000000000000
#define MODE_PIN7_IP_FLOATING	    0X0000000040000000
#define MODE_PIN7_IP_PDR		    0X0000000080000000
#define MODE_PIN7_IP_PUR			0X00000000C0000000

/*************************************
 **************MODES_PIN8*************
 *************************************/
#define MODE_PIN8_OP_PP				0X0000000000000000
#define MODE_PIN8_OP_OD				0X0000000400000000
#define MODE_PIN8_AF_PP				0X0000000800000000
#define MODE_PIN8_AF_OD				0X0000000C00000000
#define MODE_PIN8_IP_ANALOG			0X0000000000000000
#define MODE_PIN8_IP_FLOATING	    0X0000000400000000
#define MODE_PIN8_IP_PDR		    0X0000000800000000
#define MODE_PIN8_IP_PUR			0X0000000C00000000

/*************************************
 **************MODES_PIN9*************
 *************************************/
#define MODE_PIN9_OP_PP				0X0000000000000000
#define MODE_PIN9_OP_OD				0X0000004000000000
#define MODE_PIN9_AF_PP				0X0000008000000000
#define MODE_PIN9_AF_OD				0X000000C000000000
#define MODE_PIN9_IP_ANALOG			0X0000000000000000
#define MODE_PIN9_IP_FLOATING	    0X0000004000000000
#define MODE_PIN9_IP_PDR		    0X0000008000000000
#define MODE_PIN9_IP_PUR			0X000000C000000000

/*************************************
 **************MODES_PIN10************
 *************************************/
#define MODE_PIN10_OP_PP		    0X0000000000000000
#define MODE_PIN10_OP_OD		    0X0000040000000000
#define MODE_PIN10_AF_PP		    0X0000080000000000
#define MODE_PIN10_AF_OD		    0X00000C0000000000
#define MODE_PIN10_IP_ANALOG	    0X0000000000000000
#define MODE_PIN10_IP_FLOATING	    0X0000040000000000
#define MODE_PIN10_IP_PDR	     	0X0000080000000000
#define MODE_PIN10_IP_PUR			0X00000C0000000000

/*************************************
 **************MODES_PIN11************
 *************************************/
#define MODE_PIN11_OP_PP		    0X0000000000000000
#define MODE_PIN11_OP_OD		    0X0000400000000000
#define MODE_PIN11_AF_PP		    0X0000800000000000
#define MODE_PIN11_AF_OD		    0X0000C00000000000
#define MODE_PIN11_IP_ANALOG	    0X0000000000000000
#define MODE_PIN11_IP_FLOATING	    0X0000400000000000
#define MODE_PIN11_IP_PDR	        0X0000800000000000
#define MODE_PIN11_IP_PUR			0X0000C00000000000

/*************************************
 **************MODES_PIN12************
 *************************************/
#define MODE_PIN12_OP_PP		    0X0000000000000000
#define MODE_PIN12_OP_OD		    0X0004000000000000
#define MODE_PIN12_AF_PP		    0X0008000000000000
#define MODE_PIN12_AF_OD		    0X000C000000000000
#define MODE_PIN12_IP_ANALOG	    0X0000000000000000
#define MODE_PIN12_IP_FLOATING	    0X0004000000000000
#define MODE_PIN12_IP_PDR   		0X0008000000000000
#define MODE_PIN12_IP_PUR    		0X000C000000000000

/*************************************
 **************MODES_PIN13************
 *************************************/
#define MODE_PIN13_OP_PP	  		0X0000000000000000
#define MODE_PIN13_OP_OD	  	    0X0040000000000000
#define MODE_PIN13_AF_PP	  	    0X0080000000000000
#define MODE_PIN13_AF_OD	  	    0X00C0000000000000
#define MODE_PIN13_IP_ANALOG  	    0X0000000000000000
#define MODE_PIN13_IP_FLOATING 	    0X0040000000000000
#define MODE_PIN13_IP_PDR	     	0X0080000000000000
#define MODE_PIN13_IP_PUR 			0X00C0000000000000

/*************************************
 **************MODES_PIN14************
 *************************************/
#define MODE_PIN14_OP_PP			0X0000000000000000
#define MODE_PIN14_OP_OD			0X0400000000000000
#define MODE_PIN14_AF_PP			0X0800000000000000
#define MODE_PIN14_AF_OD			0X0C00000000000000
#define MODE_PIN14_IP_ANALOG		0X0000000000000000
#define MODE_PIN14_IP_FLOATING	    0X0400000000000000
#define MODE_PIN14_IP_PDR		    0X0800000000000000
#define MODE_PIN14_IP_PUR			0X0C00000000000000

/*************************************
 **************MODES_PIN15************
 *************************************/
#define MODE_PIN15_OP_PP			0X0000000000000000
#define MODE_PIN15_OP_OD			0X4000000000000000
#define MODE_PIN15_AF_PP			0X8000000000000000
#define MODE_PIN15_AF_OD			0XC000000000000000
#define MODE_PIN15_IP_ANALOG		0X0000000000000000
#define MODE_PIN15_IP_FLOATING	    0X4000000000000000
#define MODE_PIN15_IP_PDR		    0X8000000000000000
#define MODE_PIN15_IP_PUR			0XC000000000000000
/*************************************************************************************************************/

/*************************************
 **************SPEEDS_PIN0************
 *************************************/
#define SPEED_PIN0_10MHZ			0X0000000000000001
#define SPEED_PIN0_2MHZ				0X0000000000000002
#define SPEED_PIN0_50MHZ			0X0000000000000003
#define SPEED_PIN0_INPUT			0X0000000000000000

/*************************************
 **************SPEEDS_PIN1************
 *************************************/
#define SPEED_PIN1_10MHZ			0X0000000000000010
#define SPEED_PIN1_2MHZ				0X0000000000000020
#define SPEED_PIN1_50MHZ			0X0000000000000030
#define SPEED_PIN1_INPUT			0X0000000000000000

/*************************************
 **************SPEEDS_PIN2************
 *************************************/
#define SPEED_PIN2_10MHZ			0X0000000000000100
#define SPEED_PIN2_2MHZ				0X0000000000000200
#define SPEED_PIN2_50MHZ			0X0000000000000300
#define SPEED_PIN2_INPUT			0X0000000000000000

/*************************************
 **************SPEEDS_PIN3************
 *************************************/
#define SPEED_PIN3_10MHZ			0X0000000000001000
#define SPEED_PIN3_2MHZ				0X0000000000002000
#define SPEED_PIN3_50MHZ			0X0000000000003000
#define SPEED_PIN3_INPUT			0X0000000000000000

/*************************************
 **************SPEEDS_PIN4************
 *************************************/
#define SPEED_PIN4_10MHZ			0X0000000000010000
#define SPEED_PIN4_2MHZ				0X0000000000020000
#define SPEED_PIN4_50MHZ			0X0000000000030000
#define SPEED_PIN4_INPUT			0X0000000000000000

/*************************************
 **************SPEEDS_PIN5************
 *************************************/
#define SPEED_PIN5_10MHZ			0X0000000000100000
#define SPEED_PIN5_2MHZ				0X0000000000200000
#define SPEED_PIN5_50MHZ			0X0000000000300000
#define SPEED_PIN5_INPUT			0X0000000000000000

/*************************************
 **************SPEEDS_PIN6************
 *************************************/
#define SPEED_PIN6_10MHZ			0X0000000001000000
#define SPEED_PIN6_2MHZ				0X0000000002000000
#define SPEED_PIN6_50MHZ			0X0000000003000000
#define SPEED_PIN6_INPUT			0X0000000000000000

/*************************************
 **************SPEEDS_PIN7************
 *************************************/
#define SPEED_PIN7_10MHZ			0X0000000010000000
#define SPEED_PIN7_2MHZ				0X0000000020000000
#define SPEED_PIN7_50MHZ			0X0000000030000000
#define SPEED_PIN7_INPUT			0X0000000000000000

/*************************************
 **************SPEEDS_PIN8************
 *************************************/
#define SPEED_PIN8_10MHZ			0X0000000100000000
#define SPEED_PIN8_2MHZ				0X0000000200000000
#define SPEED_PIN8_50MHZ			0X0000000300000000
#define SPEED_PIN8_INPUT			0X0000000000000000

/*************************************
 **************SPEEDS_PIN9************
 *************************************/
#define SPEED_PIN9_10MHZ			0X0000001000000000
#define SPEED_PIN9_2MHZ				0X0000002000000000
#define SPEED_PIN9_50MHZ			0X0000003000000000
#define SPEED_PIN9_INPUT			0X0000000000000000

/*************************************
 **************SPEEDS_PIN10***********
 *************************************/
#define SPEED_PIN10_10MHZ			0X0000010000000000
#define SPEED_PIN10_2MHZ			0X0000020000000000
#define SPEED_PIN10_50MHZ			0X0000030000000000
#define SPEED_PIN10_INPUT			0X0000000000000000

/*************************************
 **************SPEEDS_PIN11***********
 *************************************/
#define SPEED_PIN11_10MHZ			0X0000100000000000
#define SPEED_PIN11_2MHZ			0X0000200000000000
#define SPEED_PIN11_50MHZ			0X0000300000000000
#define SPEED_PIN11_INPUT			0X0000000000000000

/*************************************
 **************SPEEDS_PIN12***********
 *************************************/
#define SPEED_PIN12_10MHZ			0X0001000000000000
#define SPEED_PIN12_2MHZ			0X0002000000000000
#define SPEED_PIN12_50MHZ			0X0003000000000000
#define SPEED_PIN12_INPUT			0X0000000000000000

/*************************************
 **************SPEEDS_PIN13***********
 *************************************/
#define SPEED_PIN13_10MHZ			0X0010000000000000
#define SPEED_PIN13_2MHZ			0X0020000000000000
#define SPEED_PIN13_50MHZ			0X0030000000000000
#define SPEED_PIN13_INPUT			0X0000000000000000

/*************************************
 **************SPEEDS_PIN14***********
 *************************************/
#define SPEED_PIN14_10MHZ			0X0100000000000000
#define SPEED_PIN14_2MHZ			0X0200000000000000
#define SPEED_PIN14_50MHZ			0X0300000000000000
#define SPEED_PIN14_INPUT			0X0000000000000000

/*************************************
 **************SPEEDS_PIN15***********
 *************************************/
#define SPEED_PIN15_10MHZ			0X1000000000000000
#define SPEED_PIN15_2MHZ			0X2000000000000000
#define SPEED_PIN15_50MHZ			0X3000000000000000
#define SPEED_PIN15_INPUT			0X0000000000000000


/*************************************
 ******BASE_ADDRESS_OF_EACH_PORT******
 *************************************/
#define PORTA_BASE_ADDRESS  0X40010800
#define PORTB_BASE_ADDRESS  0X40010C00
#define PORTC_BASE_ADDRESS  0X40011000
#define PORTD_BASE_ADDRESS  0X40011400
#define PORTE_BASE_ADDRESS  0X40011800
#define PORTF_BASE_ADDRESS  0X40011C00
#define PORTG_BASE_ADDRESS  0X40012000

/*************************************
 ***EACH_PORT_HAS_ITS_OWN_REGISTERS***
 *************************************/
#define PORT_A  ((Port_t*)(PORTA_BASE_ADDRESS))
#define PORT_B  ((Port_t*)(PORTB_BASE_ADDRESS))
#define PORT_C  ((Port_t*)(PORTC_BASE_ADDRESS))
#define PORT_D  ((Port_t*)(PORTD_BASE_ADDRESS))
#define PORT_E  ((Port_t*)(PORTE_BASE_ADDRESS))
#define PORT_F  ((Port_t*)(PORTF_BASE_ADDRESS))
#define PORT_G  ((Port_t*)(PORTG_BASE_ADDRESS))


/*************************************
 *************************************
 ***Port_t struct of all registers:***
 * CR  -> configuration register     *
 * IDR -> input data register        *
 * ODR -> output data register       *
 * BSRR-> bit set/reset register     *
 * BRR -> bit reset register         *
 * LCKR-> configuration lock register*
 *************************************
 *************************************/
typedef struct
{
	uint_64t CR ;
	uint_32t IDR ;
	uint_32t ODR ;
	uint_32t BSRR;
	uint_32t BRR ;
	uint_32t LCKR;

}Port_t;


/*****************************************************
 *****************************************************
 *GPIO_t struct of pin/s config:                     *
 *                                                   *
 * Pin  -> configuration register                    *
 *         Can Configure from Pin0 to Pin15 at a time*
 *                                                   *
 * Mode ->  MODE_PINx_OP_PP		                     *
 *          MODE_PINx_OP_OD		                     *
 *          MODE_PINx_AF_PP		                     *
 *          MODE_PINx_AF_OD		                     *
 *          MODE_PINx_IP_ANALOG	                     *
 *          MODE_PINx_IP_FLOATING                    *
 *        	MODE_PINx_IP_PDR		                 *
 *          MODE_PINx_IP_PUR		                 *
 *                                                   *
 * Speed->  SPEED_PINx_10MHZ                         *
 *          SPEED_PINx_2MHZ                          *
 *          SPEED_PINx_50MHZ                         *
 *          SPEED_PINx_INPUT                         *
 *                                                   *
 * Port ->  PORT_A                                   *
 *          PORT_B                                   *
 *          PORT_C                                   *
 *          PORT_D                                   *
 *          PORT_E                                   *
 *          PORT_F                                   *
 *          PORT_G                                   *
 *****************************************************
 *****************************************************/
typedef struct 
{
	uint_16t Pin ;
	uint_64t Mode ;
	uint_64t Speed;
	Port_t* Port;

}GPIO_t ;


/*************************************
 **********STATUS_OF_EACH_PIN:********
 *         -> SET                    *
 *         -> CLEAR                  *
 *************************************/
#define SET    1
#define CLEAR  0





/*************************************************************************
 * Function name: DGPIO_Config                                           *
 * parameters:  Input:                                                   *
 *                 Pins                                                  *
 *                     type: GPIO_t(Pointer to struct)                   *
 *                      Description:struct configure parameters of pins  *
 *                                                                       *
 *              Output: NA                                               *
 *              In/out: NA                                               *
 * return: OK, NOT_OK                                                    *
 * Description: a function Configure GPIO pins                           *
 *************************************************************************/
uint_8t DGPIO_Config(GPIO_t * Pins ) ;


/*************************************************************************
 * Function name: DGPIO_Write                                            *
 * parameters:  Input:                                                   *
 *                 Port                                                  *
 *                     type: Port_t(Pointer to struct)                   *
 *                      Description:struct has registers of each Port    *
 *                                  PORT_x(PORT_A ... PORT_G)            *
 *                                                                       *
 *                 Pins                                                  *
 *                     type: uint_16t                                    *
 *                      Description:variable that can configure Pins from*
 *                                  Pin0 to Pin15                        *
 *                                                                       *
 *			       State                                                 *
 *                     type: uint_8t                                     *
 *                      Description:variable that write the State of     *
 *                                 Pins (SET , CLEAR)                    *
 * 																	     *
 *              Output:	NA								                 *
 *              In/out: NA                                               *
 * return: OK, NOT_OK                                                    *
 * Description: a function write GPIO pins state( SET OR CLEAR )         *
 *************************************************************************/
uint_8t DGPIO_Write(Port_t *Port, uint_16t Pins , uint_8t State) ;


/*************************************************************************
 * Function name: DGPIO_ReadPort                                         *
 * parameters:  Input:                                                   *
 *                 Port                                                  *
 *                     type: Port_t(Pointer to struct)                   *
 *                      Description:struct has registers of each Port    *
 *                                  PORT_x(PORT_A ... PORT_G)            *
 *                                                                       *
 *              Output: NA                                               *
 *              In/out:                                                  *
 *                 Value                                                 *
 *                     type: uint_16t(Pointer to uint_16t) (out)         * 
 *                      Description:variable as a container to have the  *
 *					                states of Pins of that Port          *
 *                                                                       *
 * return: OK, NOT_OK                                                    *
 * Description: a function read state of a GPIO pins of specific port    *
 *************************************************************************/
uint_8t DGPIO_ReadPort(Port_t *Port,uint_16t * Value) ;


/*************************************************************************
 * Function name: DGPIO_ReadPin                                          *
 * parameters:  Input:                                                   *
 *                 Port                                                  *
 *                     type: Port_t(Pointer to struct)                   *
 *                      Description:struct has registers of each Port    *
 *                                  PORT_x(PORT_A ... PORT_G)            *
 *                                                                       *
 *                 Pin                                                   *
 *                     type: uint_16t                                    *
 *                      Description:Variable that have a pin number      *
 *                                  PIN-x(PIN_0 ... PIN_15)              *
 *                                                                       *
 *              Output: NA                                               *
 *              In/out:                                                  *
 *                 Value                                                 *
 *                     type: uint_8t(Pointer to uint_8t) (out)           * 
 *                      Description:variable as a container to have the  *
 *					                state of Pin of that Port            *
 *                                                                       *
 * return: OK, NOT_OK                                                    *
 * Description: a function read state of a GPIO pin                      *
 *************************************************************************/
uint_8t DGPIO_ReadPin(Port_t *Port,uint_16t Pin,uint_8t * Value) ;

#endif
