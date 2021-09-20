#include <string.h>
#include <stdio.h>

int foo(void) {
  char bar[128];
  char *baz = &bar[0];
  baz[127] = 0;
  return strlen(baz);
}


int main(int argc, char *argv[]){

char blah[] = "fizzbuzz";
printf("%s\n", blah+4);

	return 0;
}
