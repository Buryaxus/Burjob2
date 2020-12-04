
#include <iostream> 
using namespace std; 

const int n=5;  
const int m=5;  
void enterArr(double A[][m], int n, int m) 
{
    for(int i=0;i<n; i++)   
        for(int j=0;j<m; j++)  
    {
        cout << "A[" << i << "][" << j << "] = "; 
        cin >> A[i][j]; 
    }
}

void printArr(double A[][m], int n, int m) 
{
    for(int i=0;i<n; i++) 
    {
        for(int j=0;j<m; j++) 
    {
       
        cout.width(4);     
        cout << A[i][j]; 
    }
    cout << endl; 
    }
}

void searchmaxArr (double A[][m], int n, int m) 
{
    double max; 
    int imax=0, jmax=0; 
    
    max=A[imax][jmax]; 
    for(int i=0;i<n; i++)
        for(int j=0;j<m; j++)
        {
            if (i=j)
            {
                if (max<A[i][j]) 
                {
                   max = A[i][j]; 
                   imax=i;
                   jmax=j;
                }
            }
        }
        cout << "Наибольший элемент главной диагонали: " << max << endl; 
        cout << "Его координаты: " << imax+1 << ";" << jmax+1 << "." << endl;

void searchminArr (double A[][m], int n, int m)
{
    double min; 
    int imin=0, jmin=0; 
    min=A[imin][jmin]; 
    for(int i=0;i<n; i++) 
        for(int j=0;j<m; j++)
        {
            if (i=j)  
            {
                if (min>A[i][j]) 
                {
                   min = A[i][j];
                   imin=i;
                   jmin=j;
                }
            }
        }
        cout << "Наименьший элемент главной диагонали: " << min << endl;  
        cout << "Его координаты: " << imin+1 << ";" << jmin+1 << "." << endl;  
}

void sumArr (double A[][m], int n, int m)
{
    int P=0;  
     for(int i=0;i<n; i++) 
     {
         P=0;   
        for(int j=0;j<m; j++)
        {
           P+=A[i][j]; 
        }
        cout << "Сумма " << i+1 << " строки матрицы равна " << P << endl;  
     }
}
int main() //главная функция
{
    setlocale(LC_ALL, "russian"); 
    double A[n][m]; 
    
    cout << "Введите первый массив:" << endl;  
    enterArr(A,3,3);  
    printArr(A,3,3);   
    searchmaxArr(A,3,3); 
    searchminArr(A,3,3); 
    sumArr(A,3,3);    
    cout << "Введите второй массив:" << endl; 
    enterArr(A,4,4); 
    printArr(A,4,4);
    searchmaxArr(A,4,4);
    searchminArr(A,4,4);
    sumArr(A,4,4);
    cout << "Введите третий массив:" << endl; 
    enterArr(A,5,5);
    printArr(A,5,5);
    searchmaxArr(A,5,5);
    searchminArr(A,5,5);
    sumArr(A,5,5);
    return 0;
}
