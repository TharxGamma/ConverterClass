#include <iostream>
#include <string>

class Converter
{
public:

    Converter();
    Converter(char Hex);


    int HexToInteger(char Hex);
    std::string IntegerToHex(int Integer);
    std::string IntegerToBinary(int Input);

    std::string GetHexValue() { return Hex; }
    int GetIntegerValue() { return Integer; }
    std::string GetBinaryValue() { return Binary; }

private:

    int Integer{};
    std::string Hex{};
    std::string Binary{};

};

Converter::Converter()
{

}

Converter::Converter(char InputHex)
{
    this->Integer = HexToInteger(InputHex); 
} 


int Converter::HexToInteger(char Hex)
{
   switch (Hex)
   {
    case '0':
    {
        int Zero = 0;
        return Zero;
    }


    case '1':
    {
        int One = 1;
        return One;
    }

    case '2':
    {
        int Two = 2;
        return Two;
    }

    case '3':
    {
        int Three = 3;
        return Three;
    }

    case '4':
    {
        int Four = 4;
        return Four;
    }

    case '5':
    {
        int Five = 5;
        return Five;
    }

    case '6':
    {
        int Six = 6;
        return Six;
    }

    case '7':
    {
        int Seven = 7;
        return Seven;
    }

    case '8':
    {
        int Eight = 8;
        return Eight;
    }

    case '9':
    {
        int Nine = 9;
        return Nine;
    }

    case 'a':
    {
        int Ten = 10;
        return Ten;
    }

    case 'b':
    {
        int Eleven = 11;
        return Eleven;
    }

    case 'c':
    {
        int Twelve = 12;
        return Twelve;
    }

    case 'd':
    {
        int Thirteen = 13;
        return Thirteen;
    }

    case 'e':
    {
        int Fourteen = 14;
        return Fourteen;
    }

    case 'f':
    {
        int Fithteen = 15;
        return Fithteen;
    }

    default:
        std::cout << "No suitable conversions" << std::endl;
   }

}

std::string Converter::IntegerToHex(int Integer)
{
    switch (Integer)
    {
    case 0:
    {
        std::string Zero = "0";
        return Zero;
    }

    case 1:
    {
        std::string One = "1";
        return One;
    }

    case 2:
    {
        std::string Two = "2";
        return Two;
    }

    case 3:
    {
        std::string Three = "3";
        return Three;
    }

    case 4:
    {
        std::string Four = "4";
        return Four;
    }

    case 5:
    {
        std::string Five = "5";
        return Five;
    }

    case 6:
    {
        std::string Six = "6";
        return Six;
    }

    case 7:
    {
        std::string Seven = "7";
        return Seven;
    }

    case 8:
    {
        std::string Eight = "8";
        return Eight;
    }

    case 9:
    {
        std::string Nine = "9";
        return Nine;
    }

    case 10:
    {
        std::string A = "A";
        return A;
    }

    case 11:
    {
        std::string B = "B";
        return B;
    }

    case 12:
    {
        std::string C = "C";
        return C;
    }

    case 13:
    {
        std::string D = "D";
        return D;
    }

    case 14:
    {
        std::string E = "E";
        return E;
    }

    case 15:
    {
        std::string F = "F";
        return F;
    }
    default:
        std::cout << "No suitable conversions" << std::endl;
    }

}

std::string Converter::IntegerToBinary(int Input)
{
    int RemainderArray[8] = { 0 };
    int SizeOfArray = sizeof(RemainderArray) / sizeof(int);
    std::string BinaryString{};

    for (int i = 0; Input > 0; i++)
    {
        RemainderArray[i] = Input % 2;

        Input = Input / 2;
    }

    for(int i = 0; i < SizeOfArray; i++)
    {
        BinaryString = RemainderArray[i];
    }
    
    return BinaryString;
    
}


int main()
{
    Converter ConvertHexToInteger(4);

    std::cout << ConvertHexToInteger.GetHexValue() << std::endl;

    
}