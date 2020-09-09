#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    //declare variables
    float dollars;
    int cents, a = 25, b = 10, c = 5, d = 1; 
    
    //Ask for input
    do
    {
        dollars = get_float("Change owed in dollars: ");
    }
    while (dollars < 0);
    
    //Convert dollars into cents
    cents = round(dollars * 100);
    
    //printf("%d\n", cents);
    
    //Quotient for 25
    int quo25 = cents / a;
    
    //Remainder for 25
    int rem25 = cents % a;
        
    //Quotient for 10
    int quo10 = rem25 / b;
        
    //Remainder for 10
    int rem10 = rem25 % b;
        
    // Quotient for 5
    int quo5 = rem10 / c;
        
    // Remainder for 5
    int rem5 = rem10 % c;
        
    // Quotient for 1
    int quo1 = rem5 / d;
        
    // Remainder for 1
    int rem1 = rem5 % d;
        
    //Print quotinet and remainder
        
    // printf ("%d\n",quo25);
    // printf ("%d\n",rem25);
        
    // printf ("%d\n",quo10);
    // printf ("%d\n",rem10);
        
    // printf ("%d\n",quo5);
    // printf ("%d\n",rem5);
        
    // printf ("%d\n",quo1);
    // printf ("%d\n",rem1);
        
    //sum of quotients
        
    int sum = quo25 + quo10 + quo5 + quo1;
        
    printf("%d\n", sum);
}
