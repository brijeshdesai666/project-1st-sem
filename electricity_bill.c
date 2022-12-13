/*
  village area = per unit 6.5  unit > 24 7.8
  city area = per unit
  industril area = per unit 8 to 10
  agriculture line =  per unit 0.60 same for all  unit
*/
#include <stdio.h>
void printBill(float total_used, int fix_Charge)
{
  float totalAmountToPay = total_used + fix_Charge;

  printf("Your Total amount to pay is ---->  %.2f   with applied fix charge %d\n", totalAmountToPay, fix_Charge);
}
int main()
{
  int unit;
  char choice[20];
repeat:
  printf("*****Enter to choice*****\n");
  printf("Press V for village area\n");
  printf("Press C for city area\n");
  printf("Press I for industril area\n");
  printf("Press A for agriculture area\n");
  scanf("%s", &choice);
  int n = sizeof(choice)/sizeof(choice[0]); 
  printf("%d\n",choice[1]);

  if (choice[0] != 'V' && choice[0] != 'v' && choice[0] != 'c' && choice[0] != 'C' && choice[0] != 'i' && choice[0] != 'I' && choice[0] != 'a' && choice[0] != 'A')
  {
    printf("\n\n******Enter valid input******\n\n\n");
    goto repeat;
  }

  printf("Enter Unit\n");
  scanf("%d", &unit);
  float total_used, fix_Chrage;

  if (choice[0] == 'V' || choice[0] == 'v')
  {
    // printf("village area\n");

    if (unit <= 24) // Count for frist 24 unit
    {
      total_used = unit * 6.5;
      fix_Chrage = 100; // That is fix charge for using conection of power
    }
    else if (unit <= 90) // Count for 90 - 24 unit
    {
      total_used = 156 + (unit - 24) * 7;
      fix_Chrage = 120;
    }
    else if (unit <= 200) // Count for 200 - 90 - 24 unit
    {
      total_used = 618 + (unit - 90) * 7.4;
      fix_Chrage = 125;
    }
    else // Incase unit is greatter that 200 unit than
    {
      total_used = 1254.4 + (unit - 200) * 8;
      fix_Chrage = 150;
    }

    printBill(total_used, fix_Chrage); // Function call for print Total_bill_amount
  }

  // For city area

  else if (choice[0] == 'c' || choice[0] == 'C')
  {
    printf("city area\n");
    if (unit <= 24) // Count for frist 24 unit
    {
      total_used = unit * 7;
      fix_Chrage = 130; // That is fix charge for using conection of power
    }
    else if (unit <= 90) // Count for 90 - 24 unit
    {
      total_used = 156 + (unit - 24) * 7.5;
      fix_Chrage = 170;
    }
    else if (unit <= 200) // Count for 200 - 90 - 24 unit
    {
      total_used = 618 + (unit - 90) * 7.8;
      fix_Chrage = 210;
    }
    else // Incase unit is greatter that 200 unit than
    {
      total_used = 1254.4 + (unit - 200) * 8.5;
      fix_Chrage = 250;
    }

    printBill(total_used, fix_Chrage); // Function call for print Total_bill_amount
  }


  // For industril area


  else if (choice[0] == 'i' || choice[0] == 'I')
  {
    // printf("industril area\n");

    if (unit <= 150) // Count for frist 150 unit
    {
      total_used = unit * 9;
      fix_Chrage = 300; // That is fix charge for using conection of power
    }
    else if (unit <= 350) // Count for 350 - 150 unit
    {
      total_used = 1350 + (unit - 150) * 10.5;
      fix_Chrage = 500;
    }
    else if (unit <= 500) // Count for 500 - 350 - 150 unit
    {
      total_used = 3450 + (unit - 350) * 11.8;
      fix_Chrage = 740;
    }
    else // Incase unit is greatter that 500 unit than
    {
      total_used = 5385 + (unit - 500) * 12.9;
      fix_Chrage = 800;
    }

    printBill(total_used, fix_Chrage); // Function call for print Total_bill_amount

  }

  else if (choice[0] == 'A' || choice[0] == 'a')
  {
    // printf("agriculture area\n");

    total_used = unit * 0.60;
    fix_Chrage = 250;

    printBill(total_used, fix_Chrage); // Function call for print Total_bill_amount
  }

  return 0;
}