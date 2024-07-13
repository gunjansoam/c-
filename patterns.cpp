#include<iostream>
using namespace std;
int main(){
    //Qs.print number pattern
//1111
//2222
//3333   
//4444

    // for(int i=1;i<=4;i++){
    //     for(int j=1;j<=4;j++){
    //         cout<<i;
    //     }
    //     cout<<endl;
    // }


//  Qs.print * pattern
// *
// **
// ***
// ****
// for(int i=1;i<=4;i++){ 
//     for(int j=1;j<=i;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
//Qs.inverted star pattern
// ****
// ***
// **
// *
// for(int i=1;i<=4;i++){
//     for(int j=1;j<=4-i+1;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// Qs. print half pyramid pattern.
// 1
// 12
// 123
// 1234
// for(int i=1;i<=4;i++){
//     for(int j=1;j<=i;j++){
//         cout<<j;
//     }
//     cout<<endl;
// }


//Qs. PRINT half pyramid with alphabet
// A
// AB
// ABC
// ABCD
// int n=4;
// char ch='A';
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         cout<<ch++;
//     }
//     cout<<endl;
// }

// Qs. print holllw rectangle
// *****
// *   *
// *   *
// *****
// int n=4;
// for(int i=1;i<=4;i++){
//     cout<<"*";
//     for(int j=1;j<=n-1;j++){
//         if(i==1 || i==n){
//             cout<<"*";
//         }else{
//             cout<<" ";
//         }
//     }
//     cout<<"*"<<endl;
// }

// Qs. inverted and rotated half pyramid
        //    *
        //   **
        //  ***
        // **** 
// int n=4;
// for(int i=1;i<=n;i++){
    
//     for(int j=1;j<=n-i;j++){
//         cout<<" ";
//     }
//     for(int j=1;j<=i;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }


// Qs.print floyd's triangle
// 1
// 23
// 456
// 78910
// int n=4;
// int num=1;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         cout<<num++<<" ";
//     }
//     cout<<endl;
// }


// Qs. print diamond pattern
        //    *
        //   ***
        //  *****
        // *******
        // *******
        //  ***** 
        //   ***
        //    *
int n=4;      
for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
    for(int j=1;j<=2*i-1;j++){
        cout<<"*";
    }
    cout<<endl;
}
for(int i=n; i>=1;i--){
    for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
    for(int j=1;j<=2*i-1;j++){
        cout<<"*";
    }
    cout<<endl;
}
    return 0;
}
