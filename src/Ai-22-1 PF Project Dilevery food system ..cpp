#include <iostream>
#include <thread>//provides support for multithreading
#include <chrono>//provides time-related types and functions, such as "sleep_for"
#include <string>
using namespace std;

void sleep_for(unsigned int milliseconds)
{
    this_thread::sleep_for( chrono::milliseconds(milliseconds));
//makes the current thread to sleep for the specified number of milliseconds,so that the program does not exit before the thread completes its execution.
    
}

struct Card {
    int number;
    int cvv;
    double balance;
} cards[10];//Create ten cards to store information
int j=10;
void payCash(int total_price);//This function is to end the payment process by cash
string address();//This function takes the address of the client
int kfc();//This function displays the KFC menu
int mcdonalds();//This function displays the McDonald's menu
int pizzaHut();//This function displays the pizzahut menu
void payCard(int total_price);//This function is to end the payment process by card

int main() {
    int choice;
	cout << "   Please choose a restaurant:   " << endl;
	cout << "********************************* " << endl;
    cout << "*          1. KFC               *" << endl;
    cout << "*          2. McDonald's        *" << endl;
    cout << "*          3. Pizza Hut         *" << endl;
	cout << "*********************************" << endl;
	cout << "*         Enter 4 To Exit       *" << endl;
	cout << "*********************************" << endl;

    cin >> choice;
    cout << " your request is being procesed please wait";
    cout << ".";
    sleep_for(500);//to pause or "sleep" for 500 milliseconds before continuing to execute.
    cout << ".";
    sleep_for(500);
    cout << ".";
    sleep_for(2000);
    system("cls");//To clean the screen from speech
    cout << ".";
    sleep_for(500);
    cout << ".";
    sleep_for(500);
    cout << ".";
    system("cls");
    sleep_for(500);
    cout << ".";
    sleep_for(500);
    cout << ".";
    sleep_for(500);
    cout << ".";
    system("cls");
    if (choice==1) {
        
            int total_price = kfc();//to store the return value
            int paymentMethod;
			if(total_price==0)//if the return (total_price) value = 0 exit 
			{
				return 0;
			}
            cout << "Please choose a payment method: " << endl;
            cout << "1. Card" << endl;
            cout << "2. Cash" << endl;
            
            cin >> paymentMethod;
            if (paymentMethod == 1) {
                payCard(total_price);
            }
			else if (paymentMethod == 2) 
            {
        		payCash(total_price);
        	}
        
		
		 else 
            {
            	cout << " invalid payment method "<<endl;
			}
			
	}
       else if (choice==2)
             {
            int total_price = mcdonalds();
            int paymentMethod;
			if(total_price==0)
			{
				return 0;
			}
            cout << "Please choose a payment method: " << endl;
            cout << "1. Card" << endl;
            cout << "2. Cash" << endl;
            cin >> paymentMethod;
            if (paymentMethod == 1) {
                payCard(total_price);

            }
			else if (paymentMethod == 2) 
            {
        		payCash(total_price);

        	}
        
		
		 else 
            {
            	cout << " invalid payment method "<<endl;
        
			}
        }
         else if(choice==3)
             {
            int total_price =pizzaHut();
            int paymentMethod;
            
			if(total_price==0)
			{
				return 0;
			}
            cout << "Please choose a payment method: " << endl;
            cout << "1. Card" << endl;
            cout << "2. Cash" << endl;
            cin >> paymentMethod;
            if (paymentMethod == 1) {
                payCard(total_price);
            }
			else if (paymentMethod == 2) 
            {
            	
				payCash(total_price);
                      
            
        }
        
		
		 else 
            {
            	cout << " invalid payment method "<<endl;
            	
			}
    }
            
         else if(choice==4){
        	return 0;
		}
            
        else{
        	            cout << "Invalid choice" << endl;

		}
    
}

