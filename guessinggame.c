/* Create a print statement that shows menu and use rand to choose a number between 1-10
   take input from user and use if statements? for their inputs (1,2,or 3)
   if 1 --> take input from user and create if statements for greater less and equal to the random number
   but if q go back to menu..
   if 2 --> take input from user to choose a max and check whether input is in bounds
   if 3 --> print statement saying thank you and return? to end */

   #include <stdio.h>
   #include <stdlib.h>
   #include <time.h>
   #include <limits.h>

   int main( ) {
      time_t t;
      srand((unsigned) time(&t));
      int max = 10;
      int randomNumber = (rand() % max) + 1;
      int guess, choice, newMax;

      printf("Press 1 to play a game.\n");
      printf("Press 2 to change the max number\n");
      printf("Press 3 to end the game.\n");
    
      scanf("%d", &choice);
        if (choice == 1){
          printf("Enter your guess: ");
          scanf("%d", &guess);
         
          if (guess > randomNumber) {
            printf("Your guess is too high!\n");
            scanf("%d", &guess);
           }
          else if (guess < randomNumber) {
            printf("Your guess is too low!\n");
            scanf("%d", &guess);
           }
          else {
            printf("You won!");
           } 
         }
  
        else if (choice == 2) {
         int newMax;
         printf("Enter your desired max: ");
         scanf("%d", &newMax);
         if (newMax < 1 || newMax > INT_MAX) {
           printf("Please enter a valid number.\n");
           scanf("%d", &newMax);
          }
         else {
           max = newMax;
          }
        }
        else if (choice == 3) {
         printf("Thank you for playing!");
         return 0;
    }
} 