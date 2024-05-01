#include <stdio.h>
#include <string.h>

typedef struct student {
    char name[20];
    double midterm1;
    double midterm2;
    double final_exam;
    double final_grade;
} Student;

int main(void) {
  printf("\nLet's grade!\n");
  Student student[3];

  strcpy(student[0].name, "Alvin");
  strcpy(student[1].name, "Bella");
  strcpy(student[2].name, "Charlie");

  student[0].midterm1 = 86;
  student[1].midterm1 = 78;
  student[2].midterm1 = 70;

  student[0].midterm2 = 90;
  student[1].midterm2 = 84;
  student[2].midterm2 = 77;

  student[0].final_exam = 98;
  student[1].final_exam = 90;
  student[2].final_exam = 92;

  for (int i=0; i<3; i++) {
    student[i].final_grade =
      (student[i].midterm1 + student[i].midterm2 + student[i].final_exam) / 3;
  }

  for (int i=0; i<3; i++) {
    printf("%s's final grade is %g\n", student[i].name, student[i].final_grade);
  }

  printf("\n");
  return 0;
}