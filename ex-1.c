//exercise1:use 0 in count


#include<stdio.h>
void main(){
float expenses[13];
int count;
for(count=0;count<12;count++) {
 printf("Enter expenses for month%d: ",count+1);
scanf("%f",&expenses[count]);

}
for(count=0;count<12;count++){
printf("Month%d= $%.2f\n",count+1,expenses[count]);

   }

       }


 
//exercise1:

#include<stdio.h>
void main(){
float expenses[13];
int count;
for(count=1;count<13;count++) {
 printf("Enter expenses for month%d: ",count);
scanf("%f",&expenses[count]);

}
for(count=1;count<13;count++){
printf("Month%d= $%.2f\n",count+1,expenses[count]);

   }

       }


           