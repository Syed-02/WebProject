#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Function to convert length
void convertLength() {
    double value;
    string fromUnit, toUnit;
    cout << "Enter value: ";
    cin >> value;
    cout << "Convert from (m/ft/cm/mm): ";
    cin >> fromUnit;
    cout << "Convert to (m/ft/cm/mm): ";
    cin >> toUnit;

    if (fromUnit == "m" && toUnit == "ft") {
        cout << "Converted Value: " << value * 3.28084 << " ft" << endl;
    } else if (fromUnit == "ft" && toUnit == "m") {
        cout << "Converted Value: " << value / 3.28084 << " m" << endl;
    } else if (fromUnit == "m" && toUnit == "cm") {
        cout << "Converted Value: " << value * 100 << " cm" << endl;
    } else if (fromUnit == "cm" && toUnit == "m") {
        cout << "Converted Value: " << value / 100 << " m" << endl;
    } else if (fromUnit == "m" && toUnit == "mm") {
        cout << "Converted Value: " << value * 1000 << " mm" << endl;
    } else if (fromUnit == "mm" && toUnit == "m") {
        cout << "Converted Value: " << value / 1000 << " m" << endl;
    } else {
        cout << "Conversion not supported." << endl;
    }
}

// Function to convert mass
void convertMass() {
    double value;
    string fromUnit, toUnit;
    cout << "Enter value: ";
    cin >> value;
    cout << "Convert from (kg/lb/g/mg): ";
    cin >> fromUnit;
    cout << "Convert to (kg/lb/g/mg): ";
    cin >> toUnit;

    if (fromUnit == "kg" && toUnit == "lb") {
        cout << "Converted Value: " << value * 2.20462 << " lb" << endl;
    } else if (fromUnit == "lb" && toUnit == "kg") {
        cout << "Converted Value: " << value / 2.20462 << " kg" << endl;
    } else if (fromUnit == "kg" && toUnit == "g") {
        cout << "Converted Value: " << value * 1000 << " g" << endl;
    } else if (fromUnit == "g" && toUnit == "kg") {
        cout << "Converted Value: " << value / 1000 << " kg" << endl;
    } else if (fromUnit == "g" && toUnit == "mg") {
        cout << "Converted Value: " << value * 1000 << " mg" << endl;
    } else if (fromUnit == "mg" && toUnit == "g") {
        cout << "Converted Value: " << value / 1000 << " g" << endl;
    } else {
        cout << "Conversion not supported." << endl;
    }
}

// Function to convert temperature
void convertTemperature() {
    double value;
    string fromUnit, toUnit;
    cout << "Enter value: ";
    cin >> value;
    cout << "Convert from (C/F/K): ";
    cin >> fromUnit;
    cout << "Convert to (C/F/K): ";
    cin >> toUnit;

    if (fromUnit == "C" && toUnit == "F") {
        cout << "Converted Value: " << (value * 9 / 5) + 32 << " F" << endl;
    } else if (fromUnit == "F" && toUnit == "C") {
        cout << "Converted Value: " << (value - 32) * 5 / 9 << " C" << endl;
    } else if (fromUnit == "C" && toUnit == "K") {
        cout << "Converted Value: " << value + 273.15 << " K" << endl;
    } else if (fromUnit == "K" && toUnit == "C") {
        cout << "Converted Value: " << value - 273.15 << " C" << endl;
    } else if (fromUnit == "F" && toUnit == "K") {
        cout << "Converted Value: " << ((value - 32) * 5 / 9) + 273.15 << " K" << endl;
    } else if (fromUnit == "K" && toUnit == "F") {
        cout << "Converted Value: " << ((value - 273.15) * 9 / 5) + 32 << " F" << endl;
    } else {
        cout << "Conversion not supported." << endl;
    }
}

int main() {
    int choice;
    do {
        cout << "Engineering Unit Converter" << endl;
        cout << "1. Length" << endl;
        cout << "2. Mass" << endl;
        cout << "3. Temperature" << endl;
        cout << "4. Exit" << endl;
        cout << "Select conversion type: ";
        cin >> choice;

        switch (choice) {
            case 1:
                convertLength();
                break;
            case 2:
                convertMass();
                break;
            case 3:
                convertTemperature();
                break;
            case 4:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
        cout << endl;
    } while (choice != 4);

    return 0;
}



