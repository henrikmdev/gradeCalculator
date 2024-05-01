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
  int version = 2;
  printf("\n==Final Grade Calculator v%d==\n", version);
  printf("Let's grade!\n\n");
  Student student[3] = {
      {"Alvin", 86, 90, 98},
      {"Bella", 78, 84, 90},
      {"Charlie", 70, 77, 92}
  };

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