#include <iostream>
#include <string>



int main()
{
    std::string text = " bottles of beer on the wall, ";
    std::string text1 = " bottles of beer.";
    std::string text2 = "Take one down and pess it around, ";
 

    std::string text3 = " bottle of beer.";
    std::string text4 = "Take one down and pess it around, one more bottles of beer on the wall.";

    std::string text5 = "No more bottles of beer on the wall, no more bottles of beer.";
    std::string text6 = "Go to the store and buy some more,";
    std::string text7 = " bottles of beer on the wall.";

    for (int i = 99; i > 1;  i --) {
     

    std::cout << i << text << i << text1 <<"\n";
    std::cout <<  text2 << i-1 << text <<"\n";
    std::cout <<  "\n";

   }

    std::cout << "1" << text << "1" << text3 << "\n";
    std::cout <<  text4 << "\n";
    std::cout <<  text5 << "\n";
    std::cout << text6 << " 99" << text7 << "\n";



}
