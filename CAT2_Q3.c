//CAT2_Q3.C
#include <stdio.h>
#include <math.h>
 int main (){
   float hours_worked, hourly_wages;
   float overtime_hours, overtime_pay, regular_pay;
   float tax_base, tax_amount, tax_remainder;
   float total_tax, gross_pay, net_pay;
   
   printf("Enter Hours worked in a week: ");
   scanf("%f",&hours_worked);
   printf("Enter Hourly wage: ");
   scanf("%f",&hourly_wages);
   
   //Calculate  overtime 
   if(hours_worked > 40){
    overtime_hours = hours_worked - 40;
   } else {
     overtime_hours = 0;
   }
   overtime_pay = overtime_hours * (hourly_wages * 1.5);
   regular_pay = (hours_worked - overtime_hours) * hourly_wages;
   
   //Calculate taxes
   if(regular_pay < 600){
     tax_base = regular_pay;
   }else {
     tax_base = 600;
   }   
   tax_amount = tax_base * 0.15;
   tax_remainder = (regular_pay - tax_base) * 0.20;
   total_tax = tax_amount + tax_remainder;
   gross_pay = regular_pay + overtime_pay;
   net_pay = gross_pay - total_tax;
   
   printf("Gross Pay: $%.2f\n",gross_pay);
   printf("Taxes: $%.2f\n",total_tax);
   printf("Net Pay: $%.2f\n",net_pay);
 return 0;
 }