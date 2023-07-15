#include<stdio.h>
#include<string.h>
#include<time.h>
#include<ctype.h>
#include<windows.h>
const char* catalogue(char* ,int*);
void loan(int);
int check_aadhaar(char* );
int check_phone(char*);
void insurance(int temp);
int user_info(int temp);
int check_license(char*);
/*goto(xy) for spacing*/
void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
/*structure holds the personal info*/
typedef struct
{
    char name[25];
    char address[100];
    char phone_no[10];
    char aadhaar[12];
    char license_no[15];
    int age;
}user;


int main()
{
    int temp,age;
    char s[10];
    gotoxy(45,1);
    printf("WELCOME TO ONLINE CAR RESERVATION");gotoxy(45,2);
    printf("**********************************");gotoxy(50,5);
    printf("CAR RESERVATION SYSTEM");gotoxy(50,6);
    printf("***********************");
    printf("\n");gotoxy(48,7);
    printf("   -------------------");gotoxy(48,8);
    printf("  /  _____     _____  \\");gotoxy(48,9);
    printf(" /  |     |   |     |  \\");gotoxy(48,10);
    printf("/   |_____|   |_____|   \\");gotoxy(40,11);
    printf("   -----                          ----------");gotoxy(40,12);
    printf("   |                                        |");gotoxy(40,13);
    printf("   |                                        |");gotoxy(40,14);
    printf("   |                                        |");gotoxy(40,15);
    printf("   |       _____           _____            |");gotoxy(40,16);
    printf("   -------|     |---------|     |------------");gotoxy(40,17);
    printf("          |_____|         |_____|     ");

    catalogue(s,&temp);
    cat:
    if(strcmp(s,"yes")==0||strcmp(s,"YES")==0)
    {

        user_info(temp);

    }
    else if(strcmp(s,"no")==0||strcmp(s,"NO")==0)
    {
        system("cls");
        catalogue(s,&temp);
        goto cat;
    }
    return 0;
}

