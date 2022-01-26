void Linear_search(int a[],int searchvalue,int size)
{   
    int index;
    int store;
    for(int i=0;i<size;i++)
    {
        if(a[i]==searchvalue)
        {
            store=a[i];
            index=i;
            break;
        }
    }
    printf("Element %d Found at index No. %d",store,index);
}
int main()
{
    int size,searchvalue,a[100];
    printf("Enter the Size of array\n");
    scanf("%d",&size);
    printf("\nEnter the elemnts in array=\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the element For Search=\n");
    scanf("%d",&searchvalue);
    Linear_search(a,searchvalue,size);
    
}
