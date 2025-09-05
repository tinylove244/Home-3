#include <iostream>
#include <string>
using namespace std;

// This class represents the real-world vehicle entity with attributes and methods
class Vehicle {
private:  //encapsulation
    // Attributes
    string type;
    string brand;
    int maxSpeed;
    string fuelType;
public:
    // Constructor
    Vehicle(string type, string brand, int maxSpeed, string fuelType) {
        this->type = type;
        this->maxSpeed = maxSpeed;
        this->fuelType = fuelType;
        this->brand = brand;
    }

    // Getter methods
    string getType() {
        return type;
    }

    string getBrand() {
        return brand;
    }

    int getMaxSpeed() {
        return maxSpeed;
    }

    string getFuelType() {
        return fuelType;
    }

    // Method to simulate acceleration
    void accelerate() {
        cout << "The " << type << " is accelerating to " << maxSpeed << " km/h." << endl;
    }

    // Method to display vehicle information
    void displayInfo() {
        cout << "Vehicle Type: " << type << endl;
        cout << "Brand: " << brand << endl;
        cout << "Max Speed: " << maxSpeed << " km/h" << endl;
        cout << "Fuel Type: " << fuelType << endl;
    }
};

int main() {
    // Predefined vehicles
    Vehicle car("Car", "Toyota", 180, "Petrol");
    Vehicle truck("Truck", "Ford", 120, "Diesel");
    Vehicle motorcycle("Motorcycle", "Harley-Davidson", 200, "Petrol");

    // Demonstration
    car.accelerate();
    truck.accelerate();
    motorcycle.accelerate();

    // Display information
    cout << endl << "Information of available vehicles:" << endl;
    car.displayInfo();
    cout << endl;
    truck.displayInfo();
    cout << endl;
    motorcycle.displayInfo();
    cout << endl;

    // Input from user
    cout << "Do you want to enter a new vehicle? (y/n): ";
    string response; cin >> response;
    if (response != "y") {
        cout << "Thank you! Exiting the program." << endl; 
        // Exit if user does not want to enter a new vehicle
    }
    else {// If user wants to enter a new vehicle
        string type, brand, fuelType;
        int maxSpeed;

        // Get user input(have some example inputs)
        cout << "Enter vehicle type(e.g., Car, Truck, Motorcycle): ";
        cin >> type;
        cout << "Enter brand:(e.g., Toyota, Ford, Harley-Davidson): ";
        cin >> brand;
        cout << "Enter max speed (km/h): ";
        cin >> maxSpeed;
        cout << "Enter fuel type (e.g., Petrol, Diesel, Electric): ";
        cin >> fuelType;
        Vehicle userVehicle(type, brand, maxSpeed, fuelType);

        // Display user vehicle information
        cout << endl << "Your vehicle is created successfully!" << endl;
        userVehicle.accelerate();
        cout << endl << "Information of your vehicle:" << endl;
        userVehicle.displayInfo();
        cout << endl << "Thank you! Exiting the program." << endl;
    }
    
    return 0;
}
