/*******************************************
********************************************
*       Coding Practice 1                  *
*   1. Print address of local variable     *    
*   2. Print address of global variable    *
*   3. Static variable memory demo         *
*   4. Stack growth observation            *
********************************************
*******************************************/

#include <stdio.h>

//Function decliration
int* fun(int val);

//Initilized the global variable. 
int G_var=10;

int main()
{
	
//Initilized the local variable. 
int L_var=15;
int AL_var;

//Print the address of loacal and global variable.
printf("Address of global variable is %pi\n",&G_var);
printf("Address of local variable is %p\n",&L_var);

//Check Stack growth observation
printf("Address of local variable is %p\n",&AL_var);
//Static memory variable demo
//Function call
int*p;
p=fun(L_var);
printf("Static Variable memory demo %d",*p);
}


//Function defination

int* fun(int num)
{
static int St_var=10;
St_var*=10;
return &St_var;
}
