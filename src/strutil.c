#include "strutil.h"

const char *strnchr(const char *str, size_t len, char character) {
    const char *end = str + len;
    do {
        if(*str == character) {
            return str;
        }
    } while (++str <= end);
    return NULL;
}