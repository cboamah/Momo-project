#include <iostream>
using namespace std;

int main() {
    int balance = 1000;
    string pin = "0000";
    int numAttempts = 0;
    
    while (true) {
        // Authentication
        string enteredPin;
        cout << "Enter mobile money pin: ";
        cin >> enteredPin;
        if (enteredPin != pin) {
            numAttempts++;
            if (numAttempts >= 3) {
                cout << "Too many wrong attempts. Exiting program." << endl;
                return 0;
            }
           cout << "Incorrect pin. Please try again." << endl;
            continue;
        }
        numAttempts = 0; 
        
        // Menu
        cout << "Select an option:" << endl;
        cout << "1. Reset mobile money pin" << endl;
        cout << "2. Check balance" << endl;
        cout << "3. Send money" << endl;
        cout << "4. Exit" << endl;
        int option;
        cin >> option;
        
        /*Option 1: Reset pin*/
        if (option == 1) {
        	string enteredpin,EnteredPin;
        	cout<<"Enter current pin: ";
        	cin>>enteredpin;
        	if(enteredpin==pin){cout << "Enter new Pin: ";
            cin >>EnteredPin;
            cout << "Pin reset successful." << endl;return 0; }
			 else{cout<<"Incorrect pin. Exiting."<<endl;return 0;}  }
        
        //Option 2: Check balance
         if (option == 2) {
		 string Entpin;
		 cout<<"Enter MOMO pin: ";
        cin>>Entpin;
        if(Entpin==pin){cout<<"Charged fee is Ghs 0.00"<<endl;
        cout << "Current balance is Ghs " << balance << endl;return 0;
        }
        else{cout<<"Incorrect MOMO pin. EXiting."<<endl;return 0;
		}}
        
        /*Option 3: Send money*/
        else if (option == 3) {
        string reference,number,ent_pin;
         float amount;
        cout<<"Enter receipients number: ";
        cin>>number;
         cout << "Enter amount to send: ";
         cin >> amount;
         if (amount > balance) {cout << "Insufficient balance. Exiting" << endl;return 0;} 
		else {cout<<"Enter reference: "; cin>>reference;
		cout<<"Enter MOMO pin to complete transaction: ";
		cin>>ent_pin;
		if(ent_pin==pin){ 
        cout <<"Transaction successful. You have successfully sent Ghs " <<amount<< " to "<< number<< "."<<endl;
        cout<<"Reference is "<<reference<<"."<<endl;
		cout<<"New balance is Ghs "<<balance-amount<<"."<< endl;
    	 return 0; }
		 else{cout<<"Wrong pin. Exiting."<<endl;return 0;
		 }}}
        
        // Option 4: Exit
        if (option == 4) {
            cout << "System exiting." << endl;
            return 0;
        }
        
        /*Invalid option*/
        else {
            cout << "Invalid option. Follow the process and choose from option 1 to 4." << endl;
        }
    }}

