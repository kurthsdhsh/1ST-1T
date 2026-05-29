#include <iostream>
#include <cctype>
#include <fstream>
#include <math.h>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;
	
	void logo ();
	void logo_exit ();
	void menu0 ();
	void menu1 ();
	void menu2 ();
	void menu3 ();
	void shortlogo ();
	void admincentre ();
	void logo_exit1 ();
		
int main () {
char sagot, promo;
int month, choice, year, tao;
string monthName, promoName, provName, paymentmod;
double total = 0, payment = 0, change = 0;
 system("color 0A"); 
	cout << "\n\t\t  \033[1;32m-|-\033[0m                       \033[1;34m-====-\033[0m                   \033[1;34m-|-\033[0m        ";
	cout << "\n\t\t                         \033[1;34m..%@@@@@@%..\033[0m                           ";
	cout << "\n\t\t        \033[1;31m-|-\033[0m              \033[1;34m.@@=.  .=@@.\033[0m      \033[1;31m-|-\033[0m                  ";
	cout << "\n\t\t                         \033[1;34m.@@+.  .+@@.\033[0m                           ";
    cout << "\n\t\t                         \033[1;34m..#@@@@@@%..\033[0m               \033[1;33m-|-\033[0m        ";             
    cout << "\n\t\t                 \033[1;32m-|-\033[0m        \033[1;34m:#@@#:\033[0m                              ";                  
    cout << "\n\t\t      \033[1;34m-|-\033[0m             \033[1;34m.=@@---#@@#---@@=.\033[0m                        ";          
    cout << "\n\t\t                      \033[1;34m:@@@@@@@@@@@@@@@@:\033[0m       \033[1;32m-|-\033[0m              ";            
    cout << "\n\t\t    \033[1;33m-|-\033[0m                \033[1;34m.=-.  *@@*   -=.\033[0m                     \033[1;33m-|-\033[0m "; 
	cout << "\n\t\t                             \033[1;34m*@@*\033[0m                               ";
    cout << "\n\t\t                             \033[1;34m*@@*\033[0m                               ";
	cout << "\n\t\t================================================================";
	cout << "\n\t\t|                \033[1;33mMABUHAY, MALIGAYANG PAGDATING\033[0m                 |";
	cout << "\n\t\t================================================================";	
	cout << "\n\t\t================================================================";
	cout << "\n\t\t|                 \033[1;33mWeclome to Bon Voyage a Dee\033[0m                  |";
	cout << "\n\t\t================================================================";
	cout << "\n\t\t\033[1;34m              .@@@=....      *@@*       ...-@@@.                ";    
    cout << "\n\t\t              .@-@@%#+      #@@@@#      +#%@@-@.                ";
	cout << "\n\t\t              .%. *@@@@%:::%@@@@@@@:::%@@@@* .%.                ";    
    cout << "\n\t\t                   .=@@@@@@@@@++@@@@@@@@@+.                     ";       
    cout << "\n\t\t                      .-=@@@@%--%@@@@=-.                        ";          
    cout << "\n\t\t                           #@@@@@@#                             ";
    cout << "\n\t\t                            .*@@*.                              ";
    cout << "\n\t\t                              --                                \033[0m";
    cout << "\n\n";
    
	// to add system login user and admin, ifstring=openfile (accomplised)
	
	cout << "\n\t\t================================================================";
	cout << "\n\t\t|                        WHO IS USING?                         |";
	cout << "\n\t\t|        [0]Costumer                        [1]Admin           |"; 
	cout << "\n\t\t================================================================";
	string sinoka; int attempts = 0;
	cout << "\n\t\t Entry: ";
	cin >> sinoka;
	
	while ((sinoka != "0" && sinoka != "1") && attempts < 3) {
		attempts++;
		system ("cls");
    cout << "\n\t\t\033[31mInvalid Entry! Please enter 0 or 1 only.\033[0m";
    cout << "\n\t\tEntry: ";
    cin >> sinoka;
    cout << "\n\t\t\033[31mAttempt " << attempts << " of 3.\033[0m";
		    if (attempts == 3) {
		        cout << "\n\t\t\033[31mAccess Denied! Program will exit.\033[0m";
		        exit(0);
		    }
	}	
	if (sinoka == "0") {
	system ("cls");
	
	logo();
	
	enum prov {Mindoro = 0,Marinduque,Romblon,Palawan };	
	int pili;
	
	cout << "\n\t\t================================================================";
	cout << "\n\t\t|                    \033[1;33mREGION IV-B : MIMAROPA\033[0m                    |";
	cout << "\n\t\t|   [0] Mindoro				 [2] Romblon           |";   
	cout << "\n\t\t|   [1] Marinduque			 [3] Palawan           |";
	cout << "\n\t\t================================================================";
	cout << "\n\t\tChoose your Province would like to travel: ";
	cin >> pili;
	cout << "\n";
	system("cls");
	
	// pagpili ng promo ayaw ko kasing malito
	    switch (pili) {
	    		case Mindoro:
	    			provName = "Mindoro";
	    		shortlogo ();
	    		cout << "\n\t\t=====================================================================";
				cout << "\n\t\t|                         \033[1;31mWeclome to Mindoro\033[0m                        |";
				cout << "\n\t\t=====================================================================";
				cout << "\n\t\tWould you like to check our Travel Promos?";
				cout << "\n\t\tAnswer (Y/N): ";
				cin >> sagot;
				if (sagot == 'y' || sagot == 'Y'){
					menu0 ();
					logo ();
					cout << "\n\t\tWould you like to avail?";
					cout << "\n\t\tAnswer (Y/N): ";
					cin >> sagot;
					system ("cls");
					
					if 	(sagot == 'y' || sagot == 'Y'){
					shortlogo ();
					cout << "\n\t\t\033[1;31m=====================================================================";
					cout << "\n\t\t|                             MINDORO                               |";
					cout << "\n\t\t=====================================================================\033[0m	";
					cout << "\n\t\t=====================================================================";
					cout << "\n\t\t|                           TOUR PACKAGE                            |";
					cout << "\n\t\t|A. 5D4N Nature & Island Escape            D.5D4N Eco Adventure Tour|";
					cout << "\n\t\t|B. 5D4N Scuba & Marine Life Experience    E.5D4N Heritage & Local  |";
					cout << "\n\t\t|C. 5D4N Relaxation & Wellness Retreat       Life Tour              |"; 
					cout << "\n\t\t=====================================================================";
					cout << "\n\t\tAvail Promo: ";
					cin >> promo;
						switch (toupper(promo)) {
						    case 'A': total = 5999; promoName = "5D4N Nature & Island Escape";  break;
						    case 'B': total = 8999; promoName = "5D4N Scuba & Marine Life Experience"; break;
						    case 'C': total = 6999; promoName = "5D4N Relaxation & Wellness Retreat"; break;
						    case 'D': total = 8999; promoName = "5D4N Eco Adventure Tour"; break;
						    case 'E': total = 5499; promoName = "5D4N Heritage & Local Life Tour"; break;
						    default: cout << "\n\t\tInvalid Promo!"; return 0;
						}
					} else if (sagot == 'n' || sagot == 'N') {
						system ("cls");
						main ();
					} else {
						cout << "\n\t\tInvalid Input!";
						system ("cls");
						logo_exit ();
					}
				} else if (sagot == 'n' || sagot == 'N') {
					system ("cls");
					main ();
				} else {
					cout << "\n\t\tInvalid Input!";
					system ("cls");
					logo_exit ();
				}	
	    		break;
	    		
	    		case Marinduque:
	    			provName = "Marinduque";
	    		shortlogo ();
	    		cout << "\n\t\t=====================================================================";
				cout << "\n\t\t|                      \033[1;32mWeclome to Marinduque\033[0m                        |";
				cout << "\n\t\t=====================================================================";
				cout << "\n\t\tWould you like to check our Travel Promos?";
				cout << "\n\t\tAnswer (Y/N): ";
				cin >> sagot;
				if (sagot == 'y' || sagot == 'Y'){
					menu1 ();
					logo ();
					cout << "\n\t\tWould you like to avail?";
					cout << "\n\t\tAnswer (Y/N): ";
					cin >> sagot;
					system ("cls");
					
					if 	(sagot == 'y' || sagot == 'Y'){
					shortlogo ();
					cout << "\n\t\t\033[1;32m=====================================================================";
					cout << "\n\t\t|                          MARINDUQUE	                            |";
					cout << "\n\t\t=====================================================================\033[0m";
					cout << "\n\t\t=====================================================================";
					cout << "\n\t\t|                           TOUR PACKAGE                            |";
					cout << "\n\t\t|A. 5D4N Island Discovery Tour            D.5D4N Eco Adventure Tour |";
					cout << "\n\t\t|B. 5D4N Adventure & Beach Hopping        E.5D4N Couple Getaway     |";
					cout << "\n\t\t|C. 5D4N Heritage & Festival Tour                                   |";  
					cout << "\n\t\t=====================================================================";
					cout << "\n\t\tAvail Promo: ";
					cin >> promo;
						switch (toupper(promo)) {
						    case 'A': total = 8999; promoName = "5D4N Island Discovery Tour"; break;
						    case 'B': total = 7499; promoName = "5D4N Adventure & Beach Hopping"; break;
						    case 'C': total = 9499; promoName = "5D4N Heritage & Festival Tour"; break;
						    case 'D': total = 9999; promoName = "5D4N Eco Adventure Tour"; break;
						    case 'E': total = 3499; promoName = "5D4N Couple Getaway"; break;
						    default: cout << "\n\t\tInvalid Promo!"; return 0;
						}
					} else if (sagot == 'n' || sagot == 'N') {
						system ("cls");
						main ();
					} else {
						cout << "\n\t\tInvalid Input!";
						system ("cls");
						logo_exit ();
					}
					} else if (sagot == 'n' || sagot == 'N') {
						system ("cls");
						main ();
					} else {
						cout << "\n\t\tInvalid Input!";
						system ("cls");
						logo_exit ();
					}
						break; 
					
				case Romblon:
						provName = "Romblon";
					shortlogo ();
					cout << "\n\t\t=====================================================================";
					cout << "\n\t\t|                      \033[1;33mWeclome to Romblon\033[0m                           |";
					cout << "\n\t\t=====================================================================";
					cout << "\n\t\tWould you like to check our Travel Promos?";
					cout << "\n\t\tAnswer (Y/N): ";
					cin >> sagot;
					if (sagot == 'y' || sagot == 'Y'){
						menu2 ();
						logo ();
					
						cout << "\n\t\tWould you like to avail?";
						cout << "\n\t\tAnswer (Y/N): ";
						cin >> sagot;
						system ("cls");
						
						if 	(sagot == 'y' || sagot == 'Y'){
						shortlogo ();
						cout << "\n\t\t\033[1;33m=====================================================================";
						cout << "\n\t\t|                             ROMBLON	                           |";
						cout << "\n\t\t=====================================================================\033[0m";
						cout << "\n\t\t=====================================================================";
						cout << "\n\t\t|                           TOUR PACKAGE                            |";
						cout << "\n\t\t|A. 3D2N Quick Escape                 D.6D5N Couple Luxury Stay     |";
						cout << "\n\t\t|B. 4D3N Romblon Adventure            E.4D3N Full Island Experience |";
						cout << "\n\t\t|C. 5D4N Cultural & Coastal Tour                                    |";  
						cout << "\n\t\t=====================================================================";
						cout << "\n\t\tAvail Promo: ";
						cin >> promo;
							switch (toupper(promo)) {
							    case 'A': total = 4499; promoName = "3D2N Quick Escape"; break;
							    case 'B': total = 5999; promoName = "4D3N Romblon Adventure"; break;
							    case 'C': total = 8999; promoName = "5D4N Cultural & Coastal Tour"; break;
							    case 'D': total = 9999; promoName = "6D5N Couple Luxury Stay"; break;
							    case 'E': total = 6999; promoName = "4D3N Full Island Experience"; break;
							    default: cout << "\n\t\tInvalid Promo!"; return 0;
							}
						} else if (sagot == 'n' || sagot == 'N') {
							system ("cls");
							main ();
						} else {
							cout << "\n\t\tInvalid Input!";
							system ("cls");
							logo_exit ();
						}
					} else if (sagot == 'n' || sagot == 'N') {
						system ("cls");
						main();
					} else {
						cout << "\n\t\tInvalid Input!";
						system ("cls");
						logo_exit ();
					}
						break;
					
				case Palawan:
						provName = "Palawan";
					shortlogo ();
		    		cout << "\n\t\t=====================================================================";
					cout << "\n\t\t|                      \033[1;34mWeclome to Palawan\033[0m	                    |";
					cout << "\n\t\t=====================================================================";
					cout << "\n\t\tWould you like to check our Travel Promos?";
					cout << "\n\t\tAnswer (Y/N): ";
					cin >> sagot;
					if (sagot == 'y' || sagot == 'Y'){
						menu3 ();
						logo ();
					
						cout << "\n\t\tWould you like to avail?";
						cout << "\n\t\tAnswer (Y/N): ";
						cin >> sagot;
						system ("cls");
						
						if 	(sagot == 'y' || sagot == 'Y'){
						shortlogo ();
						cout << "\n\t\t\033[1;34m=====================================================================";
						cout << "\n\t\t|                             PALAWAN	                            |";
						cout << "\n\t\t=====================================================================\033[0m";
						cout << "\n\t\t=====================================================================";
						cout << "\n\t\t|                           TOUR PACKAGE                            |";
						cout << "\n\t\t|A. 3D2N Puerto Princesa Getaway       D. 4D3N Puerto Princesa to   |";
						cout << "\n\t\t|B. 3D2N Coron Starter Trip            El Nido Combo                |";
						cout << "\n\t\t|C. 4D3N El Nido Island Adventure      E. 5D4N Coron Explorer       |";  
						cout << "\n\t\t=====================================================================";
						cout << "\n\t\tAvail Promo: ";
						cin >> promo;
							switch (toupper(promo)) {
							    case 'A': total = 4499; promoName = "3D2N Puerto Princesa Getaway"; break;
							    case 'B': total = 2499; promoName = "3D2N Coron Starter Trip"; break;
							    case 'C': total = 5299; promoName = "4D3N El Nido Island Adventure"; break;
							    case 'D': total = 6499; promoName = "4D3N Puerto Princesa to El Nido Combo"; break;
							    case 'E': total = 6999; promoName = "5D4N Coron Explorer"; break;
							    default: cout << "\n\t\tInvalid Promo!"; return 0;
							}
						} else if (sagot == 'n' || sagot == 'N') {
							system ("cls");
							main ();
						} else {
							cout << "\n\t\tInvalid Input!";
							system ("cls");
							logo_exit ();
						}
					} else if (sagot == 'n' || sagot == 'N') {
						system ("cls");
						main ();
					} else {
						cout << "\n\t\tInvalid Input!";
						system ("cls");
						logo_exit ();
					}
						break;  	
		    	default:
		    		cout << "Invalid Choice!!Resubmit the system.";
		    		main ();
		    		break;
	}
	cout << "\n\t\tPromo Purchase Stored...";
	system ("cls");
	
	// sched
	shortlogo ();
	cout << "\n\t\t=== Schedule a Date of Arrival ===\n";
    cout << "\t\tEnter month (1-12): ";
    cin >> month;

    switch (month) {
        case 1:  monthName = "January"; break;
        case 2:  monthName = "February"; break;
        case 3:  monthName = "March"; break;
        case 4:  monthName = "April"; break;
        case 5:  monthName = "May"; break;
        case 6:  monthName = "June"; break;
        case 7:  monthName = "July"; break;
        case 8:  monthName = "August"; break;
        case 9:  monthName = "September"; break;
        case 10: monthName = "October"; break;
        case 11: monthName = "November"; break;
        case 12: monthName = "December"; break;
        default: monthName = "Invalid"; break;
    }

    while (monthName == "Invalid") {
	    cout << "\n\t\t\033[31mInvalid month number\033[0m. Please enter 1-12.\n";
	    cout << "\t\tEnter month (1-12): ";
    	cin >> month;
		}

		cout << "\n\t\tYear: ";
		cin >> year;
		
		int daysInMonth;
	
			switch (month) {
			    case 2:  
			        daysInMonth = 28; 
			        break;
			    case 4: case 6: case 9: case 11:  
			        daysInMonth = 30;
			        break;
			    default: 
			        daysInMonth = 31;
			        break;
			}
	
			cout << "\n\t\tAvailable dates for " << monthName << " " << year << ":\n";
				for (int day = 1; day <= daysInMonth; day++) {
				    cout << "\n\t\t[" << day << "] " << monthName << " " << day << ", " << year << "\n";
				}
	
					cout << "\n\t\tChoose your date: ";
					cin >> choice;
	
					if (choice >= 1 && choice <= daysInMonth) {
					    cout << "\n\t\tYou have scheduled for " << monthName << " " << choice << ", " << year << ".\n";
					} else {
					    cout << "\n\t\t\033[31mInvalid day choice.\033[0m\n";
					}	
					system("cls");
	
	//how many people...
	shortlogo ();
	cout << "\n\t\t|=== COMPANION LIST ===|";
	cout << "\n\t\tHow many are you? ";
	cin >> tao;
	
	string names[50];
	int ages[50];
	string contacts[50];
	
	cin.ignore();
	
		for (int i = 0; i < tao; i++) {
		    cout << "\n\t\tEnter name #" << i + 1 << ": ";
		    getline(cin, names[i]);
		
		    cout << "\t\tEnter age  #" << i + 1 << ": ";
		    cin >> ages[i];
		    cin.ignore();
		
		    cout << "\t\tEnter contact number #" << i + 1 << ": ";
		    getline(cin, contacts[i]);
		}
		system ("pause");
		system("cls");
	
			ofstream listfile ("listahan.txt");
		    if (listfile.is_open()) {
		        listfile << "\n\t\t=====================================================\n";
		        listfile << "\t\t|                     COMPANION DETAILS             |\n";
		        listfile << "\t\t=====================================================\n";
		        listfile << "\t\t| No. | " << left << setw(20) << "Name"
		               << "| " << setw(5) << "Age"
		               << "| " << setw(15) << "Contact No." << "|\n";
		        listfile << "\t\t-----------------------------------------------------\n";
		
		        for (int i = 0; i < tao; i++) {
		            listfile << "\t\t| " << setw(3) << i + 1 << " | "
		                   << left << setw(20) << names[i]
		                   << "| " << setw(5) << ages[i]
		                   << "| " << setw(15) << contacts[i] << "|\n";
		        }
		        listfile << "\t\t=====================================================\n";
		        listfile.close();
		        cout << "\n\t\tCompanion details successfully saved to 'listahan.txt'!\n";
		    } else {
		        cout << "\n\t\t\033[31mUnable to open file!\033[0m\n";
    		}
    		
    		//contact
	shortlogo ();
    cout << "\n\t\t |=== PERSON IN CONTACT ===| ";
    
	    string pangalan, address,kailan;
	    int edad;
	    long long contactNumber;
    
		    cout << "\n\t\tDate (current)[DD/MM/YYYY]: ";
		    getline(cin,kailan);
		    cout << "\n\t\tName: ";
		    getline(cin,pangalan);
		    cout << "\n\t\tAge: ";
		    cin >> edad;
		    cin.ignore();
		    cout << "\n\t\tEnter Address: ";
		    getline(cin, address);
		    cout << "\n\t\tEnter Contact Number: ";
		    cin >> contactNumber;
			system ("cls");
	
	// receipt stored
	shortlogo ();
	double lahat = 0;
	lahat = tao*total;
	cout << fixed << setprecision(2);
		cout << "\n\t\t\033[1;33m==================================================================";
		cout << "\n\t\t|                          INITIAL RECEIPT                       |";
		cout << "\n\t\t==================================================================";
		cout << "\n\t\t|                       PERSON IN CONTACT                        |";
		cout << "\n\t\t| Date of Transaction : " << left << setw(41) << kailan << "|";
		cout << "\n\t\t| Name                : " << left << setw(41) << pangalan << "|";
		cout << "\n\t\t| Age                 : " << left << setw(41) << (to_string(edad) + " yrs. old") << "|";
		cout << "\n\t\t| Address             : " << left << setw(41) << address << "|";
		cout << "\n\t\t| Contact             : " << left << setw(41) << contactNumber << "|";
		cout << "\n\t\t|----------------------------------------------------------------|";
		cout << "\n\t\t|                    TRAVEL SERVICE AVAILED                      |";
		cout << "\n\t\t| Destination         : " << left << setw(41) << provName << "|";
		cout << "\n\t\t| Promo Code          : " << left << setw(41) << promo << "|";
		cout << "\n\t\t| Promo Name          : " << left << setw(41) << promoName << "|";
		cout << "\n\t\t| Scheduled Date      : " << left << setw(41) << (monthName + " " + to_string(choice) + ", " + to_string(year)) << "|";
		cout << "\n\t\t| No. of Companions   : " << left << setw(33) << tao << "        |";
		cout << "\n\t\t|----------------------------------------------------------------|";
		cout << "\n\t\t|                            COSTING                             |";
		cout << "\n\t\t| Total Amount        : P " << left << setw(39) << lahat << "|";
		cout << "\n\t\t==================================================================\033[0m	\n";
		
		
		ofstream repfile("insyalnaresibo.txt");
			if (repfile.is_open())
			{
			    repfile << "\n\t\t==================================================================";
			    repfile << "\n\t\t|                          INITIAL RECEIPT                       |";
			    repfile << "\n\t\t==================================================================";
			    repfile << "\n\t\t|                        PERSON IN CONTACT                       |";
			    repfile << "\n\t\t| Date of Transaction : " << left << setw(41) << kailan << "|";
				repfile << "\n\t\t| Name                : " << left << setw(41) << pangalan << "|";
				repfile << "\n\t\t| Age                 : " << left << setw(41) << (to_string(edad) + " yrs. old") << "|";
				repfile << "\n\t\t| Address             : " << left << setw(41) << address << "|";
				repfile << "\n\t\t| Contact             : " << left << setw(41) << contactNumber << "|";
				repfile << "\n\t\t|----------------------------------------------------------------|";
				repfile << "\n\t\t|                    TRAVEL SERVICE AVAILED                      |";
				repfile << "\n\t\t| Destination         : " << left << setw(41) << provName << "|";
				repfile << "\n\t\t| Promo Code          : " << left << setw(41) << promo << "|";
				repfile << "\n\t\t| Promo Name          : " << left << setw(41) << promoName << "|";
				repfile << "\n\t\t| Scheduled Date      : " << left << setw(41) << (monthName + " " + to_string(choice) + ", " + to_string(year)) << "|";
				repfile << "\n\t\t| No. of Companions   : " << left << setw(33) << tao << "        |";
				repfile << "\n\t\t|----------------------------------------------------------------|";
				repfile << "\n\t\t|                            COSTING                             |";
				repfile << "\n\t\t| Total Amount        : P " << left << setw(39) << lahat << "|";
				repfile << "\n\t\t==================================================================\n";
			    repfile.close();
			}
			else {
			cout << "\033[31mUnable to open file!\033[0m";	
			} 		
	system ("pause");
	system ("cls");
	string modofpay;
	shortlogo ();
	
	cout << "\n\t\t |=== PAYMENT ===| ";
	cout << "\n\t\tYour total cost is " << lahat << " Php";
	
	cout << "\n\n\t\t Cash or Card? ";
	cin >> modofpay;
		
	if (modofpay == "Cash" || modofpay == "CASH" || modofpay == "cash") {
		paymentmod = "Cash";
		cout << "\n\t\t Your total cost is " << lahat << " Php";
		cout << "\n\t\tPayment : P ";
 		cin >> payment;
 		while (payment < lahat) {
		 cout << "\n\t\t\033[31mInsufficient Amount!\033[0m" << endl;
		 cout << "\n\t\tYou still need to pay : P " << (lahat - payment) << endl;
		 double addPay;
		 cout << "\t\tAdditional payment : P ";
		 cin >> addPay;
		 payment += addPay;
		}
		double change = payment - lahat;
    	cout << "\n\t\tPayment accepted!" << endl;
   		system ("cls");
   		
   		shortlogo();
   		cout << fixed << setprecision(2);
		cout << "\n\t\t\033[1;33m==================================================================";
		cout << "\n\t\t|                            RECEIPT                             |";
		cout << "\n\t\t==================================================================";
		cout << "\n\t\t|                       PERSON IN CONTACT                        |";
		cout << "\n\t\t| Date of Transaction : " << left << setw(41) << kailan << "|";
		cout << "\n\t\t| Name                : " << left << setw(41) << pangalan << "|";
		cout << "\n\t\t| Age                 : " << left << setw(41) << (to_string(edad) + " yrs. old") << "|";
		cout << "\n\t\t| Address             : " << left << setw(41) << address << "|";
		cout << "\n\t\t| Contact             : " << left << setw(41) << contactNumber << "|";
		cout << "\n\t\t|----------------------------------------------------------------|";
		cout << "\n\t\t|                    TRAVEL SERVICE AVAILED                      |";
		cout << "\n\t\t| Destination         : " << left << setw(41) << provName << "|";
		cout << "\n\t\t| Promo Code          : " << left << setw(41) << promo << "|";
		cout << "\n\t\t| Promo Name          : " << left << setw(41) << promoName << "|";
		cout << "\n\t\t| Scheduled Date      : " << left << setw(41) << (monthName + " " + to_string(choice) + ", " + to_string(year)) << "|";
		cout << "\n\t\t| No. of Companions   : " << left << setw(33) << tao << "        |";
		cout << "\n\t\t|----------------------------------------------------------------|";
		cout << "\n\t\t|                            COSTING                             |";
		cout << "\n\t\t| Mode of Payment     : " << left << setw(41) << paymentmod << "|";
		cout << "\n\t\t| Total Amount        : P " << left << setw(39) << lahat << "|";
		cout << "\n\t\t| Payment             : P " << left << setw(39) << payment << "|"; 
		cout << "\n\t\t| Change              : P " << left << setw(39) << change << "|";
		cout << "\n\t\t==================================================================\033[0m\n"; 
		
		ofstream papelfile("salapi.txt");
			if (papelfile.is_open())
			{
			    papelfile << "\n\t\t==================================================================";
			    papelfile << "\n\t\t|                            RECEIPT                             |";
			    papelfile << "\n\t\t==================================================================";
			    papelfile << "\n\t\t|                        PERSON IN CONTACT                       |";
			    papelfile << "\n\t\t| Date of Transaction : " << left << setw(41) << kailan << "|";
				papelfile << "\n\t\t| Name                : " << left << setw(41) << pangalan << "|";
				papelfile << "\n\t\t| Age                 : " << left << setw(41) << (to_string(edad) + " yrs. old") << "|";
				papelfile << "\n\t\t| Address             : " << left << setw(41) << address << "|";
				papelfile << "\n\t\t| Contact             : " << left << setw(41) << contactNumber << "|";
				papelfile << "\n\t\t|----------------------------------------------------------------|";
				papelfile << "\n\t\t|                    TRAVEL SERVICE AVAILED                      |";
				papelfile << "\n\t\t| Destination         : " << left << setw(41) << provName << "|";
				papelfile << "\n\t\t| Promo Code          : " << left << setw(41) << promo << "|";
				papelfile << "\n\t\t| Promo Name          : " << left << setw(41) << promoName << "|";
				papelfile << "\n\t\t| Scheduled Date      : " << left << setw(41) << (monthName + " " + to_string(choice) + ", " + to_string(year)) << "|";
				papelfile << "\n\t\t| No. of Companions   : " << left << setw(33) << tao << "        |";
				papelfile << "\n\t\t|----------------------------------------------------------------|";
				papelfile << "\n\t\t|                            COSTING                             |";
				papelfile << "\n\t\t| Mode of Payment     : " << left << setw(41) << paymentmod << "|";
				papelfile << "\n\t\t| Total Amount        : P " << left << setw(39) << lahat << "|";
				papelfile << "\n\t\t| Payment             : P " << left << setw(39) << payment << "|";
				papelfile << "\n\t\t| Change              : P " << left << setw(39) << change << "|";
				papelfile << "\n\t\t==================================================================\n";
			    papelfile.close();
			}
			else {
			cout << "\033[31mUnable to open file\033[0m";	
			}		 
	} else if (modofpay == "Card" || modofpay == "card" || modofpay == "CARD"){
		int carrd;
		cout << "\n\t\t===============================================";
		cout << "\n\t\t|    CARD BANKS AFFILATED WITH OUR COMPANY    |";
		cout << "\n\t\t|    [0] GCash             [3] UnionBank      |";
		cout << "\n\t\t|    [1] BPI               [4] MetroBank      |";
		cout << "\n\t\t|    [2] BPO               [5] Maya           |";
		cout << "\n\t\t-----------------------------------------------";
		cout << "\n\t\tPick: ";
		cin >> carrd;
		switch (carrd) {
		    case 0: {
		    	paymentmod = "GCash";
		        cout << "\n\t\t GCASH NUMBER: 09xx xxx xxxx";
		        cout << "\n\t\t Your total cost is " << lahat << " Php";
		        cout << "\n\t\t Enter Payment : P ";
		        cin >> payment;
		        system("pause");
		        cout << "\n\t\tPayment Received...";
		        cout << "\n\t\t...";
		        cout << "\n\t\t...";
		        cout << "\n\t\t...";
      
				ofstream cashfile("gcash_receipt.txt");
		        if (cashfile.is_open()) {
		            cashfile << "\n\t\t=====================================";
		            cashfile << "\n\t\t| " << setw(30) << right << pangalan << " |";
		            cashfile << "\n\t\t=====================================";
		            cashfile << "\n\t\t              sent via GCash";
		            cashfile << "\n\n\t\t Amount: " << lahat;
		            cashfile << "\n\t\t_____________________________________";
		            cashfile << "\n\t\t Total Amount Sent: " << payment;
		            cashfile << "\n\t\t\t " << kailan;
		            cashfile << "\n\t\t=====================================";
		            cashfile.close();
		        } else {
		            cout << "\033[31mUnable to open file\033[0m";
		        }
		        break;
		    }
		
			    case 1: {
			        paymentmod = "BPI";}
				case 2: {
			        paymentmod = "BPO";}
			    case 3: {
			        paymentmod = "UnionBank";}
			    case 4: {
			        paymentmod = "MetroBank";}
			    case 5: {
			        paymentmod = "Maya";}
			        
			    if (carrd >= 1 && carrd <= 5) {
		        cout << "\n\t\t Your total cost is " << lahat << " Php";
		        cout << "\n\t\t Enter Payment : P ";
		        cin >> payment;
		        char pin[10];
		        cout << "\n\t\t Enter Pin (*): ";
		        cin >> pin;
		        system("pause");
		        cout << "\n\t\tPayment Received...";
		        cout << "\n\t\t...";
		        cout << "\n\t\t...";
		        cout << "\n\t\t...";
		        
		        ofstream myfile("card_receipt.txt");
		        if (myfile.is_open()) {
		            myfile << "\n\t\t=================================";
		            myfile << "\n\t\t         UPDATE!!!";
		            myfile << "\n\t\tYou spent " << payment << " Php";
		            myfile << "\n\t\tDATE: " << kailan;
		            myfile << "\n\n\t\tRecent Card Transaction...";
		            myfile << "\n\t\t=================================";
		            myfile.close();
		        } else {
		            cout << "\033[31mUnable to open file\033[0m";
		        }
		        
		         ofstream ownerfile("bayadowner_receipt.txt");
		        if (ownerfile.is_open()) {
		            ownerfile << "\n\t\t=================================";
		            ownerfile << "\n\t\t   SENT YOU MONEY via " << paymentmod;
		            ownerfile << "\n\t\tName: " << pangalan;
		            ownerfile << "\n\t\tSent you " << payment << " Php";
		            ownerfile << "\n\t\tDATE: " << kailan;
		            ownerfile << "\n\t\t=================================";
		            ownerfile.close();
		        } else {
		            cout << "\033[31mUnable to open file\033[0m";
		        }
		        break;
		    }
		    default:
		        cout << "\033[31mInvalid Choice!!Resubmit the system.\033[0m";
		        break;
		}
	}
	system ("cls");
     
	logo();
	cout << fixed << setprecision(2);
		cout << "\n\t\t\033[1;33m==================================================================";
		cout << "\n\t\t|                            RECEIPT                             |";
		cout << "\n\t\t==================================================================";
		cout << "\n\t\t|                       PERSON IN CONTACT                        |";
		cout << "\n\t\t| Date of Transaction : " << left << setw(41) << kailan << "|";
		cout << "\n\t\t| Name                : " << left << setw(41) << pangalan << "|";
		cout << "\n\t\t| Age                 : " << left << setw(41) << (to_string(edad) + " yrs. old") << "|";
		cout << "\n\t\t| Address             : " << left << setw(41) << address << "|";
		cout << "\n\t\t| Contact             : " << left << setw(41) << contactNumber << "|";
		cout << "\n\t\t|----------------------------------------------------------------|";
		cout << "\n\t\t|                    TRAVEL SERVICE AVAILED                      |";
		cout << "\n\t\t| Destination         : " << left << setw(41) << provName << "|";
		cout << "\n\t\t| Promo Code          : " << left << setw(41) << promo << "|";
		cout << "\n\t\t| Promo Name          : " << left << setw(41) << promoName << "|";
		cout << "\n\t\t| Scheduled Date      : " << left << setw(41) << (monthName + " " + to_string(choice) + ", " + to_string(year)) << "|";
		cout << "\n\t\t| No. of Companions   : " << left << setw(33) << tao << "        |";
		cout << "\n\t\t|----------------------------------------------------------------|";
		cout << "\n\t\t| No. | " << left << setw(20) << "Name"<< "| " << setw(5) << "Age" << "| " << setw(28) << "Contact No." << "|";
		cout << "\n\t\t-----------------------------------------------------------------|\n";
		        for (int i = 0; i < tao; i++) {
		            cout << "\t\t| " << setw(3) << i + 1 << " | "
		                   << left << setw(20) << names[i]
		                   << "| " << setw(5) << ages[i]
		                   << "| " << setw(28) << contacts[i] << "|\n"; }
		cout << "\t\t|----------------------------------------------------------------|";
		cout << "\n\t\t|                            COSTING                             |";
		cout << "\n\t\t| Mode of Payment     : " << left << setw(41) << paymentmod << "|";
		cout << "\n\t\t| Total Amount        : P " << left << setw(39) << lahat << "|";
		cout << "\n\t\t| Payment             : P " << left << setw(39) << payment << "|"; 
		cout << "\n\t\t| Change              : P " << left << setw(39) << change << "|";
		cout << "\n\t\t==================================================================\033[0m\n"; 
		
		ofstream oflfile("opisyalresibo.txt");
			if (oflfile.is_open())
			{
			    oflfile << "\n\t\t==================================================================";
			    oflfile << "\n\t\t|                            RECEIPT                             |";
			    oflfile << "\n\t\t==================================================================";
			    oflfile << "\n\t\t|                        PERSON IN CONTACT                       |";
			    oflfile << "\n\t\t| Date of Transaction : " << left << setw(41) << kailan << "|";
				oflfile << "\n\t\t| Name                : " << left << setw(41) << pangalan << "|";
				oflfile << "\n\t\t| Age                 : " << left << setw(41) << (to_string(edad) + " yrs. old") << "|";
				oflfile << "\n\t\t| Address             : " << left << setw(41) << address << "|";
				oflfile << "\n\t\t| Contact             : " << left << setw(41) << contactNumber << "|";
				oflfile << "\n\t\t|----------------------------------------------------------------|";
				oflfile << "\n\t\t|                    TRAVEL SERVICE AVAILED                      |";
				oflfile << "\n\t\t| Destination         : " << left << setw(41) << provName << "|";
				oflfile << "\n\t\t| Promo Code          : " << left << setw(41) << promo << "|";
				oflfile << "\n\t\t| Promo Name          : " << left << setw(41) << promoName << "|";
				oflfile << "\n\t\t| Scheduled Date      : " << left << setw(41) << (monthName + " " + to_string(choice) + ", " + to_string(year)) << "|";
				oflfile << "\n\t\t| No. of Companions   : " << left << setw(33) << tao << "        |";
				oflfile << "\n\t\t|----------------------------------------------------------------|";
				oflfile << "\n\t\t| No. | " << left << setw(20) << "Name"<< "| " << setw(5) << "Age" << "| " << setw(28) << "Contact No." << "|";
		        oflfile << "\n\t\t-----------------------------------------------------------------|\n";
		        for (int i = 0; i < tao; i++) {
		            oflfile << "\t\t| " << setw(3) << i + 1 << " | "
		                   << left << setw(20) << names[i]
		                   << "| " << setw(5) << ages[i]
		                   << "| " << setw(28) << contacts[i] << "|\n"; }
				oflfile << "\t\t|----------------------------------------------------------------|";
				oflfile << "\n\t\t|                            COSTING                             |";
				oflfile << "\n\t\t| Mode of Payment     : " << left << setw(41) << paymentmod << "|";
				oflfile << "\n\t\t| Total Amount        : P " << left << setw(39) << lahat << "|";
				oflfile << "\n\t\t| Payment             : P " << left << setw(39) << payment << "|";
				oflfile << "\n\t\t| Change              : P " << left << setw(39) << change << "|";
				oflfile << "\n\t\t==================================================================\n";
			    oflfile.close();
			} else {
			cout << "\033[31mUnable to open file\033[0m";	
			} 
		system ("pause");
		system ("cls");		
			
	     logo_exit1 ();          
} else if (sinoka == "1"){
	admincentre (); 
	}	

	return 0;
}

