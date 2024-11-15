#include "string_play.h"
int main(void){
	char* a = (ends_with("bruh.png", ".png") == 1) ? "true" : "false";
	char* b = (starts_with("bruh.png", "bruh") == 1) ? "true" : "false";
	printf("%s %s\n", a, b);

	return 0;
}
