/**
 * Assignment-3
 * CSE30 Username: cs30fa21 (fill out your username)
 * Class: UCSD CSE30-FA21
 */

#include "calc.h"
#include <math.h>

//  
// !!!!!!!! DO NOT TOUCH ANY CODE ABOVE THIS LINE (not incl. username) !!!!!!!!
// !!!!!!!!            YOU MAY WRITE STATIC VARIABLES BELOW            !!!!!!!!
// 



/**
 * Push a new value onto the stack.
 * 
 * If the stack is full, do not push anything.
 *
 * @return 1 if push is successful, 0 otherwise
 */
int push(double d)
{
    // 
    //  ---------------------------- TODO: FILL IN ---------------------------- 
    // 
}

/**
 * Pop the current entry on the top of stack.
 *
 * Do nothing if there nothing on the stack.
 */
void pop()
{
    // 
    //  ---------------------------- TODO: FILL IN ---------------------------- 
    // 
}

/**
 * Get an entry from the stack.
 *
 * If passed a postive number, return the oldest stack entry.
 * Else, return the next oldest stack entry (with respect to a prior call).
 * 
 * Passing in a positive number should reset the sequence back to the oldest 
 * stack entry.
 */
double get_entry(int flag)
{
    // 
    //  ---------------------------- TODO: FILL IN ----------------------------
    // 
}

/**
 * Returns the number of elements in the stack.
 * 
 * @return number of elements in the stack
 */
//  
//  ------------------------- TODO: WRITE get_size()  -------------------------
// 

/**
 * Return the element on the top of the stack (the youngest entry).
 * 
 * If the stack is empty, return 0.0.
 * 
 * @return the element on the top of the stack
 */
// 
//  -------------------------- TODO: WRITE get_tos() --------------------------
// 

/**
 * Do an operation on the top two stack elements.
 *
 * Operation may be one of following: ADD, SUBTRACT, MULTIPLY, DIVIDE, SQRT.
 */
// 
//  -------------------------- TODO: WRITE do_oper() -------------------------- 
//

/**
 * Swap the top two stack entries.
 *
 * If the stack has fewer than 2 entries, do nothing.
 */
// 
//  ------------------------ TODO: WRITE swap_entry() ------------------------
//

/**
 * Makes oldest stack entry becomes the youngest,
 * youngest becomes the second youngest, 
 * second oldest becomes the oldest, etc.
 */
// 
//  ----------------------- TODO: WRITE rotate_stack() -----------------------
//
