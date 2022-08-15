#include <stdio.h>
#include <math.h>

#define SALES_TAX_RATE 0.09
#define LODGING_TAX 15.99

int main(){

    /* 
     * Calculate the final price for a hotel room with taxes and fees. 
     */

    float basecost = 149.00; 

    float total = basecost + (basecost * 0.09) + 15.99;

    /* The format string '%.2f' prints a number with 2 digits after the decimal */
    printf("Total Hotel Cost = $%.2f\n", total);

    /* 
     * The code above works, but it uses a bad style. Software
     * designers  prefer not to have magical numbers appear in the code. 
     * In the case above, 0.09 and 15.99 are what we call magic numbers. It's a 
     * important number that appears out of nowhere in the code, and we don't have
     * an explaination of why it's used. By defining and using a constant instead, 
     * we can make the code easier to read for others and oursleves when we go back to it
     * years later. 
     * 
     * Look how using constants can clarify the code. 
     */

    total = basecost + (basecost * SALES_TAX_RATE) + LODGING_TAX;
    printf("Total Hotel Cost = $%.2f\n", total);

    return 0;
}