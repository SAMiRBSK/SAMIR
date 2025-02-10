#include <stdio.h>
void main (){
  float n1;
  float n2;
  char op;

  printf(" enter the first number :");
    scanf("%f", &n1);
    
  printf(" choose an operation :");
  scanf(" %s", &op);

  printf(" enter the secend number :");
  scanf("%f", &n2);

          if (op == '+'){
            printf("n1 + n2 =  %f \n", n1 + n2  );
          }
          else if (op == '-'){
            printf( "n1 - n2 = %f \n" , n1 - n2);
          }
          else if (op == '*'){
            printf(" n1 * n2 = %f \n" , n1 * n2);
          }
          else if ( op = '/'){
            printf(" n1 / n2 = %f /n", n1 / n2);

          }
          else {
            printf(" error");
          }

}