void shortlogo (){
	cout << "\n\t\t                                \033[1;34m@@@@\033[0m                               ";
	cout << "\n\t\t                            \033[1;34m.@@+.  .+@@.\033[0m                           ";
    cout << "\n\t\t                            \033[1;34m..#@@@@@@%..\033[0m               \033[1;33m-|-\033[0m         ";             
    cout << "\n\t\t                    \033[1;32m-|-\033[0m        \033[1;34m:#@@#:\033[0m                              ";                  
    cout << "\n\t\t         \033[1;33m-|-\033[0m             \033[1;34m.=@@---#@@#---@@=.\033[0m                        ";          
    cout << "\n\t\t                         \033[1;34m:@@@@@@@@@@@@@@@@:\033[0m       \033[1;32m-|-\033[0m              ";            
	cout << "\n\t\t   ================================================================";
	cout << "\n\t\t   |                      Bon Voyage a Dee                        |";
	cout << "\n\t\t   ================================================================";      
    cout << "\n\t\t   \033[1;34m                      .-=@@@@%--%@@@@=-.                        ";          
    cout << "\n\t\t                              #@@@@@@#                             ";
    cout << "\n\t\t                               .*@@*.                              ";
    cout << "\n\t\t                                 --                                \033[0m";
	cout << "\n\n";
}

