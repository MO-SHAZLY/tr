int* sort_arr(int* arr, int size)

{

    int i=0,j,temp;



    for(int i=0;i<size;i++)

    {

        for(int j=i;i<size-1;i++)

        {

            if(arr[j]>arr[j+1])

            {

                temp =arr[j];

                arr[j]=arr[j+1];

                arr[j+1]=temp;

            }

        }

    }

}



int main()

{

    int arr[]={2,6,8,3,1,5,4,7};

    int size=sizeof(size)/sizeof(arr[0]);



    sort_arr(arr,size);

    for(int i=0;i<size;i++)

    {

        cout<<"sorting_arr= "<<arr[i];

    }

    cout<<"done";

}
