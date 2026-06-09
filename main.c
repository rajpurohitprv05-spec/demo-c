#include <stdio.h>

struct students {
    char name[100];
    int marks;
    int roll_no;
};

int main() {
    struct students s1;
    printf("Enter name: ");
    scanf("%s", s1.name);
    printf("Enter marks: ");
    scanf("%d", &s1.marks);
    printf("Enter roll number: ");
    scanf("%d", &s1.roll_no);

    printf("Name: %s\n", s1.name);
    printf("Marks: %d\n", s1.marks);
    printf("Roll Number: %d\n", s1.roll_no);

    

    return 0;
}