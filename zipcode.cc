/**
 *   @file: zipcode.cc
 * @author: Easton Scowden
 *   @date: 09/30/2019
 *  @brief: A user enters a 5 digit zipcode and then a corresponding barcode is returned along with a check digit. The program also makes sure 
 * the user enters a valid zipcode, if not it will ask for another zipcode. The user can continuously enter zipcodes until they choose to quit.
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///function prototypes

string checkDigitBarCode(int checkDigit);
string getDigitCode(char digit) ; 
int getCheckDigitValue(int sum) ; 
int getSum(char number) ; 

int main() {
    int sumOfDigits = 0; 
    int count = 0;  
    char ch ; 
    bool tf = true ; 
    char yesNo = 'y' ;
    string barcode ; 

    cout << "Enter a zip code: " ;  
    
    
    while(tf == true){ 
        cin.get(ch) ;
        while(isspace(ch) == false){
            if(isdigit(ch) == true){
                barcode += getDigitCode(ch) + ' ' ; 
                sumOfDigits = sumOfDigits + getSum(ch) ;
                count ++ ;
                cin.get(ch) ; 
            } else {
                cout << "error invalid code." << endl ; 
                cin.ignore(200, '\n') ; 
                break ; 
            }
        }

        if (count == 5){
            cout << "| " + barcode ; 
            cout << checkDigitBarCode(getCheckDigitValue(sumOfDigits)) << " |" << endl ;
        } else {
            cout << "code must be 5 digits. " << endl ; 
        }

        cout << "Enter another zip code(y/n)?: " ;
        cin >> yesNo ;
        if(yesNo == 'y'){
            cin.ignore(200, '\n') ; 
            tf = true ; 
            count = 0 ;
            sumOfDigits = 0 ; 
            barcode = "" ; 
            cout << "Enter a zip code: " ; 
        } else if(yesNo == 'n'){
            tf = false ; 
            return 0 ; 
        }
    }
        
     
    return 0;
}

string getDigitCode(char digit){  
    if(digit == '0'){
        return "||:::" ;
    } else if(digit == '1'){
        return ":::||" ;
    } else if(digit == '2'){
        return "::||:" ; 
    } else if(digit == '3'){
        return "::||:" ;  
    } else if(digit == '4'){
        return ":|::|" ; 
    } else if(digit == '5'){
        return ":|:|:" ; 
    } else if(digit == '6'){
        return ":||::" ;  
    } else if(digit == '7'){
        return "|:::|" ; 
    } else if(digit == '8'){
        return "|::|:" ;  
    } else if(digit == '9'){
        return "|:|::" ; 
    } else {
        return 0 ; 
    } 
}

int getSum(char number){
    if(number == '1'){
        return 1 ; 
    }else if(number == '2'){
        return 2 ;  
    } else if(number == '3'){
        return 3 ; 
    } else if(number == '4'){
        return 4 ;  
    } else if(number == '5'){
        return 5 ; 
    } else if(number == '6'){
        return 6 ;  
    } else if(number == '7'){
        return 7 ;  
    } else if(number == '8'){
        return 8 ;  
    } else if(number == '9'){
        return 9 ;  
    } else if(number == '0'){
        return 0 ; 
    } 
    return 0 ; 
} 

int getCheckDigitValue(int sum) {
    sum = 10 - (sum % 10) ;
    return sum ; 
}

string checkDigitBarCode(int checkDigit){
    if(checkDigit == 0){
        return "||:::" ;
    } else if(checkDigit == 1){
        return ":::||" ;
    } else if(checkDigit == 2){
        return "::||:" ;  
    } else if(checkDigit == 3){
        return "::||:" ;  
    } else if(checkDigit == 4){
        return ":|::|" ;  
    } else if(checkDigit == 5){
        return ":|:|:" ; 
    } else if(checkDigit == 6){
        return ":||::" ; 
    } else if(checkDigit == 7){
        return "|:::|" ;  
    } else if(checkDigit == 8){
        return "|::|:" ; 
    } else if(checkDigit == 9){
        return "|:|::" ;  
    } else {
        return 0 ; 
    } 
} 