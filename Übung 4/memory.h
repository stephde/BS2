#ifndef _MEMORY_H
#define _MEMORY_H
#include <stdio.h>
#include <errno.h>

void *bs_malloc(size_t size);
void bs_free(void *ptr);


#endif 