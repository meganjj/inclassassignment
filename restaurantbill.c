/* create an array with the food item costs and a random number generator from 1-4 to choose one food
   take in 2 arguments from the command line for tax and tip
   calculate the tax and tip with the cost of the food and add them all together
   display subtotal, tax, tip, and final total */

   #include <stdio.h>
   #include <stdlib.h>
   #include <time.h>

   int main( int argc, char *argv[] ) {
    
    time_t t;
    srand((unsigned) time(&t));
    int item = rand() % 4;
    double salad = 9.95;
    double soup = 4.55;
    double sandwich = 13.25;
    double pizza = 22.35;
    double itemList[4] = {salad, soup, sandwich, pizza};
    int tax, tip;

    double foodPrice = itemList[item];
    
     if ( argc == 3 ) {
       sscanf(argv[1], "%d", &tax);
       sscanf(argv[2], "%d", &tip);
       double totalTax = (tax*.01) * foodPrice;
       double totalTip = (tip*.01) * foodPrice;
       double total = foodPrice + totalTax + totalTip;
       //display info
       printf("Cost of food is: %.2f\n", foodPrice);
       printf("Tax amount is: $%.2f\n", totalTax);
       printf("Tip amount is: $%.2f\n", totalTip);
       printf("Total cost is: $%.2f\n", total);
    }
      else {
        printf("Please enter tax and tip amounts.\n");
    }
    return 0;
}