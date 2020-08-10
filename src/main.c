#include <stdio.h>

int main(void) {
  int value = 0;

  printf("What is the answer to the Universe and everything?\n");

  // Get a value from the command line/stdin
  fscanf(stdin, "%i", &value);

  if (value == 42) {
    printf("Correct!\n");
  } else {
    printf("What a shame, you're wrong.\n");
  }

  return 0;
}
