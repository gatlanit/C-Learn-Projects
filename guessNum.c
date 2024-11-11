#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// TODO:
// [] Add delete functionality

int main() {
  // Randomize Seed
  srand(time(0));

  int MIN = 1;
  int MAX = 100;

  int randNum = (rand() % MAX) + MIN;
  int guessNum;
  int guesses = 0;

  printf("Guess a number between 1-100! (everytime you get it wrong, a random "
         "file gets deleted :3)\n");

  do {
    printf("Enter a guess: "); // Input
    scanf("%d", &guessNum);

    if (guessNum > randNum) { // Hints
      printf("Guess is too high\n\n");
      guesses++;
    } else if (guessNum < randNum) {
      printf("Guess is too low\n\n");
      guesses++;
    } else {
      printf("That's correct!\n\n");
    }

  } while (guessNum != randNum);

  printf("Congratuations you win!\n");
  printf("The answer was %d\n", randNum);
  printf("Numbner of files deleted: %d\n", guesses);

  return 0;
}
