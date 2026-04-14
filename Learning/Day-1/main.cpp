#include <iostream>
#include <string>
// Salom!..Men bu kodni 14.04.2026y 14:44 da yozdim..Va o'rganyapman C++ ni gemini bilan..
// Hello!..I wrote this code on 14.04.2026 at 14:44..And I am learning C++ with gemini..
int main() {
    std::string ism;
    int tugilgan_yil, hozirgi_yil = 2026;
    std::cout << "Assalomu alaykum! Ismingiz nima? ";
    std::cin >> ism; 
    std::cout << "Siz nechanchi yilda tug'ilgansiz? ";
    std::cin >> tugilgan_yil; 
    int yosh = hozirgi_yil - tugilgan_yil;
    std::cout << "\n--- Natija ---" << std::endl;
    std::cout << "Hurmatli " << ism << ", siz hozir " << yosh << " yoshdasiz!" << std::endl;
    return 0;
}