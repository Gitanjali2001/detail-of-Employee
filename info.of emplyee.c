 #include<stdio.h>


       struct Employee
       {
              int Id;
              char Name[25];
              int Age;
              long Salary;
       };

       void main()
       {

              struct Employee E;             //Statement  1

                    printf("\nEnter Employee Id : ");
                    scanf("%d",&E.Id);

                    printf("\nEnter Employee Name : ");
                    scanf("%s",&E.Name);

                    printf("\nEnter Employee Age : ");
                    scanf("%d",&E.Age);

                    printf("\nEnter Employee Salary : ");
                    scanf("%ld",&E.Salary);

                    printf("\n\nEmployee Id : %d",E.Id);
                    printf("\nEmployee Name : %s",E.Name);
                    printf("\nEmployee Age : %d",E.Age);
                    printf("\nEmployee Salary : %ld",E.Salary);
                    return 0;


       }


