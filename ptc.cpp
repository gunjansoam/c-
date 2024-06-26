#include<iostream>
#include<math.h>
using namespace std;
int main(){
    // int num;
    // for(num=1; num<=10;num++){
    // cout<<num<<" ";
    // }
    // cout<<"last value of num "<< num;
    // cout<<endl;

    // #print apna college 

    // for(int i=1;i<=5;i++){
    //     cout<<"apna college"<<endl;
    // }
    // cout<<endl;
    //print numbers from 1 to 100
    // int num;
    // cout<<"enter a number ";
    // cin>>num;
    // for(int i=1;i<=num;i++){
    //     cout<<i<<endl;
    //print sum of n natural numbers
    // int num;
    
    // cout<<"enter a number ";
    // cin>>num;
    // int sum=0;
    // for(int i=1; i<=num; i++){
    //     sum+=i;
    //     cout<<i<<endl;
    // }
    //   cout<<"sum = "<<sum<<endl;

    //while loop
    // int i=1;
    // while(i<=5){
    //     cout<<i<<endl;
    //     i++;
    // }
    //take input from user
    // int n;
    // cout<<"enter the number ";
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //     cout<<i<<endl;
    //     i++;
    // }
// print apna college 5 times
// int i=1;
// while(i<5){
//     cout<<"apna college"<<endl;
//     i++;
// }
//sum of n natural numbers using while loop
// int num;
// cout<<"enter the number ";
// cin>>num;
// int sum=0;
// int i=1;
// while(i<num){
//     sum+=i;
//     cout<<i<<endl;
//     i++;
// }
// cout<<"the sum is "<<sum;
//print the square pattren using while loop
// for(int i=1;i<5;i++){
//     cout<<"*****"<<endl;
// }
//print numbers from n to 1 using for loop
// int n;
// cout<<"enter number:";
// cin>>n;
// for(int i=n; i>=1; i--){
// cout<<i<<endl;
// }
//print the sum of number using while loop.
// int n;
// cout<<"enter the value: ";
// cin>>n;
// int digsum=0;
// while(n>0){
//     int lastdig = n%10;
//     digsum+=lastdig;
//     n=n/10;

// }
// cout<<"the sum of number is "<<digsum<<endl;

//print the sum of odd digits using while loop
// int n;
// cout<<"enter the value ";
// cin>>n;
// int digsum=0;
// while(n>0){
//     int lastdig=n%10;
//     if(lastdig%2!=0){
//         digsum+=lastdig;
//     }
//     n=n/10;

// }
// cout<<"sum="<<digsum<<endl;
//print the given number in reverse order using while loop
// int n;
// cout<<"enter the number :";
// cin>>n;
// while(n>0){
//     int lastdig = n%10;
//     cout<<lastdig;
//     n=n/10;
// }
// reverse the given number and print the result
// int n;
// cout<<"enter the number :";
// cin>>n;
// int res = 0;
// while(n>0){
//     int lastdig=n%10;
//     res = res*10+lastdig;
//     n/=10;
// }
// cout<<"result is :"<<res;
//do while loop
// int i =1;
// do{
//     cout<<i<<" ";
//     i++;

// }while(i<=5);
// cout<<endl;
// using break 
// int i=1;
// while(i<=19){
//     if(i==10){
//         break;
//     }
//     cout<<i<<endl;
//     i++;
// }
// cout<<"out of the loop now"<<endl;
// write a program where user can keep entering numbers till they enetr a multiple of 10
// int i;
// do{
//     cout<<"enter a number:";
//     cin>>i;
//     if(i%10==0){
//         break;
//     }
//   cout<<"you enter "<<i<<endl;


// }while(true);
//continue statement
// for(int i=1;i<=10;i++){
//     if(i==4){
//         continue;
//     }
//     cout<<i<<endl;
// }
// int i;
// do{
//     cout<<"enter your number";
//     cin>>i;
//     if(i%10==0){
//         continue;
//     }
//     cout<<"you enter no: "<<i<<endl;

// }while(true);
// WAP to check number is prime or not
// int n;
// cout<<"enter the number :";
// cin>>n;
// bool isprime=true;
// for(int i=2;i<=n-1;i++){
//     if(n%i==0){
//         isprime=false;
//         break;
//     }
// }
// if (isprime){
//     cout<<"number is prime"<<endl;
// }else{
//     cout<<"number is not prime"<<endl;
// }
//factorial of a number
// int i,n;
// int fact=1;
// cout<<"enter a number :";
// cin>>n;
// for(i=1;i<=n;i++){
//     fact*=i;
// }
// cout<<"the factorial of number is : "<<fact;
// WAP to print the multiplication table of a number enter by the user
// int num,i;
// cout<<"enter the number";
// cin>>num;
// for( i=1;i<=10;i++){
//     cout<<num<<"*"<<i<<"="<<(num*i)<<endl;
// }
// cout<<endl;
//wap to check armstrong number
// int n;
// cout<<"enter a number";
// cin>>n;
// int sum=0;
// int org_n = n;
// while(n>0){
//     int lastdig = n%10;
//     sum+=pow(lastdig,3);
//     n=n/10;
// }

// if(sum==org_n){
//     cout<<"number is armstrong"<<endl;
// }
// else{
//     cout<<"number is not armstrong"<<endl;
// }

// Qs. wap to write all prime numbers from 2 to n
int n;
cout<<"enter a number";
cin>>n;


for(int x=2;x<=n-1;x++) {
    if(n%x==0);{
        
    }
}




    return 0;

}