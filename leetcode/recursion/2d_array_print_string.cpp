#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
    char array[][9]={
        {'5','3','1','2','7','6','9','4','8'},
        {'6','4','7','1','9','5','8','3','2'},
        {'2','9','8','5','3','7','1','6','4'},
        {'8','1','9','7','6','2','4','5','3'},
        {'4','7','2','8','5','3','6','9','1'},
        {'7','5','4','9','2','8','3','1','6'},
        {'9','6','5','3','4','1','2','8','7'},
        {'3','8','6','4','1','9','7','2','5'},
        {'1','2','3','6','8','4','5','7','9'}
        };
    
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
