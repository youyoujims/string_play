#ifndef STRINGS_STUFF
#define STRING_STUFF
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
char* sub_string(const char* str1, int start, int final);
int ends_with(const char* str1, const char* str2);
int starts_with(const char* str1, const char* str2); 

#endif