void logo () {
	cout << "\n\t\t  \033[1;32m-|-\033[0m                       \033[1;34m-====-\033[0m                   \033[1;34m-|-\033[0m        ";
	cout << "\n\t\t                         \033[1;34m..%@@@@@@%..\033[0m                           ";
	cout << "\n\t\t        \033[1;31m-|-\033[0m              \033[1;34m.@@=.  .=@@.\033[0m      \033[1;31m-|-\033[0m                  ";
	cout << "\n\t\t                         \033[1;34m.@@+.  .+@@.\033[0m                           ";
    cout << "\n\t\t                         \033[1;34m..#@@@@@@%..\033[0m               \033[1;33m-|-\033[0m         ";             
    cout << "\n\t\t                 \033[1;32m-|-\033[0m        \033[1;34m:#@@#:\033[0m                              ";                  
    cout << "\n\t\t      \033[1;34m-|-\033[0m             \033[1;34m.=@@---#@@#---@@=.\033[0m                        ";          
    cout << "\n\t\t                      \033[1;34m:@@@@@@@@@@@@@@@@:\033[0m       \033[1;32m-|-\033[0m              ";            
    cout << "\n\t\t    \033[1;33m-|-\033[0m                \033[1;34m.=-.  *@@*   -=.\033[0m                     \033[1;33m-|-\033[0m ";                                                	
	cout << "\n\t\t================================================================";
	cout << "\n\t\t|                      \033[1;33mBon Voyage a Dee\033[0m                        |";
	cout << "\n\t\t================================================================";
	cout << "\n\t\t\033[1;34m              .@@@=....      *@@*       ...-@@@.                ";    
    cout << "\n\t\t              .@-@@%#+      #@@@@#      +#%@@-@.                ";
	cout << "\n\t\t              .%. *@@@@%:::%@@@@@@@:::%@@@@* .%.                ";    
    cout << "\n\t\t                   .=@@@@@@@@@++@@@@@@@@@+.                     ";       
    cout << "\n\t\t                      .-=@@@@%--%@@@@=-.                        ";          
    cout << "\n\t\t                           #@@@@@@#                             ";
    cout << "\n\t\t                            .*@@*.                              ";
    cout << "\n\t\t                              --                                \033[0m";
	cout << "\n\n";
}

