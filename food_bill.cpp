#include <iostream>
#include <string>

using namespace std;

// Function to display the menu options
void displayMenu() {
    cout << "------- Menu -------" << endl;
    cout << "1) Pizzas" << endl;
    cout << "2) Burgers" << endl;
    cout << "3) Sandwiches" << endl;
    cout << "4) Rolls" << endl;
    cout << "5) Biryani" << endl;
}

int main() {
    string customerName;
    int choice, foodChoice, quantity;
    char continueOrder;

    // Get customer's name
    cout << "Enter your name: ";
    getline(cin, customerName);

    double totalBill = 0.0;

    do {
        // Display the menu options
        displayMenu();

        // Get user's choice
        cout << "Please Enter your Choice: ";
        cin >> choice;

        // Variables to store the chosen food item and its price
        string itemName;
        double itemPrice;

        // Switch-case statement to assign food items based on user's choice
        switch (choice) {
            case 1: // Pizzas
                cout << "1) Margherita Pizza Rs.300" << endl;
                cout << "2) Pepperoni Pizza Rs.350" << endl;
                cout << "3) Vegetarian Pizza Rs.280" << endl;
                break;
            case 2: // Burgers
                cout << "1) Classic Burger Rs.150" << endl;
                cout << "2) Cheeseburger Rs.180" << endl;
                cout << "3) Chicken Burger Rs.200" << endl;
                break;
            case 3: // Sandwiches
                cout << "1) Club Sandwich Rs.240" << endl;
                cout << "2) Veg. Crispy Sandwich Rs.160" << endl;
                cout << "3) Extreme Veg Sandwich Rs.100" << endl;
                break;
            case 4: // Rolls
                cout << "1) Chicken Roll Rs.200" << endl;
                cout << "2) Veg Roll Rs.150" << endl;
                cout << "3) Paneer Roll Rs.180" << endl;
                break;
            case 5: // Biryani
                cout << "1) Chicken Biryani Rs.250" << endl;
                cout << "2) Veg Biryani Rs.200" << endl;
                cout << "3) Shrimp Biryani Rs.300" << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
                continue; // Skip to next iteration of the loop
        }

        // Get user's food choice
        cout << "Please Enter which item you would like to have? ";
        cin >> foodChoice;

        // Get quantity
        cout << "Please Enter Quantity: ";
        cin >> quantity;

        // Assign the chosen food item and its price based on user's input
        switch (choice) {
            case 1: // Pizzas
                switch (foodChoice) {
                    case 1:
                        itemName = "Margherita Pizza";
                        itemPrice = 300;
                        break;
                    case 2:
                        itemName = "Pepperoni Pizza";
                        itemPrice = 350;
                        break;
                    case 3:
                        itemName = "Vegetarian Pizza";
                        itemPrice = 280;
                        break;
                }
                break;
            case 2: // Burgers
                switch (foodChoice) {
                    case 1:
                        itemName = "Classic Burger";
                        itemPrice = 150;
                        break;
                    case 2:
                        itemName = "Cheeseburger";
                        itemPrice = 180;
                        break;
                    case 3:
                        itemName = "Chicken Burger";
                        itemPrice = 200;
                        break;
                }
                break;
            case 3: // Sandwiches
                switch (foodChoice) {
                    case 1:
                        itemName = "Club Sandwich";
                        itemPrice = 240;
                        break;
                    case 2:
                        itemName = "Veg. Crispy Sandwich";
                        itemPrice = 160;
                        break;
                    case 3:
                        itemName = "Extreme Veg Sandwich";
                        itemPrice = 100;
                        break;
                }
                break;
            case 4: // Rolls
                switch (foodChoice) {
                    case 1:
                        itemName = "Chicken Roll";
                        itemPrice = 200;
                        break;
                    case 2:
                        itemName = "Veg Roll";
                        itemPrice = 150;
                        break;
                    case 3:
                        itemName = "Paneer Roll";
                        itemPrice = 180;
                        break;
                }
                break;
            case 5: // Biryani
                switch (foodChoice) {
                    case 1:
                        itemName = "Chicken Biryani";
                        itemPrice = 250;
                        break;
                    case 2:
                        itemName = "Veg Biryani";
                        itemPrice = 200;
                        break;
                    case 3:
                        itemName = "Shrimp Biryani";
                        itemPrice = 300;
                        break;
                }
                break;
        }

        // Calculate total price for the current order
        double totalPrice = itemPrice * quantity;
        totalBill += totalPrice;

        // Display bill for the current order
        cout << "Bill for " << quantity << " " << itemName << ": Rs." << totalPrice << endl;

        // Ask if the user wants to continue
        cout << "Do you want to continue ordering? (y/n): ";
        cin >> continueOrder;
    } while (continueOrder == 'y' || continueOrder == 'Y');

    // Display total bill
    cout << "Total Bill: Rs." << totalBill << endl;
    cout << "Thank you for ordering, " << customerName << "!" << endl;

    return 0;
}


