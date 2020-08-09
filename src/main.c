#include <stdio.h>

int main() {
  int value = 0;
  printf("What is the answer to the Universe and everything?\n");
  fscanf(stdin, "%i", &value);

  if (value == 42) {
    printf("Correct!\n");
  } else {
    printf("What a shame, you're wrong.\n");
  }

  return 0;
}