void logo_exit () {
	
	cout << "\n\t\t  \033[1;32m-|-\033[0m                       \033[1;34m-====-\033[0m                   \033[1;34m-|-\033[0m        ";
	cout << "\n\t\t                         \033[1;34m..%@@@@@@%..\033[0m                           ";
	cout << "\n\t\t        \033[1;31m-|-\033[0m              \033[1;34m.@@=.  .=@@.\033[0m      \033[1;31m-|-\033[0m                  ";
	cout << "\n\t\t                         \033[1;34m.@@+.  .+@@.\033[0m                           ";
    cout << "\n\t\t                         \033[1;34m..#@@@@@@%..\033[0m               \033[1;33m-|-\033[0m         ";             
    cout << "\n\t\t                 \033[1;32m-|-\033[0m        \033[1;34m:#@@#:\033[0m                              ";                  
    cout << "\n\t\t      \033[1;34m-|-\033[0m             \033[1;34m.=@@---#@@#---@@=.\033[0m                        ";          
    cout << "\n\t\t                      \033[1;34m:@@@@@@@@@@@@@@@@:\033[0m       \033[1;32m-|-\033[0m              ";            
    cout << "\n\t\t    \033[1;33m-|-\033[0m                \033[1;34m.=-.  *@@*   -=.\033[0m                     \033[1;33m-|-\033[0m ";                                                
    cout << "\n\t\t================================================================";
	cout << "\n\t\t|                \033[1;31mMABUHAY, SALAMAT SA PAG-PARINI\033[0m                |";
	cout << "\n\t\t================================================================";	
	cout << "\n\t\t================================================================";
	cout << "\n\t\t|                      \033[1;33mBon Voyage a Dee\033[0m                        |";
	cout << "\n\t\t================================================================";
	cout << "\n\t\t\033[1;34m              .@@@=....      *@@*       ...-@@@.                ";    
    cout << "\n\t\t              .@-@@%#+      #@@@@#      +#%@@-@.                ";
	cout << "\n\t\t              .%. *@@@@%:::%@@@@@@@:::%@@@@* .%.                ";    
    cout << "\n\t\t                   .=@@@@@@@@@++@@@@@@@@@+.                     ";       
    cout << "\n\t\t                      .-=@@@@%--%@@@@=-.                        ";          
    cout << "\n\t\t                           #@@@@@@#                             ";
    cout << "\n\t\t                            .*@@*.                              ";
    cout << "\n\t\t                              --                                \033[0m";
	cout << "\n\n";
	
	cout << "\n\t\t\033[31mExit Program...\033[0m";
	cout << "\n\t\t\033[1;33mRestart the program to avail...\033[0m";
	cout << "\n\t\t...";
	cout << "\n\t\t...";
	cout << "\n\t\t...";
	exit (0);
	
}

