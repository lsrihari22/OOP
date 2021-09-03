#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct user
{
    char name[15];
    int password;
    struct user *next;
} *start = NULL;
struct admin
{
    char id[15];
    int password;
    struct admin *next;
} *startA = NULL;
struct donor
{
    char name[15];
    int password;
    struct donor *next;
} *startB = NULL;
struct blood_donation_camp
{
    char name[50];
    char area[20];
    char b1[5];
    char b2[5];
    char b3[5];
    struct blood_donation_camp *next;
} *startC = NULL;
struct blood_bank
{
    char name[50];
    char area[20];
    char b1[5];
    char b2[5];
    struct blood_bank *next;
} *startD = NULL;
struct search
{
    char name[50];
    char area[20];
    struct search *next;
} *searchbank = NULL, *searchcamp = NULL;
/*Assuming that the NGO has 2 ADMIN, 5 pre-registered users and 5 pre-registered donors.

>> Pre-registered user's name and password are as followed:
1) Rahul Sharma
   12345
2) Rohan
   34
3) Samuel
   122
4) Rohit Khetan
   114
5) Ishita
   550     
   
>> Admin's Id and password are as followed:
1) ID:       XYZ Chairperson
   Password: 1212
2) ID:       XYZ Manager
   Password: 1212


>> Pre-registered donor's name snd password are as followed:
1) Ruchika
   12345
2) Ayush
   11
3) Aryan
   90
4) Rishab
   117
5) Alok
   5                             */
