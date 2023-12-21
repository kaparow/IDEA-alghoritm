// Proiect_SC.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "IDEA.h"
#include <string>
#include <iomanip>



string IDEA_EncryptString(const std::string& input) {
    IDEA ideatest = IDEA();
    ideatest.setMessage(input);
    ideatest.setKey("ZZZZefghijklmnop");
    string ideaencr = ideatest.encrypt();
    return ideaencr;
}
string IDEA_DecryptString(const std::string& input) {
    IDEA ideatest = IDEA();
    ideatest.setMessage(input);
    ideatest.setKey("ZZZZefghijklmnop");
    string ideadecr = ideatest.decrypt(input);
    return ideadecr;
}


int main() {
    std::cout << "Введите сообщение: ";
    string input;
    getline(cin, input);
    std::cout << "Original: " << input << std::endl;
    std::string encryptedString = IDEA_EncryptString(input);
    std::cout << "Encrypted: " << encryptedString << std::endl;
    std::string decryptedString = IDEA_DecryptString(encryptedString);
    std::cout << "Decrypted: " << decryptedString << std::endl;
    return 0;
    //Only инглиш

}
