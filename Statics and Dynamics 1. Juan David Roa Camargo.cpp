
#include <iostream>
#include <math.h>
//we add the library to use trig. funtions
using namespace std;

int main()
{
    double ab,bc,be,ed,df,m,l1,l2,h1,h2,angle1,angle2,angle3,angle4,relationT1,gravity,weight,tention2,tention1,tention3;
//We set double variables to know decimals and be more precise
    cout << "\nWorkshop #1: Particle with 3 tentions in 3 dimensions"<< endl;
    cout << "Objective: Find tention 3"<<endl;
    cout << "----------------------------------------------------------------"<< endl<<endl;
    cout << "Define values for particle coordinates:";
    //here we set the characteristics of the system
    cout << "Please insert distance between A and B: ";
    while(!(cin>>ab)){
        cout << "Error: Enter a valid distance: ";
        cin.clear();
        cin.ignore(124,'\n');
    };
    system("cls");
    cout << "\nPlease insert distance between B and C: ";
    while(!(cin>>bc)){
        cout << "Error: Enter a valid distance: ";
        cin.clear();
        cin.ignore(124,'\n');
    };
    system("cls");
    cout << "Please insert distance between B and E: ";
    while(!(cin>>be)){
        cout << "Error: Enter a valid distance: ";
        cin.clear();
        cin.ignore(124,'\n');
    };
    system("cls");
    cout << "Please insert distance between E and D: ";
    while(!(cin>>ed)){
        cout << "Error: Enter a valid distance: ";
        cin.clear();
        cin.ignore(124,'\n');
    };
    system("cls");
    cout << "Please insert distance between D and F: ";
    while(!(cin>>df)){
        cout << "Error: Enter a valid distance: ";
        cin.clear();
        cin.ignore(124,'\n');
    };
    system("cls");
    cout << "Please insert mass of the particle (kg): ";
    while(!(cin>>m)){
        cout << "Error: Enter a valid mass input: ";
        cin.clear();
        cin.ignore(124,'\n');
    };
    system("cls");
    cout << "\nDefine gravity (m/s2): ";
    while(!(cin>>gravity)){
        cout << "Error: Enter a valid gravity value: ";
        cin.clear();
        cin.ignore(124,'\n');
    };
    system("cls");

    //as we want it to be as general as possible, we also ask for the gravity
    cout << "\n---------------------------------------------------------------" << endl<< endl;
    //we apply the geometry defined by the coordinated system
    l1 = sqrt(pow((be-df),2)+pow((ab),2)+pow((ed),2));
    l2 = sqrt(pow((be-df),2)+pow((bc),2)+pow((ed),2));
    angle1=asin((be-df)/l1);
    h1 = l1*cos(angle1);
    angle2=asin((ed)/h1);
    angle3=asin((be-df)/l2);
    h2 = l2*cos(angle3);
    angle4=asin((ed)/h2);
    //cout << l1 <<endl <<l2 <<endl << angle1 << endl <<angle2 << endl << angle3 << endl<< angle4;
    //to see angles and distances (angles in radians)

    relationT1= (cos(angle3)*cos(angle4))/(cos(angle1)*cos(angle2));
    weight = m*gravity;
    //here we define the basic interactions between variables, in a system of equations this would be the same procedure to solve it
    //cout << weight <<endl<<relationT1<<endl;
    //you can see the weight and T2T1 relation
    tention2=(weight)/((relationT1*sin(angle1))+sin(angle3));
    tention1=(tention2*relationT1);
    tention3=(tention1*cos(angle1)*sin(angle2))+(tention2*cos(angle3)*sin(angle4));
    //we finally calculate the components based on the directions given by the geometry

    cout << "\nThe Tention 1 is: " << tention1;
    cout << "\nThe Tention 2 is: " << tention2;
    cout << "\nThe Tention 3 is: " << tention3;
    //the solution for all the unknows is displayed then

}







