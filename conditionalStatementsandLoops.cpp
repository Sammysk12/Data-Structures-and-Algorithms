#include<iostream>
using namespace std;

int main(){

    // int n =-23  ;

    // if(n>=0){
    //     cout << "n is positive" << endl;
    // }
    // else{
    //     cout << "n is negative" << endl;
    // }


    // int age;

    // cout<< "Enter age:" ;
    // cin >> age;

    // if(age >=18){
    //     cout<< "Yes! You can Vote !" << endl;
    // }else{
    //     cout<< "No! You can't Vote !" << endl;

    // }

    
    // char ch;

    // cout<< "Enter Character:" ;
    // cin >> ch;

    // if(ch >=65 && ch<=96){
    //     cout<< "UpperCase" << endl;
    // }else{
    //     cout<< "LowerCase" << endl;
 
    // }


    //Ternary Operator
//      int n;
//    cout<< "Enter number: ";
//    cin>> n;
   
//    cout<<(n>=0 ? "Positive": "Negative") << endl;
   
//Loops in C++
//while loop
// int n;
//    cout<< "Enter number: ";
//    cin>> n;
   
//    int count=1;
   
//    while(count<= n){
//        cout<< count << endl;
//        count++;
//    }



    //Calculate sum upto n
    // int n ;
    //  cout << "Enter Value: ";
    //  cin>>n;
     
    //  int i;
    //  int sum =0;
     
    //  for(i =1; i<=n; i++){
    //      sum+=i;
    //  }
    //  cout<< "The sum from 1 to " << n << " is "<< sum <<endl;


// int n ;
//      cout << "Enter Value: ";
//      cin>>n;
     
//      int i;
//      int sumOdd =0;
     
//      for(i =1; i<=n; i++){
//         if(i%2!=0){
//          sumOdd+=i;
//         }
//      }
//      cout<< "The sum of Odd nos from 1 to " << n << " is "<< sumOdd <<endl;



    // int n ;
    //  cout << "Enter Value: ";
    //  cin>>n;
     
    //  int i=1;
    //  int sumOdd =0;
     
    //  while(i<=n){
    //     if(i%2!=0){
    //      sumOdd+=i;
    //     }
    //     i++;
    //  }
    //  cout<< "The sum of Odd nos from 1 to " << n << " is "<< sumOdd <<endl;



//Check prime number or not

// int n ;
//      cout << "Enter Value: ";
//      cin>>n;
//      bool isPrime = true;
//      int i;
//      for(i =2; i<=(n-1); i++){
//         if(n%i==0){
//          isPrime = false;
//          break;
            
//         }
//     }
    
//     cout<< (isPrime?"Prime":"NonPrime")<<endl;


//HomeWork Qs on conditinal statements and loops
//Q.1

// int n, totalSum;
// cout<< "Enter Number: ";
// cin>>n;

// for(int i =1; i<=n; i++){
//     if(i%3 == 0){
//         totalSum +=i;
//     }
// }
// cout <<"The total of numbers upto " << n << " which are divisible by 3 is " << totalSum;



//Q.2
//Print Factorial of Number n
// int n, fact =1;
// cout<< "Enter Number: ";
// cin>>n;



// for(int i =1; i<=n; i++){
//     fact*=i;
// }
// cout <<"The fatorial of number " << n << " is " << fact;
    return 0;
}