int kfc() {
    int item, q=0, price = 0, total_price = 0;bool bol=true;
    cout << "****************KFC MENU*****************" << endl;
    cout << "* item 1: Zinger                  Rs500 *" << endl;
    cout << "* item 2: Fried Chicken           Rs450 *" << endl;
    cout << "* item 3: Popcorn Chicken         Rs400 *" << endl;
    cout << "* item 4: Hot Wings               Rs550 *" << endl;
    cout << "* item 5: Wrap                    Rs600 *" << endl;
    cout << "* item 6: Bucket                  Rs650 *" << endl;
    cout << "*****************************************" << endl;
	cout << "*          Enter 7 to Checkout          *" << endl;
	cout << "*****************************************" << endl;
	    cout << "Enter the item number: ";int i=0;
while(bol){
	if (i!=0)//to run it in next loop
    cout << "\nOrder more, please : ";
    cin >> item;
    i++;
    if (item == 1) { 
	       price = 500;
        cout << " Price: Rs" << price << endl;
        cout << " Quantity of Zinger: ";
        cin >> q;

total_price += (price*q);
}
else if (item == 2) {
	price = 450 ;
cout << " Price: Rs" << price << endl;
cout << " Quantity of Fried Chicken: ";
cin >> q;

total_price += (price*q);
}
else if (item == 3) {

price = 400 ;
cout << " Price: Rs" << price << endl;
cout << " Quantity of Popcorn Chicken: ";
cin >> q;
total_price += (price*q);
}
else if (item == 4) {

price = 550;
cout << " Price: Rs" << price << endl;
cout << " Quantity of Hot Wings: ";
cin >> q;
total_price += (price*q);
}
else if (item == 5) {

price = 600 ;
cout << " Price: Rs" << price << endl;
cout << " Quantity of Wrap: ";
cin >> q;
total_price += (price*q);
}
else if (item == 6) {

price = 650;
cout << " Price: Rs" << price << endl;
cout << " Quantity of Bucket: ";
cin >> q;
total_price += (price*q);
}
else if (item==7)
{
	if(total_price==0){
			cout<<"You did not order any thing .\nDo you want to order ??\n ";
	            cout <<"*********************************\n";
                cout <<"**   1. Yes                    **\n";
            	cout <<"**   2. No                     **\n";
                cout <<"*********************************\n";
                int choose;
                	if (choose==1)
                	{
					bol=true;
					}
                	else if (choose==2){
                	return 0;	
					}
								}
else{	bol=false;

}
}
else{
	    cout << ".";
    sleep_for(500);
    cout << ".";
    sleep_for(500);
    cout << ".";
    sleep_for(2000);
    system("cls");
    cout << ".";
    sleep_for(500);
    cout << ".";
    sleep_for(500);
    cout << ".";
    system("cls");
    sleep_for(500);
    cout << ".";
    sleep_for(500);
    cout << ".";
    sleep_for(500);
    cout << ".";
    system("cls");
    cout << "\t***Invalid choice***" << endl;
	return 0 ;
	
}
}
cout << "Total price: Rs" << total_price << endl;
return total_price;
}

int mcdonalds() {
int item, q=0, price = 0, total_price=0 ;bool bol=true;
cout << "*************MCDONALD'S MENU*************" << endl;
cout << "*       item 1: Big Mac          Rs450  *" << endl;
cout << "*       item 2: McChicken        Rs400  *" << endl;
cout << "*       item 3: McVeggie         Rs350  *" << endl;
cout << "*       item 4: McSpicy          Rs450  *" << endl;
cout << "*       item 5: McAloo           Rs350  *" << endl;
cout << "*       item 6: McEgg            Rs250  *" << endl;
cout << "*****************************************" << endl;
cout << "*            Enter 7 to Checkout        *" << endl;
cout << "*****************************************" << endl;
cout << "Enter the item number: ";int i=0;
while(bol)
{
	if (i!=0)//it will run it in next loop
    cout << "\nOrder more, please : ";
    cin >> item;
    i++;
if (item == 1) {

price = 450;
cout << " Price: Rs" << price << endl;
cout << " Quantity of Big Mac: ";
cin >> q;
total_price += (price*q);
}
else if (item == 2) {

price = 400 ;
cout << " Price: Rs" << price << endl;
cout << " Quantity of McChicken: ";
cin >> q;
total_price += (price*q);
}
else if (item == 3) {

price = 350;
cout << " Price: Rs" << price << endl;
cout << " Quantity of McVeggie: ";
cin >> q;
total_price += (price*q);
}
else if (item == 4) {

price = 450;
cout << " Price: Rs" << price << endl;
cout << " Quantity of McSpicy: ";
cin >> q;
total_price += (price*q);
}
else if (item == 5) {

price = 350;
cout << " Price: Rs" << price << endl;
cout << " Quantity of McAloo: ";
cin >> q;
total_price += (price*q);
}
else if (item == 6) {

price = 250;
cout << " Price: Rs" << price << endl;
cout << " Quantity of McEgg: ";
cin >> q;
total_price += (price*q);
}
else if (item==7)
{
	if(total_price==0){
			cout<<"You did not order any thing .\nDo you want to order ??\n ";
	            cout <<"*********************************\n";
                cout <<"**   1. Yes                    **\n";
            	cout <<"**   2. No                     **\n";
                cout <<"*********************************\n";
                int choose;
                	if (choose==1)
                	{
					bol=true;
					}
                	else if (choose==2){
                	return 0;	
					}
								}
else{	bol=false;

}
}

else{
	    cout << ".";
    sleep_for(500);
    cout << ".";
    sleep_for(500);
    cout << ".";
    sleep_for(2000);
    system("cls");
    cout << ".";
    sleep_for(500);
    cout << ".";
    sleep_for(500);
    cout << ".";
    system("cls");
    sleep_for(500);
    cout << ".";
    sleep_for(500);
    cout << ".";
    sleep_for(500);
    cout << ".";
    system("cls");
    cout << "***Invalid choice***" << endl;
    return 0;
	

}
}
cout << "Total price: Rs" << total_price << endl;
return total_price;
}

