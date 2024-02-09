#include <iostream>
#include <iomanip>
#include <limits>

// Employee Salary Calculator

int main() {
    // Create double pointers to dynamic memory
    // Obtain from the user with input validation
    double* standardHoursWorked = new double;
    double* rateOfPay = new double;
    double* overtimeHours = new double;

    while (true) {
        std::cout << "Enter standard hours worked: ";
        if (std::cin >> *standardHoursWorked && *standardHoursWorked >= 0) {
            break;
        } else {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter a valid non-negative number." << std::endl;
        }
    }

    while (true) {
        std::cout << "Enter rate of pay: ";
        if (std::cin >> *rateOfPay && *rateOfPay >= 0) {
            break;
        } else {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter a valid non-negative number." << std::endl;
        }
    }

    while (true) {
        std::cout << "Enter overtime hours (if applicable): ";
        if (std::cin >> *overtimeHours && *overtimeHours >= 0) {
            break;
        } else {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter a valid non-negative number." << std::endl;
        }
    }

    if (*rateOfPay == 0 || *standardHoursWorked == 0) {
        std::cout << "Cannot calculate pay with zero rate of pay or zero standard hours worked." << std::endl;
        delete standardHoursWorked;
        delete rateOfPay;
        delete overtimeHours;
        return 1;
    }

    // Calculate appropriate pay for standard hours and overtime
    double* standardPay = new double;
    double* overtimePay = new double;
    double* totalPay = new double;

    *standardPay = *standardHoursWorked * *rateOfPay;
    *overtimePay = *overtimeHours * (1.5 * *rateOfPay);
    *totalPay = *standardPay + *overtimePay;

    // Display pay details
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Pay details:" << std::endl;
    std::cout << std::setw(30) << std::left << "Standard pay: $" << std::setw(3) << std::right
    << *standardPay << std::endl;
    std::cout << std::setw(30) << std::left << "Overtime pay: $" << std::setw(3) << std::right
    << *overtimePay << std::endl;
    std::cout << std::setw(30) << std::left << "Total pay: $" << std::setw(3) << std::right
    << *totalPay << std::endl;

    // Display contents of variables
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Contents of variables:" << std::endl;
    std::cout << std::setw(30) << std::left << "standardHoursWork:" << std::setw(5) << std::right
    << std::fixed << *standardHoursWorked << std::endl;
    std::cout << std::setw(30) << std::left << "rateOfPay:" << std::setw(5) << std::right
    << std::fixed << *rateOfPay << std::endl;
    std::cout << std::setw(30) << std::left << "overtimeHours:" << std::setw(5) << std::right
    << std::fixed << *overtimeHours << std::endl;
    std::cout << std::setw(30) << std::left << "standardPay:" << std::setw(5) << std::right
    << std::fixed << *standardPay << std::endl;
    std::cout << std::setw(30) << std::left << "overtimePay:" << std::setw(5) << std::right
    << std::fixed << *overtimePay << std::endl;
    std::cout << std::setw(30) << std::left << "totalPay:" << std::setw(5) << std::right
    << std::fixed << *totalPay << std::endl;

    // Display contents of pointers
    std::cout << "Contents of pointers:" << std::endl;
    std::cout << std::setw(30) << std::left << "Pointer to standardHoursWork:" << std::setw(5) << std::right
    << standardHoursWorked << std::endl;
    std::cout << std::setw(30) << std::left << "Pointer to rateOfPay:" << std::setw(5) << std::right
    << rateOfPay << std::endl;
    std::cout << std::setw(30) << std::left << "Pointer to overtimeHours:" << std::setw(5) << std::right
    << overtimeHours << std::endl;
    std::cout << std::setw(30) << std::left << "Pointer to standardPay:" << std::setw(5) << std::right
    << standardPay << std::endl;
    std::cout << std::setw(30) << std::left << "Pointer to overtimePay:" << std::setw(5) << std::right
    << overtimePay << std::endl;
    std::cout << std::setw(30) << std::left << "Pointer to totalPay:" << std::setw(5) << std::right
    << totalPay << std::endl;

    // Clean up dynamic memory
    delete standardHoursWorked;
    delete rateOfPay;
    delete overtimeHours;
    delete standardPay;
    delete overtimePay;
    delete totalPay;
    return 0;
}
