#ifndef DPRINTF_H_INCLUDED
#define DPRINTF_H_INCLUDED
#define NDEBUG
#ifndef NDEBUG
#include <stdio.h>
#define DPRINTF(x...) printf(x)
#endif

#endif // DPRINTF_H_INCLUDED
