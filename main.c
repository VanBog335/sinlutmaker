#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "incs/stdtypes.h"

#define POINTS 4
#define TYPEINT 16
#define HEXOUT 0

#if TYPEINT==8
#define AMPLITUDE (0xff + 0.0)
#elif TYPEINT==16
#define AMPLITUDE (0xffff + 0.0)
#elif TYPEINT==32
#define AMPLITUDE (0xffffffff + 0.0)
#endif

i32 main()
{
    printf("{\n");
    f64 idk1 = M_PI / 2 / POINTS;
    for (f64 i = 0; i <= M_PI / 2; i += idk1) {
		if (i > 0) printf(", ");
		#if !HEXOUT
        printf("%lld", (u64)(sin(i)*AMPLITUDE));
		#else
		printf("0x%x", (u64)(sin(i)*AMPLITUDE));
		#endif
    }
    printf("\n};");
}