void already_registered_user_Admin_and_donor()
{
    struct user *new1 = (struct user *)malloc(sizeof(struct user));
    strcpy(new1->name, "Rahul Sharma");
    new1->password = 12345;
    start = new1;
    struct user *new2 = (struct user *)malloc(sizeof(struct user));
    strcpy(new2->name, "Rohan");
    new2->password = 34;
    new1->next = new2;
    struct user *new3 = (struct user *)malloc(sizeof(struct user));
    strcpy(new3->name, "Samuel");
    new3->password = 122;
    new2->next = new3;
    struct user *new4 = (struct user *)malloc(sizeof(struct user));
    strcpy(new4->name, "Rohit Khetan");
    new4->password = 114;
    new3->next = new4;
    struct user *new5 = (struct user *)malloc(sizeof(struct user));
    strcpy(new5->name, "Ishita");
    new5->password = 550;
    new4->next = new5;
    new5->next = NULL;
    struct admin *newA1 = (struct admin *)malloc(sizeof(struct admin));
    strcpy(newA1->id, "XYZ_Chairperson");
    newA1->password = 1212;
    startA = newA1;
    struct admin *newA2 = (struct admin *)malloc(sizeof(struct admin));
    strcpy(newA2->id, "XYZ_Manager");
    newA2->password = 1212;
    newA1->next = newA2;
    newA2->next = NULL;
    struct donor *newB1 = (struct donor *)malloc(sizeof(struct donor));
    strcpy(newB1->name, "Ruchika");
    newB1->password = 12345;
    startB = newB1;
    struct donor *newB2 = (struct donor *)malloc(sizeof(struct donor));
    strcpy(newB2->name, "Ayush");
    newB2->password = 11;
    newB1->next = newB2;
    struct donor *newB3 = (struct donor *)malloc(sizeof(struct donor));
    strcpy(newB3->name, "Aryan");
    newB3->password = 90;
    newB2->next = newB3;
    struct donor *newB4 = (struct donor *)malloc(sizeof(struct donor));
    strcpy(newB4->name, "Rishab");
    newB4->password = 117;
    newB3->next = newB4;
    struct donor *newB5 = (struct donor *)malloc(sizeof(struct donor));
    strcpy(newB5->name, "Alok");
    newB5->password = 5;
    newB4->next = newB5;
    newB5->next = NULL;
}
/*
Columbia Asia Hospital           O-,AB-
Fortis Hospital                  O+,A- 
Rainbow Hospital                 AB-,B+
Baptist Hospital                 A+,B-
NIMHANS Hospital                 O-,AB+
Jaydeva Hospital                 O+,AB+
KIMS Banglore Hospital           A-,B-
Narayana Hrudayalaya Hospital    B+,A+

Swami Vivekananda Blood Camp        A+,O-,B-   
Grace Blood Camp                    B+,B-,A+
Red Cross Society                   A-,AB-,A+
Banglore Medical Services Trust     O+,A-,AB-
Malleswaram Voluntary Blood Camp    AB+,O+,B+
Lions Blood Camp                    AB+,O-,B-
KIMS Blood Camp                     A-,B+,O+
BMST Blood Camp                     AB+,AB-,O-

City:   BENGALURU
Area 1: MG Road
Area 2: Indiranagar
Area 3: Rajajinagar
Area 4: Vijaynagar
Area 5: Malleshwaram
Area 6: Yelhanka
Area 7: KR Puram
Area 8: Koramangla  */
void registered_Bank_and_donation_blood_donation_camp()
{
    struct blood_donation_camp *new1 = (struct blood_donation_camp *)malloc(sizeof(struct blood_donation_camp));
    strcpy(new1->name, "Swami Vivekananda Blood Camp");
    strcpy(new1->area, "MG Road");
    strcpy(new1->b1, "A+");
    strcpy(new1->b2, "O-");
    strcpy(new1->b3, "B-");
    startC = new1;
    struct blood_donation_camp *new2 = (struct blood_donation_camp *)malloc(sizeof(struct blood_donation_camp));
    strcpy(new2->name, "Grace Blood Camp");
    strcpy(new2->area, "Indiranagar");
    strcpy(new2->b1, "B+");
    strcpy(new2->b2, "B-");
    strcpy(new2->b3, "A+");
    new1->next = new2;
    struct blood_donation_camp *new3 = (struct blood_donation_camp *)malloc(sizeof(struct blood_donation_camp));
    strcpy(new3->name, "Red Cross Society Camp");
    strcpy(new3->area, "Rajajinagar");
    strcpy(new3->b1, "A-");
    strcpy(new3->b2, "AB-");
    strcpy(new3->b3, "A+");
    new2->next = new3;
    struct blood_donation_camp *new4 = (struct blood_donation_camp *)malloc(sizeof(struct blood_donation_camp));
    strcpy(new4->name, "Banglore Medical Services Trust Camp");
    strcpy(new4->area, "Vijaynagar");
    strcpy(new4->b1, "O+");
    strcpy(new4->b2, "A-");
    strcpy(new4->b3, "AB-");
    new3->next = new4;
    struct blood_donation_camp *new5 = (struct blood_donation_camp *)malloc(sizeof(struct blood_donation_camp));
    strcpy(new5->name, "Malleswaram Voluntary Blood Camp");
    strcpy(new5->area, "Malleshwaram");
    strcpy(new5->b1, "AB+");
    strcpy(new5->b2, "O+");
    strcpy(new5->b3, "B+");
    new4->next = new5;
    struct blood_donation_camp *new6 = (struct blood_donation_camp *)malloc(sizeof(struct blood_donation_camp));
    strcpy(new6->name, "Lions Blood Camp");
    strcpy(new6->area, "Yelhanka");
    strcpy(new6->b1, "AB+");
    strcpy(new6->b2, "O-");
    strcpy(new6->b3, "B-");
    new5->next = new6;
    struct blood_donation_camp *new7 = (struct blood_donation_camp *)malloc(sizeof(struct blood_donation_camp));
    strcpy(new7->name, "KIMS Blood Camp");
    strcpy(new7->area, "KR Puram");
    strcpy(new7->b1, "A-");
    strcpy(new7->b2, "B+");
    strcpy(new7->b3, "O+");
    new6->next = new7;
    struct blood_donation_camp *new8 = (struct blood_donation_camp *)malloc(sizeof(struct blood_donation_camp));
    strcpy(new8->name, "BMST Blood Camp");
    strcpy(new8->area, "Koramangla");
    strcpy(new8->b1, "AB+");
    strcpy(new8->b2, "AB-");
    strcpy(new8->b3, "O-");
    new7->next = new8;
    new8->next = NULL;
    struct blood_bank *newD1 = (struct blood_bank *)malloc(sizeof(struct blood_bank));
    strcpy(newD1->name, "Columbia Asia Hospital");
    strcpy(newD1->area, "MG Road");
    strcpy(newD1->b1, "O-");
    strcpy(newD1->b2, "AB-");
    startD = newD1;
    struct blood_bank *newD2 = (struct blood_bank *)malloc(sizeof(struct blood_bank));
    strcpy(newD2->name, "Fortis Hospital");
    strcpy(newD2->area, "Indiranagar");
    strcpy(newD2->b1, "O+");
    strcpy(newD2->b2, "A-");
    newD1->next = newD2;
    struct blood_bank *newD3 = (struct blood_bank *)malloc(sizeof(struct blood_bank));
    strcpy(newD3->name, "Rainbow Hospital");
    strcpy(newD3->area, "Rajajinagar");
    strcpy(newD3->b1, "AB-");
    strcpy(newD3->b2, "B+");
    newD2->next = newD3;
    struct blood_bank *newD4 = (struct blood_bank *)malloc(sizeof(struct blood_bank));
    strcpy(newD4->name, "Baptist Hospital");
    strcpy(newD4->area, "Vijaynagar");
    strcpy(newD4->b1, "A+");
    strcpy(newD4->b2, "B-");
    newD3->next = newD4;
    struct blood_bank *newD5 = (struct blood_bank *)malloc(sizeof(struct blood_bank));
    strcpy(newD5->name, "NIMHANS Hospital");
    strcpy(newD5->area, "Malleshwaram");
    strcpy(newD5->b1, "O-");
    strcpy(newD5->b2, "AB+");
    newD4->next = newD5;
    struct blood_bank *newD6 = (struct blood_bank *)malloc(sizeof(struct blood_bank));
    strcpy(newD6->name, "Jaydeva Hospital");
    strcpy(newD6->area, "Yelhanka");
    strcpy(newD6->b1, "O+");
    strcpy(newD6->b2, "AB+");
    newD5->next = newD6;
    struct blood_bank *newD7 = (struct blood_bank *)malloc(sizeof(struct blood_bank));
    strcpy(newD7->name, "KIMS Banglore Hospital");
    strcpy(newD7->area, "KR Puram");
    strcpy(newD7->b1, "A-");
    strcpy(newD7->b2, "B-");
    newD6->next = newD7;
    struct blood_bank *newD8 = (struct blood_bank *)malloc(sizeof(struct blood_bank));
    strcpy(newD8->name, "Narayana Hrudayalaya Hospital");
    strcpy(newD8->area, "Koramangla");
    strcpy(newD8->b1, "B+");
    strcpy(newD8->b2, "A+");
    newD7->next = newD8;
    newD8->next = NULL;
}

