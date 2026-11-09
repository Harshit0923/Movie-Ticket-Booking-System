#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class Movie {
public:
 string movieName;
 Movie(string name = "") {
 movieName = name;
 }
 void displayMovies() {
 cout << "1. Avengers: Endgame" << endl;
 cout << "2. Interstellar" << endl;
 cout << "3. Spider-Man: No Way Home" << endl;
 }
 void displayShows() {
 cout << "1. 10:00 AM" << endl;
 cout << "2. 2:00 PM" << endl;
 cout << "3. 6:00 PM" << endl;
 cout << "4. 9:00 PM" << endl;
 }
};
Booking class – data members and input validation
class Booking {
private:
 string customerName, movieName, showTime, category;
 int ticketCount, bookingID;
 double price, total;
public:
 Booking() {
 ticketCount = 0;
 bookingID = 1001;
 price = 0.0;
 total = 0.0;
 }
CHANDIGARH UNIVERSITY
MOVIE TICKET BOOKING SYSTEM – CASE STUDY
 bool input() {
 int movieChoice, showChoice, categoryChoice;
 cout << "Enter customer name: ";
 getline(cin, customerName);
 if (customerName.empty()) {
 cout << "Error: Customer name cannot be empty." << endl;
 return false;
 }
 cout << "\\nAvailable Movies\\n";
 cout << "1. Avengers: Endgame\\n";
 cout << "2. Interstellar\\n";
 cout << "3. Spider-Man: No Way Home\\n";
 cout << "Select movie (1-3): ";
 if (!(cin >> movieChoice) || movieChoice < 1 || movieChoice > 3) {
 cout << "Error: Invalid movie choice." << endl;
 return false;
 }
 if (movieChoice == 1) movieName = "Avengers: Endgame";
 else if (movieChoice == 2) movieName = "Interstellar";
 else movieName = "Spider-Man: No Way Home";
 cout << "\\nShow Timings\\n";
 cout << "1. 10:00 AM\\n2. 2:00 PM\\n";
 cout << "3. 6:00 PM\\n4. 9:00 PM\\n";
 cout << "Select show (1-4): ";
 if (!(cin >> showChoice) || showChoice < 1 || showChoice > 4) {
 cout << "Error: Invalid show choice." << endl;
 return false;
 }
 string shows[] = {"10:00 AM", "2:00 PM",
 "6:00 PM", "9:00 PM"};
 showTime = shows[showChoice - 1];
 cout << "\\nTicket Categories\\n";
 cout << "1. Silver - Rs. 150\\n";
 cout << "2. Gold - Rs. 220\\n";
 cout << "3. Platinum - Rs. 300\\n";
CHANDIGARH UNIVERSITY
MOVIE TICKET BOOKING SYSTEM – CASE STUDY
 cout << "Select category (1-3): ";
 if (!(cin >> categoryChoice) ||
 categoryChoice < 1 || categoryChoice > 3) {
 cout << "Error: Invalid ticket category." << endl;
 return false;
 }
 if (categoryChoice == 1) {
 category = "Silver";
 price = 150.00;
 } else if (categoryChoice == 2) {
 category = "Gold";
 price = 220.00;
 } else {
 category = "Platinum";
 price = 300.00;
 }
 cout << "Enter number of tickets (1-10): ";
 if (!(cin >> ticketCount) ||
 ticketCount < 1 || ticketCount > 10) {
 cout << "Error: Ticket quantity must be from 1 to 10."
 << endl;
 return false;
 }
 return true;
 }
Booking class – calculation and ticket display
 void calculateTotal() {
 total = price * ticketCount;
 }
 void displayTicket() {
 cout << fixed << setprecision(2);
 cout << "\\n===== MOVIE TICKET =====" << endl;
 cout << "Booking ID: " << bookingID << endl;
 cout << "Customer Name: " << customerName << endl;
 cout << "Movie: " << movieName << endl;
 cout << "Show Time: " << showTime << endl;
 cout << "Ticket Category: " << category << endl;
 cout << "Number of Tickets: " << ticketCount << endl;
CHANDIGARH UNIVERSITY
MOVIE TICKET BOOKING SYSTEM – CASE STUDY
 cout << "Price per Ticket: Rs. " << price << endl;
 cout << "Total Amount: Rs. " << total << endl;
 cout << "Booking Status: Confirmed" << endl;
 cout << "========================" << endl;
 }
};
int main() {
 Booking b;
 if (!b.input()) {
 return 1;
 }
 b.calculateTotal();
 b.displayTicket();
 return 0;
}