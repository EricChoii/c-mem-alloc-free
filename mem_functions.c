#include "mem.h"
extern BLOCK_HEADER* first_header;

// return a pointer to the payload
// if a large enough free block isn't available, return NULL
void* Mem_Alloc(int size){
    // find a free block that's big enough

    // return NULL if we didn't find a block

    // allocate the block

    // split if necessary (if padding size is greater than or equal to 16 split the block)

    return NULL
}


// return 0 on success
// return -1 if the input ptr was invalid
int Mem_Free(void *ptr){
    // traverse the list and check all pointers to find the correct block 
    // if you reach the end of the list without finding it return -1
    
    // free the block 

    // coalesce adjacent free blocks

    return -1;
}