void menu0 () {
	char again;
		do {
			cout << "\n\t\t=====================================================================";
			cout << "\n\t\t|                           \033[1;31mTOUR PACKAGE\033[0m                            |";
			cout << "\n\t\t|A. 5D4N Nature & Island Escape            D.5D4N Eco Adventure Tour|";
			cout << "\n\t\t|B. 5D4N Scuba & Marine Life Experience    E.5D4N Heritage & Local  |";
			cout << "\n\t\t|C. 5D4N Relaxation & Wellness Retreat       Life Tour              |"; 
			cout << "\n\t\t=====================================================================";
			cout << "\n\t\tView Travel Promo: ";
			char promo;
			cin >> promo;
			system("cls");
				switch (toupper(promo)){
					case 'A': 
						cout << "\n\t\t=============================================================================";
						cout << "\n\t\t|                       \033[1;33m5D4N Nature & Island Escape\033[0m                         |";
						cout << "\n\t\t=============================================================================";
						cout << "\n\t\t|Destinations: Puerto Galera, Tamaraw Falls, White Beach, Coral Garden      |";
						cout << "\n\t\t|Day 1: Arrival in Calapan, welcome dinner by the beach                     |";
						cout << "\n\t\t|Day 2: Island hopping (Haligi Beach, Sandbar Island, Coral Garden)         |";
						cout << "\n\t\t|Day 3: Tamaraw Falls & Tukuran River adventure                             |";
						cout << "\n\t\t|Day 4: Free day for snorkeling and local shopping                          |";
						cout << "\n\t\t|Day 5: Breakfast & return trip                                             |";
						cout << "\n\t\t|Iclusions: Hotel accommodation, meals, boat transfers, and tour guide      |";
						cout << "\n\t\t-----------------------------------------------------------------------------";
						cout << "\n\t\t|Price: \033[1;32mPhp 5,999/person\033[0m                                                    |";
						cout << "\n\t\t=============================================================================";
						break;
					case 'B':
						cout << "\n\t\t=============================================================================";
						cout << "\n\t\t|                    \033[1;33m5D4N Scuba & Marine Life Experience\033[0m                    |";
						cout << "\n\t\t=============================================================================";
						cout << "\n\t\t|Destinations: Puerto Galera Dive Spots, Verde Island, Sabang Beach         |";
						cout << "\n\t\t|Day 1: Orientation & equipment fitting                                     |";
						cout << "\n\t\t|Day 2: Scuba diving sessions at Coral Garden & Giant Clams site            |";
						cout << "\n\t\t|Day 3: Verde Island dive + sunset cruise                                   |";
						cout << "\n\t\t|Day 4: Rest day or optional mangrove kayaking                              |";
						cout << "\n\t\t|Day 5: Souvenir shopping & departure                                       |";
						cout << "\n\t\t|Iclusions: Dive gear, PADI-certified instructor, accommodation, breakfast  |";
						cout << "\n\t\t-----------------------------------------------------------------------------";
						cout << "\n\t\t|Price: \033[1;32mPhp 8,999/person\033[0m                                                    |";
						cout << "\n\t\t=============================================================================";
						break;
					case 'C':
						cout << "\n\t\t=============================================================================";
						cout << "\n\t\t|                  \033[1;33m5D4N Relaxation & Wellness Retreat\033[0m                       |";
						cout << "\n\t\t=============================================================================";
						cout << "\n\t\t|Destinations: White Beach, Talipanan Falls, Infinity Resort                |";
						cout << "\n\t\t|Day 1: Arrival & spa welcome treatment                                     |";
						cout << "\n\t\t|Day 2: Yoga session + beach picnic                                         |";
						cout << "\n\t\t|Day 3: Talipanan Falls tour & massage                                      |";
						cout << "\n\t\t|Day 4: Free day + sunset dinner cruise                                     |";
						cout << "\n\t\t|Day 5: Breakfast & check-out                                               |";
						cout << "\n\t\t|Inclusions: 4-star accommodation, spa services, meals, transfers           |";
						cout << "\n\t\t-----------------------------------------------------------------------------";
						cout << "\n\t\t|Price: \033[1;32mPhp 6,999/person\033[0m                                                    |";
						cout << "\n\t\t=============================================================================";
						break;
					case 'D':
						cout << "\n\t\t=============================================================================";
						cout << "\n\t\t|                         \033[1;33m5D4N Eco Adventure Tour\033[0m                           |";
						cout << "\n\t\t=============================================================================";
						cout << "\n\t\t|Destinations:  Mount Halcon, Naujan Lake, Tukuran Falls                    |";
						cout << "\n\t\t|Day 1: Travel to Mindoro, local dinner                                     |";
						cout << "\n\t\t|Day 2: Trek to Mount Halcon foothills                                      |";
						cout << "\n\t\t|Day 3: Visit Naujan Lake & bird-watching activity                          |";
						cout << "\n\t\t|Day 4: Tukuran Falls & bamboo raft experience                              |";
						cout << "\n\t\t|Day 5: Morning hike + return trip                                          |";
						cout << "\n\t\t|Inclusions: Local guide, camping gear, transportation, meals               |";
						cout << "\n\t\t-----------------------------------------------------------------------------";
						cout << "\n\t\t|Price: \033[1;32mPhp 8,999/person\033[0m                                                   |";
						cout << "\n\t\t=============================================================================";
						break;
					case 'E':
						cout << "\n\t\t=============================================================================";
						cout << "\n\t\t|                       \033[1;33m5D4N Heritage & Local Life Tour\033[0m                     |";
						cout << "\n\t\t=============================================================================";
						cout << "\n\t\t|Destinations: Mangyan Village, Calapan City, Bulalacao                     |";
						cout << "\n\t\t|Day 1: Welcome lunch in Calapan                                            |";
						cout << "\n\t\t|Day 2: Visit Mangyan Village & handicraft demo                             |";
						cout << "\n\t\t|Day 3: Explore Bulalacao beaches                                           |";
						cout << "\n\t\t|Day 4: Cultural night with local music & food tasting                      |";
						cout << "\n\t\t|Day 5: Market visit & departure                                            |";
						cout << "\n\t\t|Inclusions: Accommodation, local guide, meals, transport                   |";
						cout << "\n\t\t-----------------------------------------------------------------------------";
						cout << "\n\t\t|Price: \033[1;32mPhp 5,499/person\033[0m                                                    |";
						cout << "\n\t\t=============================================================================";
						break;
					default: cout << "Invalid Choice!!Resubmit the system."; break;	
				}
		cout << "\n\n\t\tWould you like to view another promo? (Y/N): ";
        cin >> again;
        system ("cls");

			} while (again == 'Y' || again == 'y');	
}

