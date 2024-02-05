#include <iostream>

using namespace std;


int main()
{
    int n=0;
    double sum,finalvector[3];
    bool a=false;
    //We define resultant vector of sum
    cout << "\nFind resultant torque in 3 dimensions (sum of torques/vectors in R3). (Part 2): " << endl;
    cout << "\nDefine number of torques to sum: ";
    cin >> n;
    double torques[n][3];
    //we can add all into a single matrix, where we operate just the columns
    cout << "----------------------------------------------------------------------+"<<endl;
    cout << "Enter data per vector: "<< endl;
    cout << "----------------------------------------------------------------------+"<<endl;
    for(int i = 0; i < n; i++){
    cout << "Vector " << i+1 << " :"<< endl;
    for(int j = 0; j < 3; j++){
        if(j==0){
            cout << "for i: ";
        }else if(j==1){
            cout << "for j: ";
        }else{
            cout << "for k: ";
        }
        //this will allow us to introduce the vectors we want
        cin >> torques[i][j];
        }
     cout << "----------------------------------------------------------------------+" << endl;
    }
    cout << "-----------------------------------------------------------------------+" << endl;
    for(int i = 0; i < n; i++){
        sum = 0;
        for(int j = 0;j < 3; j++){
            sum = sum + torques[j][i];      //adding each element of column
        }
        finalvector[i]=sum;
    }
    //this algorithm will operate each column that serves as a component of each vector

    cout << "\nFinal torque: "<< finalvector[0]<< " i, " << finalvector[1] << " j," << finalvector[2]<< " k. "<<endl;
    cout << "\n-------------------------------------------------------------------------------------------------+"<< endl;
    cout << "Do you want to continue with the program? (press 1 if you want to continue or 0 if you do not):"<< endl << endl;
    cin >> a;
    if(a==true){
        main();
    }else{
    cout << "-------------------------------------------------------------------------------------------------+"<< endl;
    cout << "\nThanks for using the program"<< endl;
    cout << "-------------------------------------------------------------------------------------------------+"<< endl;
    }

    return 0;

}