const char* catalogue(char* s,int *temp)
{
    int n,num4,num8;
    printf("\n\t\t\tTYPE OF CAR:\n\t\t\t************ \n\t\t\t @ 4 SEATER \n\t\t\t @ 8 SEATER ");
                                                            /*two types of seater is only available*/
    printf("\n\t\t\tEnter the type of car (4 or 8):");
    scanf("%d",&n);
    system("cls");
    if(n==4)
    {
        gotoxy(53,5);
        printf(" HYUNDAI ");gotoxy(53,6);
        printf("*********");gotoxy(45,7);
        printf("     _______________");gotoxy(45,8);
        printf("    /     /        /\\");gotoxy(45,9);
        printf("   /     /        /  \\");gotoxy(45,10);
        printf("  /     /--------/    \\");gotoxy(45,11);
        printf("  \\    /        /     /");gotoxy(45,12);
        printf("   \\  /        /     /");gotoxy(45,13);
        printf("    \\/________/_____/");
        printf("\n\n");
        printf("\n\t\t\tCATALOGUE: \n\t\t\t********** \n\t\t\t\t@ VENUE --> 1 \n\t\t\t\t@ VERNA --> 2 \n\t\t\t\t@ CERTA --> 3 \n\t\t\t\t@ SANTRO--> 4\n");
        printf("\n\t\t\tENTER THE MODEL OF THE CAR : ");
        scanf("%d",&num4);
        system("cls");
                                                                /*It shows the specification of 4 seater cars*/
        switch(num4)
        {
                case 1:
                {
                    *temp=0;
                    gotoxy(48,6);
                    printf("HYUNDAI VENUE S 1.2 PETROL\n");gotoxy(48,7);
                    printf("**************************\n");gotoxy(30,8);
                    printf("@ Price : 7.77 lakhs\n");gotoxy(30,9);
                    printf("@ Engine type : 1.2 l Kappa\n");gotoxy(30,10);
                    printf("@ Engine : 1197 cc\n");gotoxy(30,11);
                    printf("@ Fuel Type : Petrol\n\t\t\t      @ Fuel tank capacity : 45litres\n");gotoxy(30,13);
                    printf("@ Battery : 34AH\n");gotoxy(30,14);
                    printf("@ Power(bhp):82 bhp\n");gotoxy(30,15);
                    printf("@ Mileage : 17 kmpl\n");gotoxy(30,16);
                    printf("@ Driving Range : 788 km\n");gotoxy(30,17);
                    printf("@ Drivetrain : FWD\n");gotoxy(30,18);
                    printf("@ Transmission : Manual-5 Gears\n");gotoxy(30,19);
                    printf("@ DIMENSION \n\t\t\t\t# Length : 3665 mm\n\t\t\t\t# Width : 1770 mm\n\t\t\t\t# Height : 1605 mm\n");gotoxy(30,23);
                    printf("@ Ground clearance : 195 mm\n");gotoxy(30,24);
                    printf("@ Wheel base: 2500 mm\n");gotoxy(30,25);
                    printf("@ Airbags : 2 Airbags(Driver,Passenger)\n");gotoxy(30,26);
                    printf("@ Infotainment System : YES\n");gotoxy(30,27);
                    printf("@ Warranty : 3 years\n");gotoxy(30,28);
                    printf("@ Review : 4 Star Rating\n");
                    break;
                }
                case 2:
                {
                    *temp=1;
                    gotoxy(48,6);
                    printf("HYUNDAI VERNA S plus 1.5 CRDi\n");gotoxy(48,7);
                    printf("*****************************\n");gotoxy(30,8);
                    printf("@ Price : 10.88 lakhs\n");gotoxy(30,9);
                    printf("@ Engine type : 1.5 L U2 CRDi\n");gotoxy(30,10);
                    printf("@ Engine : 1493 cc\n");gotoxy(30,11);
                    printf("@ Fuel Type : Diesel\n\t\t\t      @ Fuel tank capacity : 45 litres\n");gotoxy(30,13);
                    printf("@ Battery : 68AH\n");gotoxy(30,14);
                    printf("@ Power(bhp):113 bhp\n");gotoxy(30,15);
                    printf("@ Mileage : 25 kmpl\n");gotoxy(30,16);
                    printf("@ Driving Range : 1125 km\n");gotoxy(30,17);
                    printf("@ Drivetrain : FWD\n");gotoxy(30,18);
                    printf("@ Transmission : Manual-6 Gears\n");gotoxy(30,19);
                    printf("@ DIMENSION \n\t\t\t\t# Length : 4440 mm\n\t\t\t\t# Width : 1749 mm\n\t\t\t\t# Height : 1475 mm\n");gotoxy(30,23);
                    printf("@ Ground clearance : 165 mm\n");gotoxy(30,24);
                    printf("@ Wheel base: 2600 mm\n");gotoxy(30,25);
                    printf("@ Airbags : 2 Airbags(Driver,Passenger)\n");gotoxy(30,26);
                    printf("@ Infotainment System : YES\n");gotoxy(30,27);
                    printf("@ Warranty : 3 years\n");gotoxy(30,28);
                    printf("@ Review : 4.5 Star Rating\n");
                    break;
                }
                case 3:
                {
                    *temp=2;
                    gotoxy(48,6);
                    printf("HYUNDAI CRETA E 1.5\n");gotoxy(48,7);
                    printf("*******************\n");gotoxy(30,8);
                    printf("@ Price : 10.16 lakhs\n");gotoxy(30,9);
                    printf("@ Engine type : 1.5 L Mpi\n");gotoxy(30,10);
                    printf("@ Engine : 1497 cc\n");gotoxy(30,11);
                    printf("@ Fuel Type : Petrol\n\t\t\t      @ Fuel tank capacity : 50 litres\n");gotoxy(30,13);
                    printf("@ Battery : 45 AH\n");gotoxy(30,14);
                    printf("@ Power(bhp):113 bhp\n");gotoxy(30,15);
                    printf("@ Mileage : 17 kmpl\n");gotoxy(30,16);
                    printf("@ Driving Range : 850 km\n");gotoxy(30,17);
                    printf("@ Drivetrain : FWD\n");gotoxy(30,18);
                    printf("@ Transmission : Manual-6 Gears\n");gotoxy(30,19);
                    printf("@ DIMENSION \n\t\t\t\t# Length : 4300 mm\n\t\t\t\t# Width : 1790 mm\n\t\t\t\t# Height : 1635 mm\n");gotoxy(30,23);
                    printf("@ Ground clearance : 190 mm\n");gotoxy(30,24);
                    printf("@ Wheel base: 2610 mm\n");gotoxy(30,25);
                    printf("@ Airbags : 2 Airbags(Driver,Passenger)\n");gotoxy(30,26);
                    printf("@ Infotainment System : YES\n");gotoxy(30,27);
                    printf("@ Warranty : 3 years\n");gotoxy(30,28);
                    printf("@ Review : 4.6 Star Rating\n");
                    break;
                }
                case 4:
                {
                    *temp=3;
                    gotoxy(48,6);
                    printf("HYUNDAI SANTRO MAGNA CNG\n");gotoxy(48,7);
                    printf("************************\n");gotoxy(30,8);
                    printf("@ Price : 6 lakhs\n");gotoxy(30,9);
                    printf("@ Engine type : 1.1 L Epsilon MPI CNG\n");gotoxy(30,10);
                    printf("@ Engine : 1086 cc\n");gotoxy(30,11);
                    printf("@ Fuel Type : CNG\n\t\t\t      @ Fuel tank capacity : 60 litres\n");gotoxy(30,13);
                    printf("@ Battery : 35 AH\n");gotoxy(30,14);
                    printf("@ Power(bhp):58 bhp\n");gotoxy(30,15);
                    printf("@ Mileage : 30 kmpl\n");gotoxy(30,16);
                    printf("@ Driving Range : 1050 km\n");gotoxy(30,17);
                    printf("@ Drivetrain : FWD\n");gotoxy(30,18);
                    printf("@ Transmission : Manual-5 Gears\n");gotoxy(30,19);
                    printf("@ DIMENSION \n\t\t\t\t# Length : 3610 mm\n\t\t\t\t# Width : 1645 mm\n\t\t\t\t# Height : 1560 mm\n");gotoxy(30,23);
                    printf("@ Ground clearance :165 mm\n");gotoxy(30,24);
                    printf("@ Wheel base: 2400 mm\n");gotoxy(30,25);
                    printf("@ Airbags : 2 Airbags(Driver,Passenger)\n");gotoxy(30,26);
                    printf("@ Infotainment System : YES\n");gotoxy(30,27);
                    printf("@ Warranty : 3 years\n");gotoxy(30,28);
                    printf("@ Review : 4.9 Star Rating\n");
                    break;
                }
                default :
                {
                    gotoxy(30,25);
                    printf("WE CURRENTLY HAVE FOUR MODELS SO WE WILL NOTIFY ON YOU SOON");
                    catalogue(s,temp);
                }
        }
        gotoxy(30,32);
        printf("DO YOU LIKE THIS MODEL ? (yes /no) ");
        scanf("%*c %[^\n]s",s);
        return s;
    }
    else if(n==8)
    {
        gotoxy(53,5);
        printf("MAHINDRA");gotoxy(53,6);
        printf("********");gotoxy(45,7);
        printf("      __________________");gotoxy(45,8);
        printf("     /        /|\\       \\");gotoxy(45,9);
        printf("    /        / | \\       \\");gotoxy(45,10);
        printf("   /        /  |  \\       |");gotoxy(45,11);
        printf("  |        /   |   \\     /");gotoxy(45,12);
        printf("   \\______/    |    \\___/");gotoxy(45,13);
        printf("\n\n\t\t\tCATALOGUE: \n\t\t\t********* \n\t\t\t@ MARAZOO    --> 1 \n\t\t\t@ SCORPIO    --> 2 \n\t\t\t@ XUV700     --> 3\n\t\t\t@ ALTURAS G4 --> 4");
        printf("\n\t\t\tEnter the model of the car:");
        scanf("%d",&num8);
        system("cls");
                                                                            /*It shows the specification of 8 seater cars*/
        switch(num8)
        {
            case 1:
            {
                *temp=4;
                gotoxy(48,6);
                printf("MAHINDRA MARAZZO M4 Plus 8 STR\n");gotoxy(48,7);
                printf("******************************\n");gotoxy(30,8);
                printf("@ Price : 13.62 lakhs\n");gotoxy(30,9);
                printf("@ Engine Type : 1.5 L Turbochanged 14\n");gotoxy(30,10);
                printf("@ Engine : 1497 cc\n");gotoxy(30,11);
                printf("@ Fuel Type : Diesel\n\t\t\t      @ Fuel tank capacity : 45 litres\n");gotoxy(30,13);
                printf("@ Battery : 35 AH\n");gotoxy(30,14);
                printf("@ Power(bhp) :121 bhp\n");gotoxy(30,15);
                printf("@ Mileage : 17.33 kmpl\n");gotoxy(30,16);
                printf("@ Driving Range : 779.85 km\n");gotoxy(30,17);
                printf("@ Drivetrain : FWD\n");gotoxy(30,18);
                printf("@ Transmission : Manual - 6 Gears\n");gotoxy(30,19);
                printf("@ DIMENSIONS");gotoxy(30,20);
                printf("  # Length : 4585 mm\n\t\t\t\t# Width : 1866 mm\n\t\t\t\t# Height : 1774 mm\n");gotoxy(30,23);
                printf("@ Ground clearance : 200 mm\n");gotoxy(30,24);
                printf("@ Wheel base : 2760 mm\n");gotoxy(30,25);
                printf("@ Airbags : 2 Airbags(Driver,Passenger)\n");gotoxy(30,26);
                printf("@ Infotainment System : YES\n");gotoxy(30,27);
                printf("@ Warranty : 3 years\n");gotoxy(30,28);
                printf("@ Review : 4.5 Star Rating\n");
                break;
            }
            case 2:
            {
                *temp=5;
                gotoxy(48,6);
                printf("tMAHINDRA SCORPIO S11\n");gotoxy(48,7);
                printf("********************\n");gotoxy(30,8);
                printf("@ Price : 17.66 lakhs\n");gotoxy(30,9);
                printf("@ Engine Type : 2.2 L mHawk\n");gotoxy(30,10);
                printf("@ Engine : 2179 cc\n");gotoxy(30,11);
                printf("@ Fuel Type : Diesel\n\t\t\t      @ Fuel tank capacity : 60 litres\n");gotoxy(30,13);
                printf("@ Battery : 65 AH\n");gotoxy(30,14);
                printf("@ Power(bhp) :137 bhp\n");gotoxy(30,15);
                printf("@ Mileage : 15 kmpl\n");gotoxy(30,16);
                printf("@ Driving range : 900 km\n");gotoxy(30,17);
                printf("@ Drivetrain : RWD\n");gotoxy(30,18);
                printf("@ Transmission : Manual - 6 Gears\n");gotoxy(30,19);
                printf("@ DIMENSIONS\n");gotoxy(30,20);
                printf("  # Length : 4456 mm\n\t\t\t\t# Width : 1820 mm\n\t\t\t\t# Height : 1995 mm\n");gotoxy(30,23);
                printf("@ Ground clearance : 209 mm\n");gotoxy(30,24);
                printf("@ Wheel base : 2680 mm\n");gotoxy(30,25);
                printf("@ Airbags : 2 Airbags(Driver,Passenger)\n");gotoxy(30,26);
                printf("@ Infotainment System : YES\n");gotoxy(30,27);
                printf("@ Warranty : 3 years\n");gotoxy(30,28);
                printf("@ Review : 4.6 Star Rating\n");
                break;
            }
            case 3:
            {
                *temp=6;
                gotoxy(48,6);
                printf("XUV700 AX 3 PETROL MT 5 STR\n");gotoxy(48,7);
                printf("***************************\n");gotoxy(30,8);
                printf("@ Price : 12.49 lakhs\n");gotoxy(30,9);
                printf("@ Engine Type :2.0 Turbo Petrol with direct injection\n");gotoxy(30,10);
                printf("@ Engine : 1997 cc\n");gotoxy(30,11);
                printf("@ Fuel Type : Petrol\n\t\t\t      @ Fuel tank capacity : 60 litres\n");gotoxy(30,13);
                printf("@ Battery : 67 AH\n");gotoxy(30,14);
                printf("@ Power(bhp) : 197 bhp\n");gotoxy(30,15);
                printf("@ Mileage : 9 kms\n");gotoxy(30,16);
                printf("@ Driving range : 950 km\n");gotoxy(30,17);
                printf("@ Drivetrain : FWD\n");gotoxy(30,18);
                printf("@ Transmission : Manual - 6 Gears\n");gotoxy(30,19);
                printf("@ DIMENSIONS\n");gotoxy(30,20);
                printf("  # Length : 4695 mm\n\t\t\t\t# Width : 1890 mm\n\t\t\t\t# Height : 1755 mm\n");gotoxy(30,23);
                printf("@ Ground clearance : 199 mm\n");gotoxy(30,24);
                printf("@ Wheel base : 2750 mm\n");gotoxy(30,25);
                printf("@ Airbags : 2 Airbags(Driver,Passenger)\n");gotoxy(30,26);
                printf("@ Infotainment System : YES\n");gotoxy(30,27);
                printf("@ Warranty : 3 years\n");gotoxy(30,28);
                printf("@ Review : 5 Star Rating\n");
                break;
            }
            case 4:
            {
                *temp=7;
                gotoxy(48,6);
                printf("ALTURAS G4 2WD AT\n");gotoxy(48,7);
                printf("*****************\n");gotoxy(30,8);
                printf("@ Price : 28.77 lakhS\n");gotoxy(30,9);
                printf("@ Engine Type : 2.2 Litre\n");gotoxy(30,10);
                printf("@ Engine : 2157 cc\n");gotoxy(30,11);
                printf("@ Fuel Type : Diesel\n\t\t\t      @ Fuel tank capacity : 70 litres\n");gotoxy(30,13);
                printf("@ Battery : 85 AH\n");gotoxy(30,14);
                printf("@ Power(bhp) : 178 bhp\n");gotoxy(30,15);
                printf("@ Mileage : 12.03 kmpl\n");gotoxy(30,16);
                printf("@ Driving range : 842 km\n");gotoxy(30,17);
                printf("@ Drivetrain : RWD\n");gotoxy(30,18);
                printf("@ Transmission : Manual - 7 Gears\n");gotoxy(30,19);
                printf("@ DIMENSIONS\n");gotoxy(30,20);
                printf("  # Length : 4850 mm\n\t\t\t\t# Width : 1960 mm\n\t\t\t\t# Height : 1865 mm\n");gotoxy(30,23);
                printf("@ Ground clearance : 244 mm\n");gotoxy(30,24);
                printf("@ Wheel base : 2865 mm\n");gotoxy(30,25);
                printf("@ Airbags : 2 Airbags(Driver,Passenger)\n");gotoxy(30,26);
                printf("@ Infotainment System : YES\n");gotoxy(30,27);
                printf("@ Warranty : 3 years\n");gotoxy(30,28);
                printf("@ Review : 5 Star Rating\n");
                break;
            }
            default :
            {
                gotoxy(30,25);
                printf("WE CURRENTLY HAVE FOUR MODELS SO WE WILL NOTIFY ON YOU SOON");
                catalogue(s,temp);
            }
        }
        gotoxy(30,32);
        printf("DO YOU LIKE THIS MODEL ? (yes /no) ");
        scanf("%*c %[^\n]s",s);
        return s;
    }
    else
    {
        gotoxy(30,25);
        printf("THIS PARTICULAR SEATER IS NOT AVAILABALE");
        sleep(2);
        catalogue(s,temp);
    }

}
/*loan process*/
void loan(int temp)
{
    int downpay;
    int p,no;
    float SI,EMI,r;
    int price[]={777000,1088000,1016000,600000,1362000,1766000,1249000,2877000};
    system("cls");
    gotoxy(50,9);
    printf("LOAN PROCESS");gotoxy(50,10);
    printf("*************");gotoxy(30,14);
    printf("@ The car value is : %d",price[temp]);gotoxy(30,16);
                                                                /*asking the down payment*/
    printf("@ Down payment : ");
    down:
    scanf("%d",&downpay);gotoxy(30,18);
    if(downpay>price[temp])
    {
        gotoxy(40,22);
        printf("Downpay amount is greater car's price");gotoxy(40,24);
        printf("PLEASE ENTER CORRECT AMOUNT!");
        goto down;
    }
    printf("@ No of years:");
    scanf("%d",&no);gotoxy(30,26);
                                                            /*calculating the loan amount*/
    p=price[temp]-downpay;
                                                            /*rate of interest for loan amount*/
    if(temp>=0&&temp<=3)
    {
        r=9;
    }
    else if(temp>=4&&temp<=7)
    {
        r=9.5;
    }
                                                            /*Calculating simple interest*/
    SI=(p*no*r)/100;
    p=p+SI;
                                                            /*Calculating EMI*/
    EMI=p/(no*12);
    printf("@ Loan amount :%d",p);gotoxy(30,28);
    printf("@ Equated Monthly Installment(EMI):%0.2f",EMI);
    sleep(2);

}
/*Insurance process*/
void insurance(int temp)
{
    system("cls");
        int in;
        printf("\n\n\t\t\t\t\t\t INSURANCE");
        printf("\n\t\t\t\t\t\t *********");
        switch(temp)
        {
            case 0:
                {
                    printf("\n");
                    printf("\n\t\t\t\t# Brand name: Hyundai Venue");
                    printf("\n\t\t\t\t# Brand model: S 1.2");
                    printf("\n\t\t\t\t# Year of manufacture: 2021");
                    printf("\n\t\t\t\t# Body type: SUV");
                    printf("\n\n\t\t\t\tWhat kind of insurance are you looking for? \n\t\t\t\t\t\t@ 1-Full insurance \n\t\t\t\t\t\t@ 2-Third party insurance \n\t\t\t\t\t\tEnter:");
                    scanf("%d",&in);
                    if(in==1)
                    {
                        printf("\n\t\t\t\t# Insurance amount = 30,000");
                        printf("\n\t\t\t\t# Claiming amount  = 6,77,000");
                    }
                    else if(in==2)
                    {
                        printf("\n\t\t\t\t# Insurance amount = 21,000");
                        printf("\n\t\t\t\t# Claiming amount  = 6,00,000");
                    }
                    break;
                }
            case 1:
                {
                    printf("\n");
                    printf("\n\t\t\t\t# Brand name: Hyundai Verna");
                    printf("\n\t\t\t\t# Brand model: S Plus 1.5 CRDi");
                    printf("\n\t\t\t\t# Year of manufacture: 2021");
                    printf("\n\t\t\t\t# Body type: Sedan");
                    printf("\n\n\t\t\t\tWhat kind of insurance are you looking for? \n\t\t\t\t\t\t@ 1-Full insurance \n\t\t\t\t\t\t@ 2-Third party insurance \n\t\t\t\t\t\tEnter:");
                    scanf("%d",&in);
                    if(in==1)
                    {
                        printf("\n\t\t\t\t# Insurance amount = 38,000");
                        printf("\n\t\t\t\t# Claiming amount  = 9,45,000");
                    }
                    else if(in==2)
                    {
                        printf("\n\t\t\t\t# Insurance amount = 26,000");
                        printf("\n\t\t\t\t# Claiming amount  = 8,30,000");
                    }
                    break;
                }
            case 2:
                {
                    printf("\n");
                    printf("\n\t\t\t\t# Brand name: Hyundai Creta");
                    printf("\n\t\t\t\t# Brand model: E 1.5");
                    printf("\n\t\t\t\t# Year of manufacture: 2021");
                    printf("\n\t\t\t\t# Body type: SUV");
                    printf("\n\n\t\t\t\tWhat kind of insurance are you looking for? \n\t\t\t\t\t\t@ 1-Full insurance \n\t\t\t\t\t\t@ 2-Third party insurance \n\t\t\t\t\t\tEnter:");
                    scanf("%d",&in);
                    if(in==1)
                    {
                        printf("\n\t\t\t\t# Insurance amount = 36,000");
                        printf("\n\t\t\t\t# Claiming amount  = 9,30,000");
                    }
                    else if(in==2)
                    {
                        printf("\n\t\t\t\t# Insurance amount = 23,500");
                        printf("\n\t\t\t\t# Claiming amount  = 8,00,000");
                    }
                    break;
                }
            case 3:
                {
                    printf("\n");
                    printf("\n\t\t\t\t# Brand name: Hyundai Santro");
                    printf("\n\t\t\t\t# Brand model: Magna CNG");
                    printf("\n\t\t\t\t# Year of manufacture: 2021");
                    printf("\n\t\t\t\t# Body type: Hatchback");
                    printf("\n\n\t\t\t\tWhat kind of insurance are you looking for? \n\t\t\t\t\t\t@ 1-Full insurance \n\t\t\t\t\t\t@ 2-Third party insurance \n\t\t\t\t\t\tEnter:");

                    scanf("%d",&in);
                    if(in==1)
                    {
                        printf("\n\t\t\t\t# Insurance amount = 22,000");
                        printf("\n\t\t\t\t# Claiming amount  = 5,00,000");
                    }
                    else if(in==2)
                    {
                        printf("\n\t\t\t\t# Insurance amount = 20,000");
                        printf("\n\t\t\t\t# Claiming amount  = 4,75,000");
                    }
                    break;
                }
            case 4:
                {
                    printf("\n");
                    printf("\n\t\t\t\t# Brand name: Mahindra Marazoo");
                    printf("\n\t\t\t\t# Brand model: M4 Plus 8 STR");
                    printf("\n\t\t\t\t# Year of manufacture: 2021");
                    printf("\n\t\t\t\t# Body type: Minivan");
                    printf("\n\n\t\t\t\tWhat kind of insurance are you looking for? \n\t\t\t\t\t\t@ 1-Full insurance \n\t\t\t\t\t\t@ 2-Third party insurance \n\t\t\t\t\t\tEnter:");
                    scanf("%d",&in);
                    if(in==1)
                    {
                        printf("\n\t\t\t\t# Insurance amount = 40,000");
                        printf("\n\t\t\t\t# Claiming amount = 12,00,000");
                    }
                    else if(in==2)
                    {
                        printf("\n\t\t\t\t# Insurance amount = 38,000");
                        printf("\n\t\t\t\t# Claiming amount = 11,80,000");
                    }
                    break;
                }
            case 5:
                {
                    printf("\n");
                    printf("\n\t\t\t\t# Brand name: Mahindra Scarpio");
                    printf("\n\t\t\t\t# Brand model: S11");
                    printf("\n\t\t\t\t# Year of manufacture: 2021");
                    printf("\n\t\t\t\t# Body type: SUV");
                    printf("\n\n\t\t\t\tWhat kind of insurance are you looking for? \n\t\t\t\t\t\t@ 1-Full insurance \n\t\t\t\t\t\t2 2-Third party insurance \n\t\t\t\t\t\tEnter:");
                    scanf("%d",&in);
                    if(in==1)
                    {
                        printf("\n\t\t\t\t# Insurance amount = 46,000");
                        printf("\n\t\t\t\t# Claiming amount  = 15,00,000");
                    }
                    else if(in==2)
                    {
                        printf("\n\t\t\t\t# Insurance amount = 43,500");
                        printf("\n\t\t\t\t# Claiming amount  = 14,20,000");
                    }
                    break;
                }
            case 6:
                {
                    printf("\n");
                    printf("\n\t\t\t\t# Brand name: Mahindra XUV700");
                    printf("\n\t\t\t\t# Brand model: AX 3 Petrol MT 5 STR ");
                    printf("\n\t\t\t\t# Year of manufacture: 2021");
                    printf("\n\t\t\t\t# Body type: SUV");
                    printf("\n\n\t\t\t\tWhat kind of insurance are you looking for? \n\t\t\t\t\t\t@ 1-Full insurance \n\t\t\t\t\t\t@ 2-Third party insurance \n\t\t\t\t\t\tEnter:");
                    scanf("%d",&in);
                    if(in==1)
                    {
                        printf("\n\t\t\t\t# Insurance amount = 39,000");
                        printf("\n\t\t\t\t# Claiming amount  = 10,80,000");
                    }
                    else if(in==2)
                    {
                        printf("\n\t\t\t\t# Insurance amount = 36,200");
                        printf("\n\t\t\t\t# Claiming amount = 10,00,000");
                    }
                    break;
                }
            case 7:
                {
                    printf("\n");
                    printf("\n\t\t\t\t# Brand name: Mahindra Alturas");
                    printf("\n\t\t\t\t# Brand model: G4 2WD AT");
                    printf("\n\t\t\t\t# Year of manufacture: 2021");
                    printf("\n\t\t\t\t# Body type: SUV");
                    printf("\n\n\t\t\t\tWhat kind of insurance are you looking for? \n\t\t\t\t\t\t@ 1-Full insurance \n\t\t\t\t\t\t@ 2-Third party insurance \n\t\t\t\t\t\tEnter:");
                    scanf("%d",&in);
                    if(in==1)
                    {
                        printf("\n\t\t\t\t# Insurance amount = 56,000");
                        printf("\n\t\t\t\t# Claiming amount  = 25,40,000");
                    }
                    else if(in==2)
                    {
                        printf("\n\t\t\t\t# Insurance amount = 54,000");
                        printf("\n\t\t\t\t# Claiming amount  = 25,00,000");
                    }
                    break;
                }
        }
        sleep(3);
}
                                                        /*Checking user aadhaar number*/