void menu1 () {
	char promo, again;
		do {
			cout << "\n\t\t=====================================================================";
			cout << "\n\t\t|                           \033[1;32mTOUR PACKAGE\033[0m                            |";
			cout << "\n\t\t|A. 5D4N Island Discovery Tour            D.5D4N Eco Adventure Tour |";
			cout << "\n\t\t|B. 5D4N Adventure & Beach Hopping        E.Couple Getaway          |";
			cout << "\n\t\t|C. 5D4N Heritage & Festival Tour                                   |";  
			cout << "\n\t\t=====================================================================";
			cout << "\n\t\tView Travel Promo: ";
			cin >> promo;
			system("cls");
				switch (toupper(promo)){
					case 'A':					
						cout << "\n\t\t=============================================================================";
						cout << "\n\t\t|                        \033[1;33m5D4N Island Discovery Tour\033[0m                         |";
						cout << "\n\t\t=============================================================================";
						cout << "\n\t\t|Destinations: Boac, Gasan, Torrijos, Poctoy White Beach                    |";
						cout << "\n\t\t|Day 1: Arrival in Boac, heritage walk & local dinner                       |";
						cout << "\n\t\t|Day 2: Tour of Boac Cathedral, Butterfly Farm, and Gasan Church            |";
						cout << "\n\t\t|Day 3: Poctoy White Beach swimming & snorkeling                            |";
						cout << "\n\t\t|Day 4: Mt. Malindig sightseeing & souvenir shopping                        |";
						cout << "\n\t\t|Day 5: Breakfast & departure                                               |";
						cout << "\n\t\t|Iclusions: Hotel stay, daily breakfast, transport, guide, and island fees  |";
						cout << "\n\t\t-----------------------------------------------------------------------------";
						cout << "\n\t\t|Price: \033[1;32mPhp 8,999/person\033[0m                                                    |";
						cout << "\n\t\t=============================================================================";
						break;
					case 'B':
						cout << "\n\t\t=============================================================================";
						cout << "\n\t\t|                  \033[1;33m5D4N Adventure & Beach Hopping\033[0m                           |";
						cout << "\n\t\t=============================================================================";
						cout << "\n\t\t|Destinations: Tres Reyes Islands, Poctoy Beach, Bathala Caves              |";
						cout << "\n\t\t|Day 1: Arrival and welcome dinner                                          |";
						cout << "\n\t\t|Day 2: Island hopping to Gaspar, Melchor, and Baltazar (Tres Reyes)        |";
						cout << "\n\t\t|Day 3: Snorkeling & cliff diving + Poctoy White Beach                      |";
						cout << "\n\t\t|Day 4: Explore Bathala Caves & grotto                                      |";
						cout << "\n\t\t|Day 5: Relaxing breakfast before check-out                                 |";
						cout << "\n\t\t|Iclusions: Accommodation, boat transfers, meals, tour guide                |";
						cout << "\n\t\t-----------------------------------------------------------------------------";
						cout << "\n\t\t|Price: \033[1;32mPhp 7,499/person\033[0m                                                  |";
						cout << "\n\t\t=============================================================================";
						break;
					case 'C': 
						cout << "\n\t\t=============================================================================";
						cout << "\n\t\t|                   \033[1;33m5D4N Heritage & Festival Tour\033[0m                           |";
						cout << "\n\t\t=============================================================================";
						cout << "\n\t\t|Destinations: Boac, Mogpog, and Santa Cruz                                 |";
						cout << "\n\t\t|Day 1: Arrival & Boac Museum visit                                         |";
						cout << "\n\t\t|Day 2: Cultural tour to Boac Cathedral & local weaving center              |";
						cout << "\n\t\t|Day 3: Visit Mogpog (home of the original Moriones Festival)               |";
						cout << "\n\t\t|Day 4: Moriones mask-making workshop + cultural show                       |";
						cout << "\n\t\t|Day 5: City market tour & return trip                                      |";
						cout << "\n\t\t|Iclusions: Hotel stay, meals, local guide, and entrance fees               |";
						cout << "\n\t\t-----------------------------------------------------------------------------";
						cout << "\n\t\t|Price: \033[1;32mPhp 9,499/person\033[0m                                                    |";
						cout << "\n\t\t=============================================================================";
						break;
					case 'D': 
						cout << "\n\t\t=============================================================================";
						cout << "\n\t\t|                    \033[1;33m5D4N Eco-Adventure Experience\033[0m                          |";
						cout << "\n\t\t=============================================================================";
						cout << "\n\t\t|Destinations: Bathala Caves, Malbog Hot Springs, and Maniwaya Island       |";
						cout << "\n\t\t|Day 1: Arrival and relaxation at resort                                    |";
						cout << "\n\t\t|Day 2: Trek to Bathala Caves & explore underground chambers                |";
						cout << "\n\t\t|Day 3: Boat to Maniwaya Island + Palad Sandbar visit                       |";
						cout << "\n\t\t|Day 4: Malbog Hot Springs & mountain view picnic                           |";
						cout << "\n\t\t|Day 5: Breakfast & departure                                               |";
						cout << "\n\t\t|Iclusions: Hotel or resort stay, tours, meals, and transfers               |";
						cout << "\n\t\t-----------------------------------------------------------------------------";
						cout << "\n\t\t|Price: \033[1;32mPhp 9,999/person\033[0m                                                    |";
						cout << "\n\t\t=============================================================================";
						break;
					case 'E': 
						cout << "\n\t\t=============================================================================";
						cout << "\n\t\t|                        \033[1;33m5D4N Couple Getaway\033[0m                                |";
						cout << "\n\t\t=============================================================================";
						cout << "\n\t\t|Destinations: Poctoy Beach, Boac Heritage Village, Palad Sandbar           |";
						cout << "\n\t\t|Day 1: Welcome drinks & candlelight dinner                                 |";
						cout << "\n\t\t|Day 2: Island picnic at Palad Sandbar                                      |";
						cout << "\n\t\t|Day 3: Heritage stroll in Boac + souvenir shopping                         |";
						cout << "\n\t\t|Day 4: Spa & sunset cruise by the shore                                    |";
						cout << "\n\t\t|Day 5: Breakfast in bed & check-out                                        |";
						cout << "\n\t\t|Iclusions: Resort accommodation, meals, transfers, spa treatment           |";
						cout << "\n\t\t-----------------------------------------------------------------------------";
						cout << "\n\t\t|Price: \033[1;32mPhp 3,499/couple\033[0m                                                    |";
						cout << "\n\t\t=============================================================================";
						break;
					default: cout << "Invalid Choice!!Resubmit the system."; break;		
				}
		cout << "\n\n\t\tWould you like to view another promo? (Y/N): ";
        cin >> again;
        system ("cls");

			} while (again == 'Y' || again == 'y');
}