int pizzaHut() {
int item, q=0, price = 0, total_price = 0;bool bol=true;
cout << "************PIZZA HUT MENU***************" << endl;
cout << "* item 1: Margherita              Rs300 *" << endl;
cout << "* item 2: Pepperoni               Rs350 *" << endl;
cout << "* item 3: Veggie Delight          Rs400 *" << endl;
cout << "* item 4: Farmhouse               Rs450 *" << endl;
cout << "* item 5: BBQ Chicken             Rs500 *" << endl;
cout << "* item 6: Chicken Tikka           Rs550 *" << endl;
cout << "*****************************************" << endl;
cout << "*            Enter 7 to Checkout        *" << endl;
cout << "*****************************************" << endl;
cout << "Enter the item number: ";int i=0;
while(bol){
	if (i!=0)//it will run it in next loop
    cout << "\nOrder more, please : ";
    cin >> item;
    i++;
if (item == 1) {

price = 300 ;
cout << " Price: Rs" << price << endl;
cout << " Quantity of Margherita: ";
cin >> q;
total_price += (price*q);
}
else if (item == 2) {

price = 350 ;
cout << " Price: Rs" << price << endl;
cout << " Quantity of Pepperoni: ";
cin >> q;
total_price += (price*q);
}
else if (item == 3) {

price = 400;
cout << " Price: Rs" << price << endl;
cout << " Quantity of Veggie Delight: ";
cin >> q;
total_price += (price*q);
}
else if (item == 4) {

price = 450;
cout << " Price: Rs" << price << endl;
cout << " Quantity of Farmhouse: ";
cin >> q;
total_price += (price*q);
}
else if (item == 5) {

price = 500;
cout << " Price: Rs" << price << endl;
cout << " Quantity of BBQ Chicken: ";
cin >> q;
total_price += (price*q);
}
else if (item == 6) {

price = 550;
cout << " Price: Rs" << price << endl;
cout << " Quantity of Chicken Tikka: ";
cin >> q;
total_price += (price*q);
}
else if (item==7)
{
	if(total_price==0){
			cout<<"You did not order any thing .\nDo you want to order ??\n ";
	            cout <<"*********************************\n";
                cout <<"**   1. Yes                    **\n";
            	cout <<"**   2. No                     **\n";
                cout <<"*********************************\n";
                int choose;
    if (choose==1)
                	{
					bol=true;
					}
                	else if (choose==2){
                	return 0;	
					}
								}
else{	bol=false;

}
}
else{
	    cout << ".";
    sleep_for(500);
    cout << ".";
    sleep_for(500);
    cout << ".";
    sleep_for(2000);
    system("cls");
    cout << ".";
    sleep_for(500);
    cout << ".";
    sleep_for(500);
    cout << ".";
    system("cls");
    sleep_for(500);
    cout << ".";
    sleep_for(500);
    cout << ".";
    sleep_for(500);
    cout << ".";
    system("cls");
    cout << "***Invalid choice***" << endl;
    return 0;
	

}
}
cout << "Total price: Rs" << total_price << endl;
return total_price;
}

