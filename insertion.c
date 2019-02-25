#include<stdio.h>

int main ()

  {
      int c, n;

  printf("Generate random numbers in [1,1000000]\n");

  for (c = 1; c <= 5; c++) {
    n = rand() % 99999 + 1;
    printf("%d\n", n);
  }
{
    int data[10000],n,temp,i,j;
    printf("Enter number of terms: \n");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&data[i]);
    }
    for(i=1; i<n; i++)
    {
        temp=data[i];
        j=i-1;
        while(temp<data[j]&&j>=0)
        {
            data[j+1]=data[j];
            --j;
        }
        data [j+1]=temp;
    }
    printf("In ascending order: ");
    for(i=0; i<n; i++)
        printf("%d\t",data[i]);
         {
   int num;
   FILE *fptr;
   fptr = fopen("C:\\program.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");
      exit(1);
   }

   printf("Enter num: ");
   scanf("%d",&num);

   fprintf(fptr,"%d",num);
   fclose(fptr);


}
{
   int num;
   FILE *fptr;

   if ((fptr = fopen("C:\\program.txt","r")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }

   fscanf(fptr,"%d", &num);

   printf("Value of n=%d", num);
   fclose(fptr);


}

}
void insertionSort(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;

       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}


}
