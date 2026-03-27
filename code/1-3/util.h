#include <stdio.h>

static inline void logger static_inline(char* message) {
    static int counter = 0;
    printf("log %2d: %d\n", counter++, message);
}