string address()
{
string address1;
cout << "\n\nEnter your delivery address: ";
	cin.ignore();
	getline(cin, address1);
	return address1; 
	}
	
	
	
	void payCard(int total_price) {
    int num, cvv, remaining_balance;
    int choise;
    int index = -1;
	for (int i = 0; i < 10; i++) {//Generate 10 cards with random balance ,cards code from 1001-1010
        cards[i].number = i + 1001;
        cards[i].cvv = i+1001;
        cards[i].balance = (i+1)*1000;
    }
    while (true) {
        cout << "Enter your card number: ";
        cin >> num;
        cout << "Enter your CVV: ";
        cin >> cvv;

        // Check if entered card and CVV match
        for (int i = 0; i < j; i++) {
            if (num == cards[i].number && cvv == cards[i].cvv) {
                index = i;//i=0 , index =0 so break the loop
                break;
            }
        }

        if (index != -1) {//if index != i it will not run
            cout << "\n Your card balance is: Rs " << cards[index].balance << endl;
                            sleep_for(2000);
                            system("cls");
                            cout << ".";
                            sleep_for(500);
                            cout << ".";
                            sleep_for(500);
                            cout << ".";
                            system("cls");
            if (cards[index].balance < total_price) {
            	sleep_for(2000);
                            system("cls");
                            cout << ".";
                            sleep_for(500);
                            cout << ".";
                            sleep_for(500);
                            cout << ".";
                            system("cls");
                cout << "\n Insufficient funds!" << endl;
                cout <<"*********************************\n";
                cout <<"**   1. Try another code       **\n";
            	cout <<"**   2. Exit                   **\n";
                cout <<"*********************************\n";
				cin>>choise;
				if(choise==1)
				{
				continue;					
				}
				else if(choise==2)
				{
								break;	
				}
				else
				{
				cout<<"Incorrect option, will close the program";
												break;	
				}	
            }
			 else {		
			 sleep_for(2000);
                            system("cls");
                            cout << ".";
                            sleep_for(500);
                            cout << ".";
                            sleep_for(500);
                            cout << ".";
                            system("cls");
			 	 	cout << "Transaction successful."<<endl;
			 	              string address1=address();

                remaining_balance = cards[index].balance - total_price;
                cout << "your invoice is printing please wait"<<endl;
                        	sleep_for(2000);
                            system("cls");
                            cout << ".";
                            sleep_for(500);
                            cout << ".";
                            sleep_for(500);
                            cout << ".";
                            system("cls");
                            sleep_for(500);
                            cout << ".";
                            sleep_for(500);
                            cout << ".";
                            sleep_for(500);
                            cout << ".";
                            system("cls");
                        	cout << "Your invoice is printed "<<endl;
                        
                        cout << "\n*************Invoice:*************\n" << endl;
                        cout << "    You card number :    "<<num<<endl;                        
                        cout << "    subtotal        : RS "<<total_price<<endl;
                        cout << "    Card balance now: Rs " << remaining_balance<<endl;
                        cout << "    Address: "<<address1<<endl<<endl; 
                        cout << "      PLEASE VISIT AGAIN !!   "<<endl;
                        cout << "**********************************"<<endl;
                cards[index].balance = remaining_balance;
                total_price = 0;
                break;
            }
        } else {
        	     system("cls");
                            cout << ".";
                            sleep_for(500);
                            cout << ".";
                            sleep_for(500);
                            cout << ".";
                            system("cls");            
							cout << "\n Invalid card or CVV.\n ";
                cout <<"*********************************\n";
                cout <<"**   1. Try another code       **\n";
            	cout <<"**   2. Exit                   **\n";
                cout <<"*********************************\n";
				cin>>choise;
				if(choise==1)
				{
				continue;					
				}
				else if(choise==2)
				{
								break;	
				}
				else
				{
				cout<<"Incorrect option, will close the program";
												break;	
				}

        }
    }
}
	
	
	
void payCash(int total_price)
{
	while(true){
		int cash,change,choise;
		  cout << "Enter cash amount: ";
                        cin >> cash;
                        if (cash < total_price) {
                        	
                           	sleep_for(2000);
                            system("cls");
                            cout << ".";
                            sleep_for(500);
                            cout << ".";
                            sleep_for(500);
                            cout << ".";
                            system("cls");
                cout << "\n Insufficient funds!" << endl;
                cout <<"*********************************\n";
                cout <<"**   1. Pay again              **\n";
            	cout <<"**   2. Exit                   **\n";
                cout <<"*********************************\n";
				cin>>choise;
				if(choise==1)
				{
				continue;					
				}
				else if(choise==2)
				{
								break;	
				}
				else
				{
				cout<<"Incorrect option, will close the program";
												break;	
				}
                        
                        }
                        else
                        {
                        	sleep_for(2000);
                            system("cls");
                            cout << ".";
                            sleep_for(500);
                            cout << ".";
                            sleep_for(500);
                            cout << ".";
                            system("cls");
                       		 cout << "Payment successful."<<endl;
                        	string address1=address();
                        	change = cash - total_price;
                        	cout << "your invoice is printing please wait "<<endl;
                        	sleep_for(2000);
                            system("cls");
                            cout << ".";
                            sleep_for(500);
                            cout << ".";
                            sleep_for(500);
                            cout << ".";
                            system("cls");
                            sleep_for(500);
                            cout << ".";
                            sleep_for(500);
                            cout << ".";
                            sleep_for(500);
                            cout << ".";
                            system("cls");
                        	cout << "your invoice is printed "<<endl;
                        cout << "\n*************Invoice:*************\n" << endl;
                        cout << "    subtotal          : RS "<<total_price<<endl;
                        cout << "    Payed by customer : RS "<<cash<<endl;
                        cout << "    Your cahnge       : Rs " <<change<<endl<<endl;
                        cout << " Address: "<<address1<<endl<<endl; 
                        cout << "      PLEASE VISIT AGAIN !!   "<<endl;
                        cout << "********************************"<<endl;
                        total_price = 0;
                        break;
                        
                    }
}


}