#include <stdio.h>
#include <stdlib.h>

struct student {
    int roll_no;
    char name[50];
    float cgpa;
}s1, s2;

int main()
{
    printf("Enter roll no\n");
    scanf("%d", &s1.roll_no);
    getchar(); // consume leftover '\n' from scanf
    printf("Enter name\n");
    fgets(s1.name, sizeof(s1.name), stdin);
    printf("Enter cgpa");
    scanf("%f", &s1.cgpa);
    printf("student s1 roll_no = %d, name = %s, cgpa=%.2f", s1.roll_no, s1.name, s1.cgpa);
}
