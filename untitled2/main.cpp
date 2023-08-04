#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::fstream text;
    std::string path_user;
    std::cout<<"Enter the full path to the file using a double slash"
               "(for example, C:\\\\Users\\\\words.txt)"<<std::endl;
    std::cin>>path_user;
    text.open(path_user);
   if (text.is_open()==0) {
       std::cout<<"Path no valid!";
       return 0;
   }

    std::string str, strh;
    while (!text.eof()) {
        getline(text, strh);
        str += strh;
        if (!text.eof()){
            str += '\n';
        }
    }
    std::cout<<str;

    text.close();
}
