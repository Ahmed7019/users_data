#include <stdio.h>

int main()
{

    // The Required data from the user :
    // 1- Name 2- Job 3- Residence 4- Deposit

    struct bank
    {
        /* data */
        char name[30],
            res[30],
            job[30];

        int dep;
    } bk[100];

    printf("Name:\n");
    scanf("%s", &bk[0].name);
    printf("Residence:\n");
    scanf("%s", &bk[0].res);
    printf("Job:\n");
    scanf("%s=", &bk[0].job);
    printf("Deposit:\n");
    scanf("%d", &bk[0].dep);

    printf("Name %s\n", bk[0].name);
    printf("Residence %s\n", bk[0].res);
    printf("Job %s\n", bk[0].job);
    printf("Balance : %d$ \n", bk[0].dep);

    // Data Save Question and variable to get the answer (data)
    char ans;
    printf("Save Data? (Y/N)\n");
    scanf("%c\n", &ans);

    FILE *ptr = fopen("new_data.txt", "w");

    if (ans == 'Y')
    {
        fputws(bk, sizeof(struct bank), 1000, ptr);
    }
    else
    {
        printf("Thanks");
        return 0;
    }

    return 0;
}