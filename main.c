
#include "stack.h"

int main()
{
    Stack sta = new_stack();

 

  print_stack(sta);

    printf("--------------------\n");

        sta = push_stack(sta, 14);
        sta = push_stack(sta, 47);
        sta = push_stack(sta, 23);
        sta = push_stack(sta, 31);
        sta = push_stack(sta, 66);
		sta = swap_bottom(sta, 88);

 
    print_stack(sta);

printf("--------------------\n");

  // sta = pop_stack(sta);    
   

 //  print_stack(sta);

 sta = clear_stack(sta);
    return(0);
}