void adding_newly_registered_user_to_the_list(char name[15], int password)
{
    struct user *temp;
    struct user *new = (struct user *)malloc(sizeof(struct user));
    strcpy(new->name, name);
    new->password = password;
    new->next = NULL;
    if (start == NULL)
    {
        start = new;
    }
    else
    {
        temp = start;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new;
    }
}
void adding_newly_registered_donor_to_the_list(char name[15], int password /*, char blood[10]*/)
{
    struct donor *temp;
    struct donor *new = (struct donor *)malloc(sizeof(struct donor));
    strcpy(new->name, name);
    new->password = password;
    new->next = NULL;
    if (startB == NULL)
    {
        startB = new;
    }
    else
    {
        temp = startB;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new;
    }
}
void add_ADMIN(char id[15], int password)
{
    struct admin *temp;
    struct admin *new = (struct admin *)malloc(sizeof(struct admin));
    strcpy(new->id, id);
    new->password = password;
    new->next = NULL;
    if (startA == NULL)
    {
        startA = new;
    }
    else
    {
        temp = startA;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new;
    }
}
int checkregistereduser(char name[15], int password)
{
    struct user *temp = start;
    while (temp->next != NULL)
    {
        if (strcmp(temp->name, name) == 0 && temp->password == password)
        {
            return 1;
        }
        temp = temp->next;
    }
    if (strcmp(temp->name, name) == 0 && temp->password == password)
    {
        return 1;
    }
    return 0;
}
int checkregistereddonor(char name[15], int password)
{
    struct donor *temp = startB;
    while (temp->next != NULL)
    {
        if (strcmp(temp->name, name) == 0 && temp->password == password)
        {
            return 1;
        }
        temp = temp->next;
    }
    if (strcmp(temp->name, name) == 0 && temp->password == password)
    {
        return 1;
    }
    return 0;
}
int checkregisteredadmin(char id[15], int password)
{
    struct admin *temp = startA;
    while (temp->next != NULL)
    {
        if (strcmp(temp->id, id) == 0 && temp->password == password)
        {
            return 1;
        }
        temp = temp->next;
    }
    if (strcmp(temp->id, id) == 0 && temp->password == password)
    {
        return 1;
    }
    return 0;
}
int searching_blood_bank(char blood[10])
{
    struct blood_bank *temp = startD;
    struct search *temp1;
    int i = 0;
    while (temp->next != NULL)
    {
        if (strcmp(temp->b1, blood) == 0 || strcmp(temp->b2, blood) == 0)
        {
            struct search *new = (struct search *)malloc(sizeof(struct search));
            i++;
            printf("\n\nOption %d\n", i);
            printf(">> Name of the hospital having %s blood type is : %s\n", blood, temp->name);
            printf(">> Location/Area: %s\n", temp->area);
            printf(">> City: Bengaluru\n");
            strcpy(new->name, temp->name);
            strcpy(new->area, temp->area);
            new->next = NULL;
            if (searchbank == NULL)
            {
                searchbank = new;
            }
            else
            {
                temp1 = searchbank;
                while (temp1->next != NULL)
                {
                    temp1 = temp1->next;
                }
                temp1->next = new;
            }
        }
        temp = temp->next;
    }
    if (strcmp(temp->b1, blood) == 0 || strcmp(temp->b2, blood) == 0)
    {
        struct search *new = (struct search *)malloc(sizeof(struct search));
        i++;
        printf("\n\nOption %d\n", i);
        printf(">> Name of the hospital having %s blood type is : %s\n", blood, temp->name);
        printf(">> Location/Area: %s\n", temp->area);
        printf(">> City: Bengaluru\n");
        strcpy(new->name, temp->name);
        strcpy(new->area, temp->area);
        new->next = NULL;
        if (searchbank == NULL)
        {
            searchbank = new;
        }
        else
        {
            temp1 = searchbank;
            while (temp1->next != NULL)
            {
                temp1 = temp1->next;
            }
            temp1->next = new;
        }
    }
    return i;
}
int searching_blood_donation_camp(char blood[10])
{
    struct blood_donation_camp *temp = startC;
    struct search *temp1;
    int i = 0;
    while (temp->next != NULL)
    {
        if (strcmp(temp->b1, blood) == 0 || strcmp(temp->b2, blood) == 0 || strcmp(temp->b3, blood) == 0)
        {
            struct search *new = (struct search *)malloc(sizeof(struct search));
            i++;
            printf("\n\nOption %d\n", i);
            printf(">> Name of the Blood Donation Camp accepting blood type %s is : %s\n", blood, temp->name);
            printf(">> Location/Area: %s\n", temp->area);
            printf(">> City: Bengaluru\n");
            strcpy(new->name, temp->name);
            strcpy(new->area, temp->area);
            new->next = NULL;
            if (searchcamp == NULL)
            {
                searchcamp = new;
            }
            else
            {
                temp1 = searchcamp;
                while (temp1->next != NULL)
                {
                    temp1 = temp1->next;
                }
                temp1->next = new;
            }
        }
        temp = temp->next;
    }
    if (strcmp(temp->b1, blood) == 0 || strcmp(temp->b2, blood) == 0 || strcmp(temp->b3, blood) == 0)
    {
        struct search *new = (struct search *)malloc(sizeof(struct search));
        i++;
        printf("\n\nOption %d\n", i);
        printf(">> Name of the Blood Donation Camp accepting blood type %s is : %s\n", blood, temp->name);
        printf(">> Location/Area: %s\n", temp->area);
        printf(">> City: Bengaluru\n");
        strcpy(new->name, temp->name);
        strcpy(new->area, temp->area);
        new->next = NULL;
        if (searchcamp == NULL)
        {
            searchcamp = new;
        }
        else
        {
            temp1 = searchcamp;
            while (temp1->next != NULL)
            {
                temp1 = temp1->next;
            }
            temp1->next = new;
        }
    }
    return i;
}
void print_registered_user()
{
    struct user *temp = start;
    int i = 1;
    printf("\n---LIST OF REGISTERED USER---");
    while (temp->next != NULL)
    {
        printf("\n%d) Name of USER = %s\n", i, temp->name);
        i++;
        temp = temp->next;
    }
    printf("\n%d) Name of USER = %s\n", i, temp->name);
}
void print_registered_Admin()
{
    struct admin *temp = startA;
    int i = 1;
    printf("\n---LIST OF ADMIN---");
    while (temp->next != NULL)
    {
        printf("\n%d) ID of Admin = %s\n", i, temp->id);
        i++;
        temp = temp->next;
    }
    printf("\n%d) ID of Admin = %s\n", i, temp->id);
}
void print_registered_donor()
{
    struct donor *temp = startB;
    int i = 1;
    printf("\n---LIST OF REGISTERED DONOR---");
    while (temp->next != NULL)
    {
        printf("\n%d) Name of DONOR = %s\n", i, temp->name);
        i++;
        temp = temp->next;
    }
    printf("\n%d) Name of DONOR = %s\n", i, temp->name);
}
void print_bank()
{
    struct blood_bank *temp = startD;
    int i = 1;
    printf("\n---LIST OF BLOOD BANKS (OR HOSPITAL)---");
    while (temp->next != NULL)
    {
        printf("\n%d) Name of Hospital = %s\n", i, temp->name);
        printf("   Area/Location/Landmark = %s\n", temp->area);
        printf("   Blood Type available for users are = %3s  %3s\n", temp->b1, temp->b2);
        i++;
        temp = temp->next;
    }
    printf("\n%d) Name of Hospital = %s\n", i, temp->name);
    printf("   Area/Location/Landmark = %s\n", temp->area);
    printf("   Blood Type available for users are = %3s  %3s\n", temp->b1, temp->b2);
}
void print_camp()
{
    struct blood_donation_camp *temp = startC;
    int i = 1;
    printf("\n---LIST OF BLOOD DONATION CAMP---");
    while (temp->next != NULL)
    {
        printf("\n%d) Name of Blood Donation Camp = %s\n", i, temp->name);
        printf("   Area/Location/Landmark = %s\n", temp->area);
        printf("   Blood Type accepted from donors are = %3s  %3s  %3s\n", temp->b1, temp->b2, temp->b3);
        i++;
        temp = temp->next;
    }
    printf("\n%d) Name of Blood Donation Camp = %s\n", i, temp->name);
    printf("   Area/Location/Landmark = %s\n", temp->area);
    printf("   Blood Type accepted from donors are = %3s  %3s  %3s\n", temp->b1, temp->b2, temp->b3);
}
int main()
{
    int choice1 = 0;
    int going = 1;
    already_registered_user_Admin_and_donor();
    registered_Bank_and_donation_blood_donation_camp();
    while (going == 1)
    {
        searchbank = NULL, searchcamp = NULL;
        //Main Menu
        printf("\nWELLCOME TO THE BLOOD DONATION APPLICATION\n");
        printf("----MAIN MENU----\n");
        printf("Press 1 to sign in as an USER\n");
        printf("Press 2 to sign up/register as an USER\n");
        printf("Press 3 to sign in as an ADMIN\n");
        printf("Press 4 to sign up/register as a DONOR\n");
        printf("Press 5 to sign in as a DONOR\n");
        printf("Enter your choice\n");
        scanf("%d", &choice1);
        switch (choice1)
        {
        default:
        {
            printf("\nEntered choice is INVALID\n");
            break;
        }
        case 1:
        {
            char namecheck[15];
            int passcheck;
            printf("Enter the User's name\n");
            scanf("%s", &namecheck);
            printf("Enter the password\n");
            scanf("%d", &passcheck);
            if (checkregistereduser(namecheck, passcheck) == 1)
            {
                printf("\nYou are logged in\n");

                char blood[10] = "A";
                printf("\nThese are the following blood types\n");
                printf("A+\nA-\nB+\nB-\nAB+\nAB-\nO+\nO-");
                printf("\nWhat blood type do you need? Enter the Blood Type in the format mentioned above.\n");
                scanf("%s", &blood);
                while (strcmp(blood, "A+") != 0 && strcmp(blood, "A-") != 0 && strcmp(blood, "B+") != 0 &&
                       strcmp(blood, "B-") != 0 && strcmp(blood, "AB+") != 0 && strcmp(blood, "AB-") != 0 &&
                       strcmp(blood, "O+") != 0 && strcmp(blood, "O-") != 0)
                {
                    printf("\nBlood type %s doesn't matches the above format.\n", blood);
                    printf("Please enter the required blood type in the format mentioned above\n");
                    scanf("%s", &blood);
                }
                printf("\nFollowing are the blood banks where %s blood type is available\n", blood);
                int limit = searching_blood_bank(blood);
                int ch = 0;
                printf("\nEnter your choice. (Press 1 for Option 1, press 2 for Option 2 and so on)\n");
                scanf("%d", &ch);
                while (ch <= 0 || ch > limit)
                {
                    printf("\nINVALID CHOICE\n");
                    printf("You have %d option available for the blood type %s\n", limit, blood);
                    printf("\nPlease enter your choice again. (Press 1 for Option 1, press 2 for Option 2 and so on)\n");
                    scanf("%d", &ch);
                }

                struct search *temp = searchbank;
                int i;
                for (i = 1; i < ch; i++)
                {
                    temp = temp->next;
                }
                printf("\n\nDear User/Recipient,\n\nFollowing are the details of hospital/blood bank you have choosen.\n");
                printf(">> Blood type: %s\n", blood);
                printf(">> Name of Hospital(Blood Bank): %s\n", temp->name);
                printf(">> Location/Area/Landmark: %s\n", temp->area);
                printf(">> City: Bengaluru\n");
            }
            else
            {
                printf("\nEntered name or password is INCORRECT\n");
            }
            break;
        }
        case 2:
        {
            char name[15];
            int password;
            printf("\nEnter the following details to register\n");
            printf("Enter your name\n");
            scanf("%s", &name);
            printf("Create an integer password\n");
            scanf("%d", &password);
            adding_newly_registered_user_to_the_list(name, password);
            char namecheck[15];
            int passcheck;
            printf("\nPlease sign in.\n");
            printf("Enter the User's name.\n");
            scanf("%s", &namecheck);
            printf("Enter the password.\n");
            scanf("%d", &passcheck);
            if (checkregistereduser(namecheck, passcheck) == 1)
            {
                printf("\nYou are logged in.\n");

                char blood[10] = "A";
                printf("\nThese are the following blood types\n");
                printf("A+\nA-\nB+\nB-\nAB+\nAB-\nO+\nO-");
                printf("\nWhat blood type do you need? Enter the Blood Type in the format mentioned above.\n");
                scanf("%s", &blood);
                while (strcmp(blood, "A+") != 0 && strcmp(blood, "A-") != 0 && strcmp(blood, "B+") != 0 &&
                       strcmp(blood, "B-") != 0 && strcmp(blood, "AB+") != 0 && strcmp(blood, "AB-") != 0 &&
                       strcmp(blood, "O+") != 0 && strcmp(blood, "O-") != 0)
                {
                    printf("\nBlood type %s doesn't matches the above format.\n", blood);
                    printf("Please enter the required blood type in the format mentioned above\n");
                    scanf("%s", &blood);
                }
                printf("\nFollowing are the blood banks where %s blood type is available\n", blood);
                int limit = searching_blood_bank(blood);
                int ch = 0;
                printf("\nEnter your choice. (Press 1 for Option 1, press 2 for Option 2 and so on)\n");
                scanf("%d", &ch);
                while (ch <= 0 || ch > limit)
                {
                    printf("\nINVALID CHOICE\n");
                    printf("You have %d option available for the blood type %s\n", limit, blood);
                    printf("\nEnter your choice. (Press 1 for Option 1, press 2 for Option 2 and so on)\n");
                    scanf("%d", &ch);
                }

                struct search *temp = searchbank;
                int i;

                for (i = 1; i < ch; i++)
                {
                    temp = temp->next;
                }
                printf("\n\nDear User/Recipient,\n\nFollowing are the details of hospital/blood bank you have choosen.\n");
                printf(">> Blood type: %s\n", blood);
                printf(">> Name of Hospital(Blood Bank): %s\n", temp->name);
                printf(">> Location/Area/Landmark: %s\n", temp->area);
                printf(">> City: Bengaluru\n");
            }
            else
            {
                printf("\nEntered name or password is INCORRECT\n");
            }
            break;
        }
        case 3:
        {
            char idcheck[15];
            int passcheck;
            int choice = 0;
            printf("\nPlease sign in.\n");
            printf("Enter the Admin's ID.\n");
            scanf("%s", &idcheck);
            printf("Enter the password.\n");
            scanf("%d", &passcheck);
            if (checkregisteredadmin(idcheck, passcheck) == 1)
            {
                printf("\nYou are logged in.\n");
                int going1 = 1;
                while (going1 == 1)
                {
                    //Admin Menu
                    printf("\n---ADMIN MENU---\n");
                    printf("Press 1 to ADD New Admin\n");
                    printf("Press 2 to view the list of registered User\n");
                    printf("Press 3 to view the list of registered Donor\n");
                    printf("Press 4 to view the list of Admin\n");
                    printf("Press 5 to view the list of Hospital(Blood Bank)\n");
                    printf("Press 6 to view the list of Blood Donation Camp\n");
                    printf("Enter the choice\n");
                    scanf("%d", &choice);
                    switch (choice)
                    {
                    case 1:
                    {
                        char id[15];
                        int password = 0;
                        printf("\n\nEnter the following details in order to add a new admin\n");
                        printf("Enter the ID of new Admin\n");
                        scanf("%s", &id);
                        printf("Enter the password\n");
                        scanf("%d", &password);
                        add_ADMIN(id, password);
                        printf("The new admin has been added\n");
                        break;
                    }
                    case 2:
                    {
                        print_registered_user();
                        break;
                    }
                    case 3:
                    {
                        print_registered_donor();
                        break;
                    }
                    case 4:
                    {
                        print_registered_Admin();
                        break;
                    }
                    case 5:
                    {
                        print_bank();
                        break;
                    }
                    case 6:
                    {
                        print_camp();
                        break;
                    }
                    default:
                    {
                        printf("\nINVALID CHOICE\n");
                    }
                    }
                    printf("\n\nPress 1 to return to ADMIN MENU OR Press any other key (integer) to go back to MAIN MENU\n");
                    scanf("%d", &going1);
                }
            }
            else
            {
                printf("\nEntered ID or password is INCORRECT\n");
            }
            break;
        }
        case 4:
        {
            char name[15], blood[10] = "AR+";
            int password;
            printf("\nEnter the following details to register\n");
            printf("Enter your name\n");
            scanf("%s", &name);
            printf("Create an integer password\n");
            scanf("%d", &password);

            adding_newly_registered_donor_to_the_list(name, password);
            char namecheck[15];
            int passcheck;
            printf("\nPlease sign in.\n");
            printf("Enter the Donor's name.\n");
            scanf("%s", &namecheck);
            printf("Enter the password.\n");
            scanf("%d", &passcheck);
            if (checkregistereddonor(namecheck, passcheck) == 1)
            {
                printf("\nYou are logged in.\n");

                printf("\nThese are the following blood types\n");
                printf("A+\nA-\nB+\nB-\nAB+\nAB-\nO+\nO-");
                printf("\nEnter your Blood Type in the format mentioned above.\n");
                scanf("%s", &blood);
                while (strcmp(blood, "A+") != 0 && strcmp(blood, "A-") != 0 && strcmp(blood, "B+") != 0 &&
                       strcmp(blood, "B-") != 0 && strcmp(blood, "AB+") != 0 && strcmp(blood, "AB-") != 0 &&
                       strcmp(blood, "O+") != 0 && strcmp(blood, "O-") != 0)
                {
                    printf("\nBlood type %s doesn't matches the above format.\n", blood);
                    printf("Please enter your blood type in the format mentioned above\n");
                    scanf("%s", &blood);
                }
                printf("\nFollowing are the Blood Donation Camps available for the blood type %s \n", blood);
                int limit = searching_blood_donation_camp(blood);
                int ch = 0;
                printf("\nEnter your choice. (Press 1 for Option 1, press 2 for Option 2 and so on)\n");
                scanf("%d", &ch);
                while (ch <= 0 || ch > limit)
                {
                    printf("\nINVALID CHOICE\n");
                    printf("You have %d option available for the blood type %s\n", limit, blood);
                    printf("\nPlease enter your choice again. (Press 1 for Option 1, press 2 for Option 2 and so on)\n");
                    scanf("%d", &ch);
                }

                struct search *temp = searchcamp;
                int i;
                for ( i = 1; i < ch; i++)
                {
                    temp = temp->next;
                }
                printf("\n\nDear User/Recipient,\n\nFollowing are the details of blood donation camp you have choosen.\n");
                printf(">> Blood type: %s\n", blood);
                printf(">> Name of Blood Donation Camp: %s\n", temp->name);
                printf(">> Location/Area/Landmark: %s\n", temp->area);
                printf(">> City: Bengaluru\n");
            }
            else
            {
                printf("\nEntered name or password is INCORRECT\n");
            }
            break;
        }
        case 5:
        {
            char namecheck[15], blood[10] = "AR+";
            int passcheck;
            printf("Enter the Donor's name\n");
            scanf("%s", &namecheck);
            printf("Enter the password\n");
            scanf("%d", &passcheck);
            if (checkregistereddonor(namecheck, passcheck) == 1)
            {
                printf("\nYou are logged in\n");

                printf("\nThese are the following blood types\n");
                printf("A+\nA-\nB+\nB-\nAB+\nAB-\nO+\nO-");
                printf("\nEnter your Blood Type in the format mentioned above.\n");
                scanf("%s", &blood);
                while (strcmp(blood, "A+") != 0 && strcmp(blood, "A-") != 0 && strcmp(blood, "B+") != 0 &&
                       strcmp(blood, "B-") != 0 && strcmp(blood, "AB+") != 0 && strcmp(blood, "AB-") != 0 &&
                       strcmp(blood, "O+") != 0 && strcmp(blood, "O-") != 0)
                {
                    printf("\nBlood type %s doesn't matches the above format.\n", blood);
                    printf("Please enter your blood type in the format mentioned above\n");
                    scanf("%s", &blood);
                }
                printf("\nFollowing are the Blood Donation Camps available for the blood type %s \n", blood);
                int limit = searching_blood_donation_camp(blood);
                int ch = 0;
                printf("\nEnter your choice. (Press 1 for Option 1, press 2 for Option 2 and so on)\n");
                scanf("%d", &ch);
                while (ch <= 0 || ch > limit)
                {
                    printf("\nINVALID CHOICE\n");
                    printf("You have %d option available for the blood type %s\n", limit, blood);
                    printf("\nPlease enter your choice again. (Press 1 for Option 1, press 2 for Option 2 and so on)\n");
                    scanf("%d", &ch);
                }

                struct search *temp = searchcamp;
                int i;
                for ( i = 1; i < ch; i++)
                {
                    temp = temp->next;
                }
                printf("\n\nDear User/Recipient,\n\nFollowing are the details of blood donation camp you have choosen.\n");
                printf(">> Blood type: %s\n", blood);
                printf(">> Name of Blood Donation Camp: %s\n", temp->name);
                printf(">> Location/Area/Landmark: %s\n", temp->area);
                printf(">> City: Bengaluru\n");
            }
            else
            {
                printf("\nEntered name or password is INCORRECT\n");
            }
            break;
        }
        }
        printf("\n\nPress 1 to CONTINUE OR Press any other key (integer) to EXIT\n");
        scanf("%d", &going);
    }
    printf("\nHERE, THE PROGRAM ENDS\n");
}