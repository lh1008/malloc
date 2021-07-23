#ifndef MALLOC_H
#define MALLOC_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#define M_CHUNK getpagesize()

#define HEADER_S sizeof(size_t)

void *naive_malloc(size_t size);
void *_malloc(size_t size);

#endif /* MALLOC_H */
