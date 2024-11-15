#include "string_play.h"

char* sub_string(const char* str1, int start, int final){
	size_t len = strlen(str1);
	char* str = calloc(1, sizeof(char));
	for(int i = start; i < final; i++){
		len++;
		str = realloc(str, (len)*sizeof(char));
		strcat(str,(char[]){str1[i], 0});
	}

	return str;
}

int ends_with(const char* str1, const char* str2) {
	size_t len = strlen(str1); 
	size_t fix = strlen(str2);
	char* sub = sub_string(str1, len-fix, len);
	return (strcmp(sub, str2) == 0);
}

int starts_with(const char* str1, const char* str2) {
	size_t fix = strlen(str2);
	char* sub = sub_string(str1, 0, fix);

	return (strcmp(sub, str2) == 0);
}

