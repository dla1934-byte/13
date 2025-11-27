#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
       int ID;
       char name[20];
       double grade;
};


int main(int argc, char *argv[])
{
    struct student stud={10,"seojeong", 4.3};
    
    struct student *stdPtr;

    stdPtr = &stud;

    // 학번 이름 학점 값 변경
    stdPtr->ID = 17;
    strcpy(stdPtr->name, "IM");
    stdPtr->grade = 2.0;

    // 각각 출력 :
    printf("ID : %i, name : %s, grade : %lf\n",
           stdPtr->ID, stdPtr->name, stdPtr->grade);

    system("PAUSE");
    return 0;
}

  
  
  
