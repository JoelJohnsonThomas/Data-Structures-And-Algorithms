#include<stdio.h>
#include<stdlib.h>
struct myArray
{
    int total_size;
    int used_size;
    int *ptr;
};
// * a helps to get the value of the address
// * is the value of the operator
// & amperand is the address of the operator
// int*malloc(n*sizeof int) gives you a pointer |& means of address , * means value | iI'LL give the address by & and then I will 
// dereference it by a*

// dereference is used to access or manipulate data contained in memory location pointed by a pointer
 void show(struct myArray *a){
    for(int i = 0; i < a->used_size; i++)
         {
             printf("%d\n",(a->ptr)[i]);
         }
 }
void setVal(struct myArray *a){
    int n;
  for (int i = 0; i < a->used_size; i++)
  {
    printf("Enter Element %d:",i);
    scanf("%d\n",&n);
    (a->ptr)[i]=n;
  }
  
}

void createArray(struct myArray * a, int tSize,int uSize)
{  
    // (*a).total_size = tSize;
    // (*a).used_size = uSize;
    // (*a).ptr = (int*) malloc(tSize*sizeof(int));
    a->total_size = tSize;
    a->used_size = uSize;// while introducing this method we must include stdlib.h
    a->ptr = (int*) malloc(tSize*sizeof(int));
};

int main(){
    struct myArray marks;
   createArray(&marks,20,10);
   show(&marks);
   setVal(&marks);
   
   return 0;
}
