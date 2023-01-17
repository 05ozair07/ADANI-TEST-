/******************************************************************************

                            NAME : OZAIR KHAN
                            ENROLL : 19104027
                            QUESTION : 1 and 2
                    

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;



// int colsort(int r, int c,)
// {


//   for (int i = 0; i < r; i++)
//   {
//     for (int j = 0; j < c; j++)
//     {
//       for (int k = 0; k < c - j - 1; k++)
//       {
//         if (a[i][k] > a[i][k + 1])
//         {
     
//           swap(a[i][k], a[i][k + 1]);
//         }
//       }
//     }
//   }

//   for (int i = 0; i < r; i++)
//   {
//     for (int j = 0; j < c; j++)
//       cout << a[i][j] << " ";
//     cout << endl;
//   }
//   return 0;
// }
 



int  arraydis(int r, int c){
    int arr[r][c];

    for (int i=0; i<r; i++)
        for (int j=0; j<c; j++)
            arr[i][j] = 1 + (rand() % 100); // HERE WE ARE GETTING ARRAY EKEMNTS RANDOMLY GENERATED B/w 0-100

    cout << "Rows in Random 2D ARRAY: " << r << " and Coloumns : " << c << endl;
    cout << "Random 2d array is " << endl;

    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++)
            cout << arr[i][j] << "  ";
        cout << endl;
    }
        //colsort(r,c,arr)

    return 0;   
}




int main(){
    srand(time(0)); 
/** we are getting random rows and coloumns here **/
    int r = 1 + (rand() % 10); 
    int c = 1 + (rand() % 10); 
    
    /** function call **/
    arraydis(r,c);
    return 0;
}