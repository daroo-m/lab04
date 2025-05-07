#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    private:
        int accountNumber;
        string accountHolder;
        double balance;
    
    public:
        // Constructor to initialize the account
        BankAccount(int accNum, string holder, double initialBalance) {
            accountNumber = accNum;
            accountHolder = holder;
            balance = initialBalance;
        }
    
        // Function to deposit money
        void deposit(double amount) {
            balance += amount;
            cout << "Deposit successful! New balance: $" << balance << endl;
        }
    
        // Function to withdraw money
        void withdraw(double amount) {
            if (amount > balance) {
                cout << "Insufficient funds! Current balance: $" << balance << endl;
            } else {
                balance -= amount;
                cout << "Withdrawal successful! New balance: $" << balance << endl;
            }
        }
    
        // Function to return the current balance
        double getBalance() {
            return balance;
        }
    
        // Function to display account details
        void displayAccountDetails() {
            cout << "Account Number: " << accountNumber << endl;
            cout << "Account Holder: " << accountHolder << endl;
            cout << "Current Balance: $" << balance << endl;
        }
    };