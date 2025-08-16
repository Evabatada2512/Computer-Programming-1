#include<stdio.h>
int main()
{
float net_salary,gross_salary,allowance,deduction;
printf("Enter the gross salary:");
scanf("%f",&gross_salary);
allowance=0.1*gross_salary;
deduction=0.03*gross_salary;
net_salary= gross_salary+allowance-deduction;
printf("\nGross_salary =%.2f",gross_salary);
printf("\nAllowance = %.2f",allowance);
printf("\nDeduction = %.2f",deduction);
printf("\nThe net salary = %.2f",net_salary);
return 0;
}
