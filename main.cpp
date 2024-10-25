#include <stdio.h>

    struct student
{
    char name[50];
    unsigned int student_Id;
    char address[100];
};

int main()
{
    struct student students[20];

    printf("Enter the student details:\n");
    for(int i = 0; i < 20; i++) {
        printf("Student %d:\n", i + 1);

        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);

        printf("Student ID: ");
        scanf("%u", &students[i].student_Id);
        getchar();

        printf("Address: ");
        fgets(students[i].address, sizeof(students[i].address), stdin);

        printf("\n");
    }
    printf("Entered student details:\n");
    for(int i = 0; i < 20; i++)
    {
        printf("Student %d:\n", i + 1);
        printf("Name: %s", students[i].name);
        printf("Student ID: %u\n", students[i].student_Id);
        printf("Address: %s\n\n", students[i].address);
    }

    return 0;
}
