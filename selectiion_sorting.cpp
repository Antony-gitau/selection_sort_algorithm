#include<iostream>
using namespace std;

void selectionsorting(int arry[],int num){ //function selection sort
    for (int i=0;i<num-1; i++){ //iterate through all the elements in the array
        int imin = i;
        
        for (int j=i+1;j<num;j++){ //iterate again comparing the values to identify the least values
            if (arry[j] <arry[imin]){
                imin = j;
            }
            // swap the minimum values
        int temp = arry[i];
        arry[i]=arry[imin];
        arry[imin] = temp;
        }
        
    }
}

int main(){
int arry[]={2,5,7,3,1,8,9,5,9};
selectionsorting(arry,9);

// print the sorted array
for (int i = 0;i<7;i++){
    cout<<arry[i]<<" ";
}
}