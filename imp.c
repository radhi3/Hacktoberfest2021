#include <time.h>
#include<math.h>
#include<stdio.h>

//LOGIN PART
struct authentic
{
    char username[50];
    char password[50];
} users[20];n(users[i].password); j++)
    {
        if (isdigit(users[i].password[j]))
        {
            counter = 1;
        }
    }
    if (counter 
    }
    printf("Succesfully Registered!\n");
    i++;
}
//function to login
void login()
{
    char temp[50], temp1[50];
    int us = 0;
    printf("En"== 0)
    {
        printf("Pasword too Weak, Enter strong password\n");
        goto label;
            us = 1;
            printf("Enter password:\n");
            // scanf(
    }
    if(us != 1)
    {
        login();
    }
}
void authenticate()
{
    int temp;
    int i = 1;
    while (i)
    {
        printf("Enter 1 to Signup\nEnter 2 for login\n");
        scanf("%d", &temp);
        switch (temp)
        {
        case 1:
            signup();
            break;
        case 2:
      scanf("%s", &temp1);
            if (strcmp(temp1, users[i].password) == 0)
            {
               
            }
            else
            {
                printf("Wrong password!\n");
                login();
            }
        }
    scanf("%s", &users[i].username);
    printf("Enter a strong password\n");
label:
//structure to enter food item details
struct item
{
    int avail;
    int price;
} item[10];t %d \t\t %d\n", item[6].avail, item[6].price);
    printf("Sa
    item[1].price = 30;
    item[2].price = 40;
    item[3].price = 25;
    item[4].price = 18;
    item[5].priceitem[5].avail, item[5].price);
    printf("Veg Puff \
  lad    \t %d \t\t %d\n", item[7].avail, item[7].price);
    printf("Bonda    \t %d \t\t %d\n", item[8].avail, item[8].price);
    printf("Vada     \t %d \t\t %d\n", item[9].avail, item[9].price);
}
//structer to e
//function to display menu
void display_menu()
{
    item[0].price = 20;
    item[8].price = 19;
    item[9].price = 35;
    int i = 0, temp1, temp2, bill = 0, order_next = 1, next_cust = 1;
    while = 20;
    item[6].price = 10;
    item[7].price = 8;
    item[8].price = 19;
    item[9].price = 35;
    printf("Snack:\n Item name: \t Available \t Price\n");
    printf("Samosa   \t %d \t\t %d\n", item[0].avail, item[0].price);
    printf("Cutlet   \t %d \t\t %d\n", item[1].avail, item[1].price);
    printf("Sandwich \t %d \t\t %d\n", item[2].avail, item[2].price);
    printf("Vada Pav \t %d \t\t %d\n", item[3].avail, item[3].price);
    printf("Bhelpuri \t %d \t\t %d\n", item[4].avail, item[4].price);
    printf("Dhokla   \t %d \t\t %d\n", 
            printf("Ward number\n");
            scanf("%d", &u[i].ward_num);
        }
        //asking coustmer for next order
        while (order_next)
        {
            printf("To order do the following steps\n Press 0 for Samosa\n");
            printf("Press 1 for Cutlet\n");
            printf("Press 2 for Sandwich\n");
            scanf("%d", &temp1);
                printf("Update Current Available Items\n");
    scanf("%d", &item[i].avail);
}
//fumction to give bill
void billing()
{
    item[0].price = 20;
    item[1].price = 30;
            printf("Enter quantity\n");
            scanf("%d", &temp2);
            //to check availaly sorry!\n");
            }

            printf("Order one more item? Enter any non-zero value \n");
            scanf("%d", &order_next);
        }
        if (u[i].ward_num != NULL)
        {
            printf("~~~~~~~~~~~~~~~~bility of the stock");
            if (item[temp1].avail >= temp2)
            {
                item[temp1].avail = item[temp1].avail - temp2;
                bill = bill + (item[temp1].price) * temp2;
            }
            else
            {
                printf("OUT OF STOCK, We are real
      al bill is Rs %d", bill);
        }  
        printf("Customer on line? Press 1 else 0");
        scanf("%d", &next_cust);
        i++;
    }
    temp1 = 0, temp2 = 0;
    bill = 0;
