#include <iostream>
using namespace std;

int i, j, k, l, count = 6, c = 1, c1 = 10, c2 = 1, c3 = 10, c4 = 11, c5 = 0, c6 = 8, a = 0;

//create line
void line()
{
    for (k = 0; k <= 2; k++)
    {
        cout << "*";
    }
}

//create space
void gap()
{
    for (k = 0; k <= 2; k++)
    {
        cout << "  ";
    }
}

//cross triangle top(R)
void crossstr()
{
    for (j = 10; j >= i; j--)
    {
        cout << " ";
    }
}

void crossstl()
{
    for (j = 10; j >= i; j--)
    {
        cout << " ";
    }
}

//cross triangle bottom(R)
void crossbr()
{
    for (l = 1; l <= i; l++)
    {
        cout << " ";
    }
}

//botto, triangle left
void crossb1()
{
    for (j = 1; j <= i; j++)
    {
        cout << " ";
    }
}

//middle part of A
void mida()
{
    for (l = 1; l <= i; l++)
    {
        if (i > 4 && i < 7)
        {
            cout << "**";
        }
        else
        {
            cout << "  ";
        }
    }
}

//creates B
void midb()
{
    for (l = 1; l <= 5; l++)
    {
        //middle of b
        if (i >= 0 && i < 2 || i > 4 && i < 7 || i > 9 && i <= 11)
        {
            cout << "**";
        }
        else
        {
            cout << "  ";
        }
    }

    for (k = 0; k <= 2; k++)
    {
        if (i >= 0 && i < 2 || i > 4 && i < 7 || i > 9 && i <= 11)
        {
            cout << " ";
        }
        else
        {
            cout << "*"; //
        }
    }
}

void midc()
{
    for (l = 1; l <= 5; l++)
    {
        //middle of b
        if (i >= 0 && i < 2 || i > 9 && i <= 11)
        {
            cout << "**";
        }
        else
        {
            cout << "  ";
        }
    }
}

//middle of h
void midh()
{
    for (l = 1; l <= 5; l++)
    {

        if (i > 4 && i < 7)
        {
            cout << "**";
        }
        else
        {
            cout << "  ";
        }
    }
}

void mide()
{
    for (l = 1; l <= 5; l++)
    {

        if (i >= 0 && i < 2 || i > 4 && i < 7 || i > 9 && i <= 11)
        {
            cout << "**";
        }
        else
        {
            cout << "  ";
        }
    }
}

void midd()
{
    for (l = 1; l <= 5; l++)
    {

        if (i >= 0 && i < 2 || i > 9 && i <= 11 || l == 5)
        {
            cout << "**";
        }
        else
        {
            cout << "  ";
        }
    }

    for (k = 0; k < 2; k++)
    {
        if (i >= 0 && i < 2 || i > 9 && i <= 11)
        {
            cout << " ";
        }
        else
        {
            cout << "*";
        }
    }
}

void midf()
{
    for (l = 1; l <= 5; l++)
    {
        if (i >= 0 && i < 2 || i > 4 && i < 7)
        {
            cout << "**";
        }
        else
        {
            cout << "  ";
        }
    }
}

void midg()
{
    for (l = 1; l <= 5; l++)
    {
        if (i >= 0 && i < 2 || i > 4 && i < 7 && l >= 3 && l <= 5 || i >= 6 && i <= 9 && l == 5 || i > 9 && i <= 11)
        {
            cout << "**";
        }
        else
        {
            cout << "  ";
        }
    }
}

void spi()
{
    for (l = 0; l <= 6; l++)
    {
        if (i >= 0 && i < 2 || i >= 2 && i <= 9 && l == 3 || i > 9 && i <= 11)
        {
            cout << "***";
        }
        else
        {
            cout << "   ";
        }
    }
}

void spj()
{
    for (l = 0; l <= 6; l++)
    {
        if (i >= 0 && i < 2 || i >= 2 && i <= 9 && l == 3 || i >= 7 && i <= 9 && l == 0 || i > 9 && i <= 11 && l <= 3)
        {
            cout << "***";
        }
        else
        {
            cout << "   ";
        }
    }
}

