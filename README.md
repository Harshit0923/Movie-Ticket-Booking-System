# 🎬 Movie Ticket Booking System

A console-based **Movie Ticket Booking System** developed using C++ as an Object-Oriented Programming (OOP) project.

The program allows customers to book movie tickets by selecting their preferred movie, show timing, ticket category, and number of tickets.

## ✨ Features

- Display available movies.
- Select preferred movie show timings.
- Choose ticket categories (Silver, Gold, Platinum).
- Enter customer details.
- Validate user inputs.
- Automatically calculate the total ticket price.
- Generate a booking confirmation with a unique booking ID.

## 🎥 Available Movies

1. Avengers: Endgame
2. Interstellar
3. Spider-Man: No Way Home

## 🕒 Show Timings

- 10:00 AM
- 2:00 PM
- 6:00 PM
- 9:00 PM

## 🎟️ Ticket Categories

| Category | Price |
|---|---:|
| Silver | ₹150 |
| Gold | ₹220 |
| Platinum | ₹300 |

## 🛠️ Technologies Used

- **Programming Language:** C++
- **Concepts:** Object-Oriented Programming
- **Libraries:** iostream, iomanip, string

## 📚 OOP Concepts Used

- **Classes and Objects:** Used `Movie` and `Booking` classes to organize the program.
- **Encapsulation:** Booking data members are declared private.
- **Constructors:** Used to initialize booking details and default values.
- **Member Functions:** Used for input, calculations, and ticket display.
- **Abstraction:** Booking operations are handled through class member functions.

## 🚀 How to Run

1. Clone this repository:

   ```bash
   git clone YOUR_REPOSITORY_LINK
   ```

2. Open the project folder.

3. Compile the C++ program:

   ```bash
   g++ main.cpp -o MovieBooking
   ```

4. Run the program:

   ```bash
   ./MovieBooking
   ```

   On Windows:

   ```bash
   MovieBooking.exe
   ```

## 🧮 Total Price Calculation

The total booking amount is calculated using:

**Total Amount = Ticket Price × Number of Tickets**

Example:

- Category: Gold
- Price per ticket: ₹220
- Number of tickets: 3
- Total Amount: ₹660

## 🎫 Sample Output

```text
===== MOVIE TICKET =====
Booking ID: 1001
Customer Name: Harshit
Movie: Interstellar
Show Time: 6:00 PM
Ticket Category: Gold
Number of Tickets: 3
Price per Ticket: Rs. 220.00
Total Amount: Rs. 660.00
Booking Status: Confirmed
========================
```

## 🔮 Future Improvements

- Add multiple customer bookings.
- Generate unique booking IDs for every booking.
- Add seat selection functionality.
- Integrate a payment system.
- Store booking records using file handling.
- Add a graphical user interface.

## 👨‍💻 Project Information

**Project Name:** Movie Ticket Booking System  
**Language:** C++  
**Project Type:** OOPS Mini Project  
**University:** Chandigarh University

---

⭐ If you find this project useful, consider giving the repository a star!