void menu2 () {
	char promo, again;
		do {
			cout << "\n\t\t=====================================================================";
			cout << "\n\t\t|                           \033[1;33mTOUR PACKAGE\033[0m                            |";
			cout << "\n\t\t|A. 3D2N Quick Escape                 D.6D5N Couple Luxury Stay     |";
			cout << "\n\t\t|B. 4D3N Romblon Adventure            E.4D3N Full Island Experience |";
			cout << "\n\t\t|C. 5D4N Cultural & Coastal Tour                                    |";  
			cout << "\n\t\t=====================================================================";
			cout << "\n\t\tView Travel Promo: ";
			cin >> promo;
			system("cls");
				switch (toupper(promo)){
					case 'A': 
						cout << "\n\t\t==========================================================================";
						cout << "\n\t\t|                          \033[1;33m3D2N Quick Escape\033[0m                             |";
						cout << "\n\t\t==========================================================================";
						cout << "\n\t\t|Destinations: Bonbon Beach, Tiamban Beach, Marble Workshop              |";
						cout << "\n\t\t|Day 1: Arrival in Romblon Town + marble souvenir shopping               |";
						cout << "\n\t\t|Day 2: Beach hopping,  Bonbon and Tiamban + sunset dinner               |";
						cout << "\n\t\t|Day 3: Morning city stroll & departure                                  |";
						cout << "\n\t\t|Iclusions: Accommodation, breakfast, guide, transport                   |";
						cout << "\n\t\t--------------------------------------------------------------------------";
						cout << "\n\t\t|Price: \033[1;32mPhp 4,499/person\033[0m                                                 |";
						cout << "\n\t\t==========================================================================";
						break;
					case 'B': 
						cout << "\n\t\t==========================================================================";
						cout << "\n\t\t|                      \033[1;33m4D3N Romblon Adventure\033[0m                            |";
						cout << "\n\t\t==========================================================================";
						cout << "\n\t\t|Destinations: Cobrador Island, Alad Island, Fort San Andres             |";
						cout << "\n\t\t|Day 1: Welcome dinner in Romblon Town                                   |";
						cout << "\n\t\t|Day 2: Island hopping (Cobrador + Alad) + snorkeling                    |";
						cout << "\n\t\t|Day 3: Visit Fort San Andres + local heritage walk                      |";
						cout << "\n\t\t|Day 4: Free morning swim + check-out                                    |";
						cout << "\n\t\t|Iclusions: Hotel stay, meals, boat transfers, guide                     |";
						cout << "\n\t\t--------------------------------------------------------------------------";
						cout << "\n\t\t|Price: \033[1;32mPhp 5,999/person\033[0m                                                 |";
						cout << "\n\t\t==========================================================================";
						break;
					case 'C': 
						cout << "\n\t\t==========================================================================";
						cout << "\n\t\t|                      \033[1;33m5D4N Cultural & Coastal Tour\033[0m                      |";
						cout << "\n\t\t==========================================================================";
						cout << "\n\t\t|Destinations: Romblon Town, Looc, Odiongan                              |";
						cout << "\n\t\t|Day 1: Arrival & local welcome dinner                                   |";
						cout << "\n\t\t|Day 2: Visit Marble Quarry & Romblon Cathedral                          |";
						cout << "\n\t\t|Day 3: Looc Marine Sanctuary + glass-bottom boat tour                   |";
						cout << "\n\t\t|Day 4: Odiongan culture tour & handicraft shopping                      |";
						cout << "\n\t\t|Day 5: Breakfast & departure                                            |";
						cout << "\n\t\t|Iclusions: Accommodation, transport, breakfast, entrance fees           |";
						cout << "\n\t\t--------------------------------------------------------------------------";
						cout << "\n\t\t|Price: \033[1;32mPhp 8,999/person\033[0m                                                 |";
						cout << "\n\t\t==========================================================================";
						break;
					case 'D': 
						cout << "\n\t\t==========================================================================";
						cout << "\n\t\t|                      \033[1;33m6D5N Couple Luxury Stay\033[0m                           |";
						cout << "\n\t\t==========================================================================";
						cout << "\n\t\t|Destinations: Bonbon Beach, Cobrador Island, Tiamban Viewpoint          |";
						cout << "\n\t\t|Day 1: Arrival & sunset dinner for two                                  |";
						cout << "\n\t\t|Day 2: Island picnic at Cobrador + snorkeling                           |";
						cout << "\n\t\t|Day 3: Spa & leisure day                                                |";
						cout << "\n\t\t|Day 4: Beach hopping & romantic photo session                           |";
						cout << "\n\t\t|Day 5: Free day for shopping or optional tour                           |";
						cout << "\n\t\t|Day 6: Breakfast in bed + departure                                     |";
						cout << "\n\t\t|Iclusions: Beachfront villa, meals, tours, spa service                  |";
						cout << "\n\t\t--------------------------------------------------------------------------";
						cout << "\n\t\t|Price: \033[1;32mPhp 9,999/couple\033[0m                                                 |";
						cout << "\n\t\t==========================================================================";
						break;
					case 'E': 
						cout << "\n\t\t==========================================================================";
						cout << "\n\t\t|                      \033[1;33m4D3N Full Island Experience\033[0m                       |";
						cout << "\n\t\t==========================================================================";
						cout << "\n\t\t|Destinations: Romblon Island, Tablas, Sibuyan (Mt. Guiting-Guiting)     |";
						cout << "\n\t\t|Day 1: Arrival in Tablas + island briefing                              |";
						cout << "\n\t\t|Day 2: Trek to Guiting-Guiting foothills                                |";
						cout << "\n\t\t|Day 3: Visit waterfalls & river cruise                                  |";
						cout << "\n\t\t|Day 4: Island hopping, Bonbon & Alad                                    |";
						cout << "\n\t\t|Iclusions: Lodging, inter-island transfers, meals, local guide          |";
						cout << "\n\t\t--------------------------------------------------------------------------";
						cout << "\n\t\t|Price: \033[1;32mPhp 6,999/person\033[0m                                                 |";
						cout << "\n\t\t==========================================================================";
						break;
					default: cout << "Invalid Choice!!Resubmit the system."; break;
						
				}
		cout << "\n\n\t\tWould you like to view another promo? (Y/N): ";
        cin >> again;
        system ("cls");

			} while (again == 'Y' || again == 'y');
}

void menu3 () {
	char promo, again;
	    do{

			cout << "\n\t\t=====================================================================";
			cout << "\n\t\t|                           \033[1;34mTOUR PACKAGE\033[0m                            |";
			cout << "\n\t\t|A. 3D2N Puerto Princesa Getaway       D.4D3N Puerto Princesa to    |";
			cout << "\n\t\t|B. 3D2N Coron Starter Trip            El Nido Combo                |";
			cout << "\n\t\t|C. 4D3N El Nido Island Adventure      E. 5D4N Coron Explorer       |";  
			cout << "\n\t\t=====================================================================";
			cout << "\n\t\tView Travel Promo: ";
			cin >> promo;
			system("cls");
				switch (toupper(promo)){
					case 'A': 
						cout << "\n\t\t============================================================================";
						cout << "\n\t\t|                       \033[1;33m3D2N Puerto Princesa Getaway\033[0m                       |";
						cout << "\n\t\t============================================================================";
						cout << "\n\t\t|Destinations: Puerto Princesa City, Underground River                     |";
						cout << "\n\t\t|Day 1: Arrival + City Tour (Bakers Hill, Mitras Ranch, Crocodile Farm)    |";
						cout << "\n\t\t|Day 2: Underground River Tour + lunch by Sabang Beach                     |";
						cout << "\n\t\t|Day 3: Souvenir shopping + departure                                      |";
						cout << "\n\t\t|Iclusions: Hotel stay, breakfast, transfers, entrance fees                |";
						cout << "\n\t\t----------------------------------------------------------------------------";
						cout << "\n\t\t|Price: \033[1;32mPhp 4,499/person\033[0m                                                   |";
						cout << "\n\t\t============================================================================";
						break;
					case 'B': 
						cout << "\n\t\t============================================================================";
						cout << "\n\t\t|                        \033[1;33m3D2N Coron Starter Trip\033[0m                           |";
						cout << "\n\t\t============================================================================";
						cout << "\n\t\t|Destinations: Coron Town, Kayangan Lake, Maquinit Hot Spring              |";
						cout << "\n\t\t|Day 1: Arrival + Coron town orientation                                   |";
						cout << "\n\t\t|Day 2: Island hopping (Kayangan Lake, Twin Lagoon, Siete Pecados)         |";
						cout << "\n\t\t|Day 3: Morning at Maquinit Hot Spring + departure                         |";
						cout << "\n\t\t|Iclusions: Accommodation, tours, guide, meals                             |";
						cout << "\n\t\t----------------------------------------------------------------------------";
						cout << "\n\t\t|Price: \033[1;32mPhp 2,499/person\033[0m                                                   |";
						cout << "\n\t\t============================================================================";
						break;
					case 'C': 
						cout << "\n\t\t============================================================================";
						cout << "\n\t\t|                    \033[1;33m4D3N El Nido Island Adventure\033[0m                         |";
						cout << "\n\t\t============================================================================";
						cout << "\n\t\t|Destinations: El Nido (Big Lagoon, Secret Lagoon, Shimizu Island)         |";
						cout << "\n\t\t|Day 1: Arrival in El Nido + welcome dinner                                |";
						cout << "\n\t\t|Day 2: Island hopping (Tour A)                                            |";
						cout << "\n\t\t|Day 3: Hidden Beach + Matinloc Shrine + leisure time                      |";
						cout << "\n\t\t|Day 4: Breakfast + departure                                              |";
						cout << "\n\t\t|Iclusions: Hotel, meals, island fees, snorkeling gear                     |";
						cout << "\n\t\t----------------------------------------------------------------------------";
						cout << "\n\t\t|Price: \033[1;32mPhp 5,299/person\033[0m                                                   |";
						cout << "\n\t\t============================================================================";
						break;
					case 'D': 
						cout << "\n\t\t============================================================================";
						cout << "\n\t\t|                   \033[1;33m4D3N Puerto Princesa to El Nido Combo\033[0m                  |";
						cout << "\n\t\t============================================================================";
						cout << "\n\t\t|Destinations: Puerto Princesa, El Nido                                    |";
						cout << "\n\t\t|Day 1: Arrival in Puerto Princesa + City Tour                             |";
						cout << "\n\t\t|Day 2: Underground River + travel to El Nido                              |";
						cout << "\n\t\t|Day 3: Island hopping in El Nido (Tour B)                                 |";
						cout << "\n\t\t|Day 4: Departure from El Nido                                             |";
						cout << "\n\t\t|Iclusions: Transport, hotel, tours, meals                                 |";
						cout << "\n\t\t----------------------------------------------------------------------------";
						cout << "\n\t\t|Price: \033[1;32mPhp 6,499/person\033[0m                                                   |";
						cout << "\n\t\t============================================================================";
						break;
					case 'E': 
						cout << "\n\t\t============================================================================";
						cout << "\n\t\t|                          \033[1;33m5D4N Coron Explorer\033[0m                             |";
						cout << "\n\t\t============================================================================";
						cout << "\n\t\t|Destinations: Coron Island, Malcapuya Beach, Banana Island                |";
						cout << "\n\t\t|Day 1: Arrival in Coron + town tour                                       |";
						cout << "\n\t\t|Day 2: Kayangan Lake + Twin Lagoon + Siete Pecados                        |";
						cout << "\n\t\t|Day 3: Malcapuya Beach + Banana Island                                    |";
						cout << "\n\t\t|Day 4: Black Island + snorkeling                                          |";
						cout << "\n\t\t|Day 5: Breakfast + free time + departure                                  |";
						cout << "\n\t\t|Iclusions: Accommodation, tours, guide, meals                             |";
						cout << "\n\t\t----------------------------------------------------------------------------";
						cout << "\n\t\t|Price: \033[1;32mPhp 6,999/person\033[0m                                                   |";
						cout << "\n\t\t============================================================================";
						break;
					default: cout << "Invalid Choice!!Resubmit the system."; break;
						
				}
				
		cout << "\n\n\t\tWould you like to view another promo? (Y/N): ";
        cin >> again;
        system ("cls");

			} while (again == 'Y' || again == 'y');
}

