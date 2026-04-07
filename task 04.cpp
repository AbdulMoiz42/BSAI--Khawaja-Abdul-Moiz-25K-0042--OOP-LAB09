//Task 04
//Problem: An e-commerce platform aims to support multiple payment methods (credit
//cards, digital wallets) to attract global customers. The payment system must validate
//transactions securely and allow new payment options (e.g., cryptocurrency) to be added
//without rewriting existing code.
//Classes and Structure:
//• Abstract Class PaymentMethod:
//o Member Function:
//▪ processPayment(double amount): Pure virtual function to handle
//transactions.
//• Derived Class CreditCard:
//o Data Members:
//▪ WalletNumber (string): Stores the card number.
//o Implements processPayment() to validate and process payments.
//• Derived Class DigitalWallet:
//o Data Members:
//▪ balance (double): Tracks available funds.
//o Implements processPayment() to deduct balance.
//
//Flow:
//• Create CreditCard and DigitalWallet objects.
//• Simulate payments and check for success/failure.
#include<iostream>
using namespace std;
class PaymentMethod{

    double amount;

    public:
    
    PaymentMethod(double a): amount(a){}
    virtual void processPayment(double amount) =0;

};
class CreditCard:public PaymentMethod{
    private: 
    string WalletNumber;
    double currentBalance;
    public:
    CreditCard(string cn, double cb,double a): WalletNumber(cn), currentBalance(cb) ,PaymentMethod(a){}
     void processPayment(double amount) override{

        if (currentBalance>= amount)
        {
            cout<<"payment successful"<<endl;
        }
        else{
            cout<<"Payment failure"<<endl;
        }
     }




};
class DigitalWallet:public PaymentMethod{
    private: 
    string WalletNumber;
    double currentBalance;
    public:
    DigitalWallet(string cn, double cb,double a): WalletNumber(cn), currentBalance(cb) ,PaymentMethod(a){}
     void processPayment(double amount) override{

        if (currentBalance>= amount)
        {
            cout<<"payment successful"<<endl;
        }
        else{
            cout<<"Payment failure"<<endl;
        }
     }




};
int main()
{
    CreditCard c1("3345563",6000,1000);

    c1.processPayment(7000);
}