#ifndef DPRINTF_H_INCLUDED
#define DPRINTF_H_INCLUDED
#ifdef NDEBUG
#define DPRINTF(x...) printf(x)
#else
#define DPRINTF(x...) 
	
#endif

#endif // DPRINTF_H_INCLUDED