void midk()
{
    for (l = 0; l <= 6; l++)
    {
        if (l == count)
        {
            cout << "***";
        }
        else
        {
            cout << "   ";
        }
    }
    if (i < 5)
    {
        count--;
    }
    else if (i <= 11)
    {
        count++;
    }
}

void midl()
{
    for (l = 1; l <= 5; l++)
    {
        if (i > 9 && i <= 11)
        {
            cout << "**";
        }
        else
        {
            cout << "  ";
        }
    }
}

void midv()
{
    for (j = 10; j >= i; j--)
    {
        cout << "  ";
    }
}

void mido()
{
    for (k = 0; k <= 2; k++)
    {
        if (i == 0 && k < 2 || i == 1 && k < 1 || i == 11 && k < 2 || i == 10 && k < 1)
        {
            cout << " ";
        }
        else
        {
            cout << "*";
        }
    }

    for (l = 0; l <= 6; l++)
    {
        if (i >= 0 && i < 2 || i > 9 && i <= 11)
        {
            cout << "**";
        }
        else
        {
            cout << "  "; //
        }
    }
    for (k = 0; k <= 2; k++)
    {
        if (i == 0 && k > 0 || i == 1 && k > 1 || i == 11 && k > 0 || i == 10 && k > 1)
        {
            cout << " ";
        }
        else
        {
            cout << "*";
        }
    }
}

void midp()
{
    for (l = 1; l <= 5; l++)
    {
        if (i >= 0 && i < 2 || i > 4 && i < 7 || i >= 2 & i <= 4 && l == 5) //&&&&
        {
            cout << "**";
        }
        else
        {
            cout << "  ";
        }
    }
}

void spq()
{
    for (l = 0; l <= 11; l++)
    {
        if (i >= 0 && i < 2 && l < 9 || i >= 2 && i < 9 && l == 0 || l == 8 && i < 10 || i > 7 && i <= 9 && l < 9 || i >= 9 && i <= 11 && l == i)
        {
            cout << "**";
        }
        else
        {
            cout << "  "; //
        }
    }
}

void midr()
{
    for (l = 1; l <= 5; l++)
    {
        if (i >= 0 && i < 2 || i > 4 && i < 7 || i >= 2 & i <= 4 && l == 5 || i >= 7 && i <= 11 && l == c4)
        {
            cout << "**";
        }
        else
        {
            cout << "  ";
        }
    }
    if (i > 6)
    {
        c4++;
    }
    else if (c4 > 5)
    {
        c4 = 1;
    }
}

void sps()
{
    for (l = 1; l <= 8; l++)
    {
        if (i >= 0 && i < 2 || i > 4 && i <= 7 || i >= 2 & i <= 4 && l == 1 || i > 6 && i <= 9 && l == 8 || i > 9 && i <= 11)
        {
            cout << "**";
        }
        else
        {
            cout << "  ";
        }
    }
}

void spt()
{
    for (l = 0; l <= 6; l++)
    {
        if (i >= 0 && i < 2 || i >= 2 && i <= 11 && l == 3)
        {
            cout << "***";
        }
        else
        {
            cout << "   ";
        }
    }
}

void midu()
{
    for (l = 1; l <= 6; l++)
    {
        if (i > 9 && i <= 11)
        {
            cout << "**";
        }
        else
        {
            cout << "  ";
        }
    }
}

void midw()
{
    for (j = 1; j <= i; j++)
    {
        cout << "  ";
    }
}

void spx()
{
    for (l = 0; l <= 11; l++)
    {
        if (l == c || l == c1)
        {
            cout << "***";
        }
        else
        {
            cout << "  ";
        }
    }
    if (i <= 4)
    {
        c++;
        c1--;
    }
    else if (i <= 11)
    {
        c1++;
        c--;
    }
}

void spy()
{
    for (l = 0; l <= 11; l++)
    {
        if (l == c2 || l == c3 && i < 5)
        {
            cout << "***";
        }
        else
        {
            cout << "  ";
        }
    }

    if (i <= 4)
    {
        c2++;
        c3--;
    }
    else if (i <= 11)
    {
        c3++;
    }

    if (i >= 5)
    {
        cout << " ";
    }
}

void spz()
{
    for (l = 0; l <= 11; l++)
    {
        if (i >= 0 && i < 2 || i > 9 && i <= 11 || i >= 2 && i <= 9 && l == c4)
        {
            cout << "**";
        }
        else
        {
            cout << "  ";
        }
    }
    c4 = c4 - 1;
}