int check_aadhaar(char* aadhaar)
{
    int i,f=0;
    for(i=0;aadhaar[i]!='\0';i++)
    {
        if(isdigit(aadhaar[i]))
        {
            f++;
            continue;
        }
        else
        {
            f=0;
            printf("\n\t\t\t\tINVALID AADHAAR NUMBER!");
            printf("\n\t\t\t\tPlease enter correct aadhaar number");
            return 0;
        }
    }
                                                        /*Checking the aadhaar no is valid or invalid*/
    if(i!=12)
    {
        printf("\n\t\t\t\tINVALID AADHAAR NUMBER!");
        printf("\n\t\t\t\tPlease enter correct aadhaar number");
        return 0;
    }
    if(f!=0)
        return 1;
}
                                                                /*checking phone no*/
int check_phone(char* phone_no)
{
int i,f=0;
    for(i=0;phone_no[i]!='\0';i++)
    {
        if(isdigit(phone_no[i]))
        {
            f++;
            continue;
        }
        else
        {
            f=0;
                                                            /*checking phoneno valid or invalid*/
            printf("\n\t\t\t\tINVALID MOBILE NUMBER!");
            printf("\n\t\t\t\tPlease enter correct mobile number");
            return 0;
        }
    }
    if(i!=10)
    {
        printf("\n\t\t\t\tINVALID MOBILE NUMBER!");
        printf("\n\t\t\t\tPlease enter correct mobile number");
        return 0;
    }
    if(f!=0)
        return 1;
}
                                                            /*checking lisence no*/
