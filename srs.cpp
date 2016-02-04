#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char cont;
    string website, username, password;
    ofstream outFile("registrations.txt", ios::app);
    //ofstream outFile("registrations.txt", ios::out);
    
    
    if(!outFile){
        ofstream outFile("registrations.txt", ios::out);
        cout << "Created File." << endl;
        //exit(1);
    }
    
    
    do{
        cout << "Website: ";
        cin >> website;
        
        cout << "Username: ";
        cin >> username;
        
        cout << "Password: ";
        cin >> password;
        
        outFile << website  << endl;
        outFile << username << endl;
        outFile << password << endl;
        outFile << endl;
            
        cout << "Enter another data?(Y/n): ";
        cin >> cont;
    }while(toupper(cont) == 'Y');
    
    outFile.close();
    cout << "All written.." << endl;
    
    return 0;
}