int main()
{
    char choice;
    char name[40];
    do
    {

        c = 1, c1 = 10, c2 = 1, c3 = 10, c4 = 11;

        cout << "\n----------------------------------------\n Powered By Ebisa Kebede\n----------------------------------------\n\n";
        cout << "Enter your Name [Only In Lower Case]: ";
        cin >> name;

        cout << endl;
        for (i = 0; i <= 11; i++)
        {
            for (a = 0; name[a] != NULL; a++)
            {
                if (name[a] == 'a' || name[a] == 'A')
                {
                    crossstr();
                    line();
                    mida();
                    line();
                    crossstl();
                    gap();
                }
                else if (name[a] == 'b' || name[a] == 'B')
                {
                    line();
                    midb();
                    gap();
                }
                else if (name[a] == 'c' || name[a] == 'C')
                {
                    line();
                    midc();
                    gap();
                }
                else if (name[a] == 'd' || name[a] == 'D')
                {
                    line();
                    midd();
                    gap();
                }
                else if (name[a] == 'e' || name[a] == 'E')
                {
                    line();
                    mide();
                    gap();
                }
                else if (name[a] == 'f' || name[a] == 'F')
                {
                    line();
                    midf();
                    gap();
                }
                else if (name[a] == 'g' || name[a] == 'G')
                {
                    line();
                    midg();
                    gap();
                }
                else if (name[a] == 'h' || name[a] == 'H')
                {
                    line();
                    midh();
                    line();
                    gap();
                }
                else if (name[a] == 'i' || name[a] == 'I')
                {
                    spi();
                    gap();
                }
                else if (name[a] == 'j' || name[a] == 'J')
                {
                    spj();
                    gap();
                }
                else if (name[a] == 'k' || name[a] == 'K')
                {
                    line();
                    midk();
                    gap();
                }
                else if (name[a] == 'l' || name[a] == 'L')
                {
                    line();
                    midl();
                    gap();
                }
                else if (name[a] == 'm' || name[a] == 'M')
                {
                    line();
                    crossbr();
                    line();
                    midv();
                    line();
                    crossb1();
                    line();

                    gap();
                }
                else if (name[a] == 'n' || name[a] == 'N')
                {
                    line();
                    crossbr();
                    line();
                    crossstl();
                    line();
                    gap();
                }
                else if (name[a] == 'o' || name[a] == 'O')
                {
                    mido();
                    gap();
                }
                else if (name[a] == 'p' || name[a] == 'P')
                {
                    line();
                    midp();
                    gap();
                }
                else if (name[a] == 'q' || name[a] == 'Q')
                {
                    spq();
                    gap();
                }
                else if (name[a] == 'r' || name[a] == 'R')
                {
                    line();
                    midr();
                    gap();
                }
                else if (name[a] == 's' || name[a] == 'S')
                {
                    sps();
                    gap();
                }
                else if (name[a] == 't' || name[a] == 'T')
                {
                    spt();
                    gap();
                }
                else if (name[a] == 'u' || name[a] == 'U')
                {
                    line();
                    midu();
                    line();
                    gap();
                }
                else if (name[a] == 'v' || name[a] == 'V')
                {
                    crossbr();
                    line();
                    midv();
                    line();
                    crossb1();
                    gap();
                }
                else if (name[a] == 'w' || name[a] == 'W')
                {
                    line();
                    crossstr();
                    line();
                    midw();
                    line();
                    crossstl();
                    line();
                    gap();
                }
                else if (name[a] == 'x' || name[a] == 'X')
                {
                    spx();
                    gap();
                }
                else if (name[a] == 'y' || name[a] == 'Y')
                {
                    spy();
                    gap();
                }
                else if (name[a] == 'z' || name[a] == 'Z')
                {
                    spz();
                    gap();
                }
                else if (name[a] == ' ')
                {
                    gap();
                    gap();
                }
                else
                {
                    cout << "OOPS! Please Try Again!" << endl;
                }
            }
            cout << endl;
        }

        cout << "\nDo You Want To Continue?(y/n)";
        cin >> choice;

        cout << "THANK YOU FOR USING OUR MAGIC ";
    } while (choice != 'n');

    return 0;
}
