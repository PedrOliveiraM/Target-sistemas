// Escreva um programa que inverta os caracteres de um string.
// a) Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;
// b) Evite usar funções prontas, como, por exemplo, reverse;

#include <iostream>

int main()
{
    // receber essa string

    std::string str;
    std::string strInvertida = "";

    std::cout << "Digite uma string: ";
    std::getline(std::cin, str);

    if (str.empty())
    {
        std::cout << "String vazia" << std::endl;
        return 0;
    }
    else if (str.size() == 1)
    {
        std::cout << "String invertida: " << str << std::endl;
        return 0;
    }
    else
    {
        int tamanho = str.size();
        for (int i = tamanho - 1; i >= 0; i--)
        {
            strInvertida += str[i];
        }
    }

    std::cout << "String: "<< str << std::endl;
    //string invertida
    std::cout << "String invertida: "<< strInvertida << std::endl;
}