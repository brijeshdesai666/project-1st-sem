// Electricity Bil Calculator using c

#include <stdio.h>
#include<conio.h>

// Make a function for print Electricity bill
void printBill(float total_used, int fix_Charge)
{
  float totalAmountToPay = total_used + fix_Charge;

  printf("Your Total amount to pay is ---->  %.2f   with applied fix charge %d\n", totalAmountToPay, fix_Charge);
}

int main()
{
  int unit;
  char choice;
  float total_used, fix_Chrage;

repeat:
  printf("*****Enter to choice*****\n");
  printf("Press V for village area\n");
  printf("Press C for city area\n");
  printf("Press I for industrial area\n");
  printf("Press A for agriculture area\n");
  choice = getche();


  if (choice != 'V' && choice != 'v' && choice != 'c' && choice != 'C' && choice != 'i' && choice != 'I' && choice != 'a' && choice != 'A')
  {
    printf("\n\n******Enter valid input******\n\n\n");
    goto repeat;
  }

  printf("\nEnter Unit\n");
  scanf("%d", &unit);
  

// For village area
  if (choice == 'V' || choice == 'v')
  {
    

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


  else if (choice == 'c' || choice == 'C')
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


  // For industrial area


  else if (choice == 'i' || choice == 'I')
  {
 

    if (unit <= 150) // Count amount for frist 150 unit
    {
      total_used = unit * 9;
      fix_Chrage = 300;   // That is fix charge for using conection of power
    }
    else if (unit <= 350)   // Count amount for 350 - 150 unit
    {
      total_used = 1350 + (unit - 150) * 10.5;
      fix_Chrage = 500;
    }
    else if (unit <= 500)   // Count amount for 500 - 350 - 150 unit
    {
      total_used = 3450 + (unit - 350) * 11.8;
      fix_Chrage = 740;
    }
    else  // Incase unit is greatter that 500 unit than
    {
      total_used = 5385 + (unit - 500) * 12.9;
      fix_Chrage = 800;
    }

    printBill(total_used, fix_Chrage);  // Function call for print Total_bill_amount

  }


// for agriculture area

  else if (choice == 'A' || choice == 'a')
  {

    total_used = unit * 0.60;   // count amount for unit
    fix_Chrage = 250;           // fix charge for usnig power connection

    printBill(total_used, fix_Chrage); // Function call for print Total_bill_amount
  }

  return 0;
}