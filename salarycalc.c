#include<stdio.h>
int main()
{
    int Basic,GrossRem,WorkInBonus,MonthlyBonus,sales,Years,AddAllow;
    char workIn;

                    printf ("Enter basic salary : ");
                    scanf ("%d",&Basic);
                    printf ("Enter years of service : ");
                    scanf ("%d",&Years);
                    printf ("Enter monthly sales : ");
                    scanf ("%d",&sales);
                    printf ("Enter 'L' if work in Lima, or N if not : ");
                    scanf ("%s",&workIn);

                    printf ("\n\n");

                     //the monthly bonus is calculated according to the sales amount
                    if (sales<1000)
                        MonthlyBonus=(sales*10)/100;
                    else if (sales<2000)
                        MonthlyBonus=(sales*15)/100;
                    else if(sales>=2000)
                        MonthlyBonus=(sales*20)/100;
                    else
                        MonthlyBonus=0;

                    //an additional allowance is provided if work years are over 4

                    if (Years>4){​​​​
                        AddAllow=(Basic*10)/100;
                    }​​​​else{​​​​
                        AddAllow=0;}​​​​
                        
                     if (workIn=='L')

                     WorkInBonus=500;

                     else

                     WorkInBonus=0;


//Gross remuneration is the addition of bonuses and basic salary together

 printf ("Additional Allowance : %d \n",AddAllow);

 printf ("Monthly sales bonus : %d \n",MonthlyBonus);

 printf ("Work in Lima bonus : %d \n",WorkInBonus);

 GrossRem = AddAllow+WorkInBonus+MonthlyBonus+Basic;

 printf ("Gross remuneration : %d \n",GrossRem);


    return 0;
}