int check_license(char* license_no)
{
    int i,f=0;
    if(license_no[0]=='t'||license_no[0]=='T'&&license_no[1]=='n'||license_no[1]=='N')
    {
        for(i=2;license_no[i]!='\0';i++)
        {
            if(isdigit(license_no[i]))
            {
                f++;
                continue;
            }
            else
            {
                f=0;
                printf("\n\t\t\t\tINVALID LICENSE NUMBER!");
                printf("\n\t\t\t\tPlease enter correct license number");
                return 0;
            }
        }
    }
                                                            /*checking whethr it is valid or not*/
    else
    {
        printf("\n\t\t\t\tINVALID LICENSE NUMBER!");
        printf("\n\t\t\t\tPlease enter correct license number");
        return 0;
    }
    if(i!=15)
    {
        printf("\n\t\t\t\tINVALID LICENSE NUMBER!");
        printf("\n\t\t\t\tPlease enter correct license number");
        return 0;
    }
    if(f!=0)
        return 1;
}
int user_info(int temp)
{
        FILE *fp1,*fp2,*fp3;
        user u1;
        char l[5];
        int age;
                                                            /*file gets open*/
        fp1=fopen("names.txt","a");
        if(fp1==NULL)
        {
            printf("File of name can't open");
        }
        system("cls");
        gotoxy(50,5);
        printf("PLEASE FILL YOUR DETAILS:");gotoxy(50,6);
        printf("*************************");gotoxy(32,10);
        printf("NAME :");
        scanf("%*c%[^\n]s",u1.name);
        printf("\n\n\t\t\t\tPERMANENT ADDRESS:");
        scanf("%*c%[^\n]s",u1.address);
        printf("\n\n\t\t\t\tAGE:");
        scanf("%d",&u1.age);
        if(u1.age<18)
        {
            printf("\n\n\t\t\t\tSORRY YOU ARE UNDER AGED! SO YOU ARE NOT ELIGIBLE!!");
            return 0;
        }
        printf("\n\n\t\t\t\tPHONE NUMBER:");
        phn:
        scanf("%*c%[^\n]s",u1.phone_no);
        if(check_phone(u1.phone_no)==0)
            goto phn;

        printf("\n\n\t\t\t\tAADHAAR NUMBER:");
        aadh:
        scanf("%*c%[^\n]s",u1.aadhaar);
        if(check_aadhaar(u1.aadhaar)==0)
            goto aadh;

        printf("\n\n\t\t\t\tLICENSE NUMBER:");
        lic:
        scanf("%*c%[^\n]s",u1.license_no);
        if(check_license(u1.license_no)==0)
            goto lic;

        fwrite(&u1, sizeof(u1),1, fp1);
        fclose(fp1);
                                                            /*file gets closed*/
        printf("\n\n\n\t\t\t\tDO YOU WANT LOAN?(yes /no)");
        scanf("%*c%[^\n]s",l);
        if((strcmp(l,"yes"))==0||(strcmp(l,"YES"))==0)
        {
            loan(temp);
            insurance(temp);
        }
        else if((strcmp(l,"no"))==0||(strcmp(l,"NO"))==0)
        {
            insurance(temp);
        }
        system("cls");
        gotoxy(40,6);
        printf("********************************************************");
        gotoxy(48,8);
        printf("NAME    : %s",u1.name);
        printf("\n\n\t\t\t\t\t\tADDRESS : %s",u1.address);
        printf("\n\n");
        gotoxy(45,12);
        printf("CONGRATULATIONS ON YOUR NEW CAR!!!");
        gotoxy(43,13);
        printf("ENJOY THE EXCITEMENT THAT COMES WITH OWING A RIDE");
        gotoxy(40,15);
        printf("********************************************************");
        printf("\n\n\n\n\n\n\n\n\n");
}
