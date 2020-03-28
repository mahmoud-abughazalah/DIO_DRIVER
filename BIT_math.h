/*********************************************************************************/
/*********    Name        : Mahmoud Abu Ghazalah             *********************/		
/*********    Date        : 25/3/2020                        *********************/
/*********    Version     : 1.0                              *********************/
/*********    Description : Bit math operation set , clear , *********************/
/************************** toggle , get , assign            *********************/
/*********************************************************************************/

/*********** guard to prevent file repetition  ***********************************/

#ifndef  BIT_MATH_h
#define  BIT_MATH_h


#define set_bit(var,bitno)               var|=(1<<bitno)
#define clr_bit(var,bitno)               var&=~(1<<bitno)
#define toggle_bit(var,bitno)            var^=(1<<bitno)
#define get_bit(var,bitno)               ((var>>bitno)&1)
#define assign_bit(var,bitno,val)        ((var&(~(1<<bitno)))|(val<<bitno))

#endif         /*   end of file BIT_math_h   */


