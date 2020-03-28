/*********************************************************************/
/*********    Name : Mahmoud Abu Ghazalah        *********************/		
/*********    Date : 25/3/2020                   *********************/
/*********    Version : 1.0                      *********************/
/*********    Description :  Error feed back     *********************/
/*********************************************************************/

/*********** guard to prevent file repetition  ***********************/

#ifndef  ERROR_STATE_h
#define  ERROR_STATE_h

typedef enum Error
{
	ES_OK,
	ES_NOK,
	ES_OUT_OF_RANGE,
	ES_OUT_OF_RANGEE,
	ES_NULL_POINTER
	
}ERRORSTATE;

#endif