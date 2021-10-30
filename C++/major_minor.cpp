#include<iostream>
using namespace std;
int main ()
{
        static int arr[10][10];
        int i, j, rows, cols, a = 0, sum = 0;

        cout<<"\n Enter Rows of the Matrix   : ";
        cin>>rows;
        cout<<"\n Enter Columns of the Matix : ";
        cin>>cols;
        if (rows == cols )
        {
                cout<<"\n Enter the Elements of the Matrix : \n\n";      
                for (i = 0; i < rows; ++i)
                {
                        for (j = 0; j < cols; ++j)
                        {
                                cout<<" ";
                                cin>>arr[i][j];
                        }
                }        
                cout<<"\n Matrix is : \n";   
                for (i = 0; i < rows; ++i)
                {
                        cout<<" ";
                        for (j = 0; j < cols; ++j)
                        {
                                cout<<" ";
                                cout<<arr[i][j];
                        }        
                        cout<<"\n";
                }        
                cout<<"\n Major Diagonal Elements : ";  
                for(i=0; i< rows ; i++)
                {
                         cout<<" ";
                         cout<<arr[i][i];
                }
                cout<<"\n Minor Diagonal Elements : ";  
                for(i=0; i< rows; i++)
                {
                         cout<<" ";
                         cout<<arr[i][rows - i - 1];
                }
                for (i = 0; i < rows; ++i)   
                {
                        sum = sum + arr[i][i];
                        a = a + arr[i][rows - i - 1];
                }
                cout<<"\n";
                cout<<"\n Sum of Major Diagonal Elements : "<<sum;
                cout<<"\n Sum of Minor Diagonal Elements : "<<a;
        }
        else
                cout<<"\n It is Not a Square Matrix";
}