void admincentre () {
	string password;
	
    int attempts = 0;
    const string correctPassword = "AdminPogi_2k25";

    while (attempts < 3) {
    	cout << "\n\t\t================================================================";
        cout << "\n\t\t| Enter password: "; cin >> password; 
        cout << "\t\t================================================================";

        if (password == correctPassword) {
            cout << "\n\n\t\t\033[32mAccess Granted!\n\033[0m" << endl;
            system("pause");
            break;
            
        } else {
            attempts++;
            cout << "\n\t\t\033[31mIncorrect password! Attempt " << attempts << " of 3.\033[0m" << endl;
        }

        if (attempts == 3) {
            cout << "\n\t\t\033[31mAccess Denied! Program will exit.\033[0m" << endl;
            logo_exit();
        }
    }
    system("cls");
    char again;
    do {
    	shortlogo();
    cout << "\n\t\t                      \033[33mWELCOME TO ADMIN CENTER\033[0m";
    cout << "\n\t\t   ================================================================";
    cout << "\n\t\t   |                       FILES ARCHIVES                         |";
    cout << "\n\t\t   | [0] Guest Receipt                      [2] Receipt Cash      |";
    cout << "\n\t\t   | [1] List of Guest                      [3] Receipt Card      |";
	cout << "\n\t\t   |                                        [4] Receipt Gcash     |";
    cout << "\n\t\t   ================================================================";
    int choice;
	cout << "\n\t\tEnter your choice: ";
	cin >> choice;
	string line;
		switch (choice) {
		    case 0:
		    	{
		        cout << "\n\t\tOpening Guest Receipt...";
			    ifstream oflfile("opisyalresibo.txt");
			
			    if (oflfile.is_open()) {
			        while (getline(oflfile, line)) {
			            cout << line << "\n";
			        }
			        oflfile.close();
			    }
			    else {
			        cout << "\n\t\t\033[31mUnable to open file\033[0m";
			    }
		        break;
		    }
		    case 2:
			{
		        cout << "\n\t\tOpening Guest Receipt...";
			    ifstream papelfile("salapi.txt");
			
			    if (papelfile.is_open()) {
			        while (getline(papelfile, line)) {
			            cout << line << "\n";
			        }
			        papelfile.close();
			    }
			    else {
			        cout << "\n\t\t\033[31mUnable to open file\033[0m";
			    }
		        break;
		    }
		
		    case 1:
		    	{
		        cout << "\n\t\tShowing List of Guests...";
			    ifstream listfile("listahan.txt");
			
			    if (listfile.is_open()) {
			        while (getline(listfile, line)) {
			            cout << line << "\n";
			        }
			        listfile.close();
			    }
			    else {
			        cout << "\n\t\t\033[31mUnable to open file\033[0m";
			    }
		        break;
		    }
		    case 3:{
			
		        cout << "\n\t\tOpening Card Receipts...";
			    ifstream ownerfile("bayadowner_receipt.txt");
			
			    if (ownerfile.is_open()) {
			        while (getline(ownerfile, line)) {
			            cout << line << '\n';
			        }
			        ownerfile.close();
			    }
			    else {
			        cout << "\n\t\t\033[31mUnable to open file\033[0m";
			    }
		        break;
		    }
		
		    case 4:{
		        cout << "\n\t\tOpening GCash Receipts...";
			    ifstream cashfile("gcash_receipt.txt");
			
			    if (cashfile.is_open()) {
			        while (getline(cashfile, line)) {
			            cout << line << '\n';
			        }
			        cashfile.close();
			    }
			    else {
			        cout << "\n\t\t\033[31mUnable to open file\033[0m";
			    }
		        break;
				}
				
		    default:
		        cout << "\n\t\t\033[31mInvalid choice. Please try again.\033[0m";
		        break;
		}
	cout << "\n\n\t\tWould you like to view another file? (Y/N): ";
        cin >> again;
        system ("cls");

			} while (again == 'Y' || again == 'y');
			
	logo_exit();
}	

void logo_exit1 () {
	
	cout << "\n\t\t  \033[1;32m-|-\033[0m                       \033[1;34m-====-\033[0m                   \033[1;34m-|-\033[0m        ";
	cout << "\n\t\t                         \033[1;34m..%@@@@@@%..\033[0m                           ";
	cout << "\n\t\t        \033[1;31m-|-\033[0m              \033[1;34m.@@=.  .=@@.\033[0m      \033[1;31m-|-\033[0m                  ";
	cout << "\n\t\t                         \033[1;34m.@@+.  .+@@.\033[0m                           ";
    cout << "\n\t\t                         \033[1;34m..#@@@@@@%..\033[0m               \033[1;33m-|-\033[0m         ";             
    cout << "\n\t\t                 \033[1;32m-|-\033[0m        \033[1;34m:#@@#:\033[0m                              ";                  
    cout << "\n\t\t      \033[1;34m-|-\033[0m             \033[1;34m.=@@---#@@#---@@=.\033[0m                        ";          
    cout << "\n\t\t                      \033[1;34m:@@@@@@@@@@@@@@@@:\033[0m       \033[1;32m-|-\033[0m              ";            
    cout << "\n\t\t    \033[1;33m-|-\033[0m                \033[1;34m.=-.  *@@*   -=.\033[0m                     \033[1;33m-|-\033[0m ";                                                
    cout << "\n\t\t================================================================";
	cout << "\n\t\t|                \033[1;31mMABUHAY, SALAMAT SA PAG-PARINI\033[0m                |";
	cout << "\n\t\t================================================================";	
	cout << "\n\t\t================================================================";
	cout << "\n\t\t|                      \033[1;33mBon Voyage a Dee\033[0m                        |";
	cout << "\n\t\t================================================================";
	cout << "\n\t\t\033[1;34m              .@@@=....      *@@*       ...-@@@.                ";    
    cout << "\n\t\t              .@-@@%#+      #@@@@#      +#%@@-@.                ";
	cout << "\n\t\t              .%. *@@@@%:::%@@@@@@@:::%@@@@* .%.                ";    
    cout << "\n\t\t                   .=@@@@@@@@@++@@@@@@@@@+.                     ";       
    cout << "\n\t\t                      .-=@@@@%--%@@@@=-.                        ";          
    cout << "\n\t\t                           #@@@@@@#                             ";
    cout << "\n\t\t                            .*@@*.                              ";
    cout << "\n\t\t                              --                         \033[0m";
	cout << "\n                                                                    ";
	cout << "\n\t\t                 Your Booking Has Been Scheduled                ";
	cout << "\n\t\t                 View your Receipt in your files                ";
	cout << "\n                                                                    ";
	cout << "\n\t\t\033[31mExit Program...\033[0m";
	cout << "\n\t\t...";
	cout << "\n\t\t...";
	cout << "\n\t\t...";
	exit (0);
	
}