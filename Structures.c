#include<stdio.h>

struct Employed {

 char name [50];

 int employer_ID ;

 float salary ;

};


  int main(){

  struct Employed a;

  printf("Enter the employer name =");

      // scanf("%s",&a.name);


   fgets(a.name, sizeof(a.name), stdin);

    printf("Enter the employer ID =");

    scanf("%d",&a.employer_ID);


    printf("Enter the employer Salary =");

    scanf("%f",&a.salary);


    printf("\n Employee Details \n ");


    printf("Employee Name is = %s\n",a.name);

    printf("Employee ID is = %d\n",a.employer_ID);

    printf("Employee Salary is = %f\n",a.salary);



    return 0;



  }
