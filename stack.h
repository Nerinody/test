#ifndef __STACK__H__
#define __STACK__H__
# include <stdio.h>
# include <stdlib.h>
    /* Type bolleen */

    typedef enum
    {
        false,
        true
    }Bool;

    /* Definition d' une pile*/

    typedef struct StackElement
    {
        int value;
        struct StackElement *next;
    }StackElement, *Stack;

    /* Prototypes des fonctions */

    Stack new_stack(void);
    Bool is_empty_stack(Stack st);
    Stack push_stack(Stack st, int x);
    Stack clear_stack(Stack st);
    void print_stack(Stack st);
    Stack pop_stack(Stack st);

#endif
