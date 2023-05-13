// this project is a cricket world cup projcet
// 1 - IND Stand for India
// 2 - Aus  Stand for Australia
// 3 - Pak Stand for Pakistan
// 4 - NZ Stand for New Zealand
// 5 - SA Stand for South Africa
// 6 - ENG Stand for England

//    i hope india will win this turnameant  😁😁😁😁😁       +++++++
#include <bits/stdc++.h>
#include <conio.h>
using namespace std;
#define WIN 4
#define LOSS 0
#define DRAW 2
int count = 0;
vector<int> India;
vector<int> Aus;
vector<int> Pak;
vector<int> NZ;
vector<int> SA;
vector<int> ENG;
vector<string> semiFinalTeams;
vector<string> Final;
map<string, int> m;
int in = 0, pk = 0, aus = 0, nz = 0, eng = 0, sa = 0;

void pattern(int n, string s)
{

    int i, j;
    int r = 1;
    for (i = n - 1; i >= 0; i--)
    {
        for (j = n - 1; j > i; j--)
        {
            cout << " ";
        }
        if (r == 1)
        {
            cout << "*   Winner is "<<s<<"           *" ;
        }
        else
        {
             _sleep(60);
            cout << "*";
           
        }

        for (j = 1; j < (i * 2); j++)
            cout << " ";

        if (i >= 1)
            if (r != 1)
                cout << "*";
        cout << "\n";
        r++;
    }
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "\t\t\tPress Enter to Exit ";
    getch();
    return;
}

void Trophy(string s)
{
    system("cls");
    for (int i = 1; i <= 15; i++)
    {
        for (int j = 1; j <= 15; j++)
        {
            _sleep(60);
            if (j >= 16 - i && j <= 14 + i)
                cout << "* ";
            else
                cout << " ";
        }
        cout << "\n";
    }
    pattern(15, s);
}

void FINAL_Match()
{

    system("cls");
    int run1 = 0, run2 = 0;
    cout << "\t\t\t\t\tMatch Startes.....    \t\t\t\t\t\t\n";
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "\t\t\t Match is\t" << Final[0] << " vs " << Final[1] << endl;
    cout << "\t\t\tEnter Team " << Final[0] << " Score ";
    cin >> run1;
    cout << "\n\t\t\tEnter Team " << Final[1] << " Score ";
    cin >> run2;
    if (run1 < 0 || run2 < 0)
    {
        cout << "\n\t\t\tEnter Valid Run !!!!!!!!!!!!!!!!!!\n";
        return;
    }
    else if (run1 > run2)
    {

        cout << "\t\t\t" << Final[0] << "  win" << endl;
        Trophy(Final[0]);
        return;
    }
    else if (run2 > run1)
    {
        cout << "\t\t\t" << Final[1] << "  win" << endl;
        Trophy(Final[1]);
        return;
    }
    else
    {
        cout << "\t\t\tMatch Draw!!!!!!" << endl;
        cout << "\t\t\t Rematch  Start Press Enter ";
        FINAL_Match();
    }
}
void semi_2()
{
    system("cls");
    int run1 = 0, run2 = 0;
    cout << "\t\t\t\t\tMatch Startes.....    \t\t\t\t\t\t\n";
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "\t\t\t Match is\t" << semiFinalTeams[2] << " vs " << semiFinalTeams[3] << endl;
    cout << "\t\t\tEnter Team " << semiFinalTeams[2] << " Score ";
    cin >> run1;
    cout << "\n\t\t\tEnter Team " << semiFinalTeams[3] << " Score ";
    cin >> run2;
    if (run1 < 0 || run2 < 0)
    {
        cout << "\n\t\t\tEnter Valid Run !!!!!!!!!!!!!!!!!!\n";
        return;
    }
    else if (run1 > run2)
    {

        cout << "\t\t\t" << semiFinalTeams[2] << "  win" << endl;
        Final.push_back(semiFinalTeams[2]);
    }
    else if (run2 > run1)
    {
        cout << "\t\t\t" << semiFinalTeams[3] << "  win" << endl;
        Final.push_back(semiFinalTeams[3]);
    }
    else
    {
        cout << "\t\t\tMatch Draw!!!!!!" << endl;
        cout << "\t\t\t Rematch  Start Press Enter ";
        semi_2();
    }

    cout << "\t\t\tMatch Complete Press Enter to Go Next Match " << endl;
}
void semi_1()
{
    system("cls");
    int run1 = 0, run2 = 0;
    cout << "\t\t\t\t\tMatch Startes.....    \t\t\t\t\t\t\n";
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "\t\t\t Match is\t" << semiFinalTeams[0] << " vs " << semiFinalTeams[1] << endl;
    cout << "\t\t\tEnter Team " << semiFinalTeams[0] << " Score ";
    cin >> run1;
    cout << "\n\t\t\tEnter Team " << semiFinalTeams[1] << " Score ";
    cin >> run2;
    if (run1 < 0 || run2 < 0)
    {
        cout << "\n\t\t\tEnter Valid Run !!!!!!!!!!!!!!!!!!\n";
        return;
    }
    else if (run1 > run2)
    {

        cout << "\t\t\t" << semiFinalTeams[0] << "  win" << endl;
        Final.push_back(semiFinalTeams[0]);
    }
    else if (run2 > run1)
    {
        cout << "\t\t\t" << semiFinalTeams[1] << "  win" << endl;
        Final.push_back(semiFinalTeams[1]);
    }
    else
    {
        cout << "\t\t\tMatch Draw!!!!!!" << endl;
        cout << "\t\t\t Rematch  Start Press Enter ";
        semi_1();
    }

    cout << "\t\t\tMatch Complete Press Enter to Go Next Match " << endl;
}
void Semi_Final()
{
    system("cls");
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "\t\t\t\tSemi Finaliest Teams \t\t";
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "\t\t\t_______________________________";
    for (int i = 0; i < 4; i++)
    {
        cout << "\n\t\t\t|\t " << i + 1 << " Team is  " << semiFinalTeams[i] << "\t\t|";
    }
    cout << "\n\t\t\t_______________________________\n";
}

bool cmp(pair<string, int> &a, pair<string, int> &b)
{
    return a.second < b.second;
}
void Show_Point_Table()
{
    system("cls");
    cout << endl;
    cout << endl;
    m.insert({"Ind", in});
    m.insert({"NZ", nz});
    m.insert({"Eng", eng});
    m.insert({"Aus", aus});
    m.insert({"Pak", pk});
    m.insert({"SA", sa});
    vector<pair<string, int>> A;

    for (auto &it : m)
        A.push_back(it);
    sort(A.begin(), A.end(), cmp);
    vector<pair<string, int>>::iterator it;
    cout << "\t\t\tTeams"
         << "\t\t\t\t"
         << "Points" << endl;
    for (auto it = A.rbegin(); it != A.rend(); it++)
    {
        cout << "\t\t_________________________________________________\n";
        _sleep(250);
        semiFinalTeams.push_back(it->first);
        cout << "\t\t|\t" << it->first << "\t\t\t\t" << it->second << "\t|\n";
    }
    cout << "\t\t_________________________________________________\n";

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout<<"\t\t\tPress Enter  \t\t\t\n";
    cout << endl;
    cout << endl;
}

void Rule()
{

    system("cls");
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "\t\t\t\t\t________________________________________________________________________________________\n";
    cout << "\t\t\t\t\t|\t !!!!!!!!!!!!!!!!!!!!!!!!!    Rule of The Game    !!!!!!!!!!!!!!!  \t\t|\n";
    cout << "\t\t\t\t\t|\t\t\t1. There Are  6  Team Are Available This World Cup              |\t\n";
    cout << "\t\t\t\t\t|\t\t\t2. Win Match Point 4  For Loss No Point \t\t\t|\n";
    cout << "\t\t\t\t\t|\t\t\t3. If Match is Draw Each Team Give 2 - 2 Point \t\t\t|\n";
    cout << "\t\t\t\t\t|\t\t\t4. Each Team Play  One - One Match Both of Them \t\t|\n";
    cout << "\t\t\t\t\t|\t\t\t5. Top Four Team Go to Semifinal \t\t\t\t|\n";
    cout << "\t\t\t\t\t|\t\t\t6. Team 1 Fight With Team 2 On Semifinal \t\t\t|\n";
    cout << "\t\t\t\t\t|\t\t\t7. Team 3 Fight With Team 4 On Semifianl \t\t\t|\n";
    cout << "\t\t\t\t\t|\t\t\t8. Top Two Team Are Played Final on This World Cup \t\t|\n";
    cout << "\t\t\t\t\t-----------------------------------------------------------------------------------------\n";
    cout << endl;
    cout << endl;
    cout << endl;
}
void Match_List()
{
    system("cls");
    cout << "\t\t_______________________________________________________________________________\n";
    cout << "\t\t|\t\t\tMatch No  1 --  IND VS PAK\t\t\t\t|\t\n";
    cout << "\t\t|\t\t\tMatch No  2 --  SA VS ENG\t\t\t\t|\t\n";
    cout << "\t\t|\t\t\tMatch No  3 --  Aus VS NZ\t\t\t\t|\t\n";
    _sleep(120);
    cout << endl;
    cout << "\t\t|\t\t\tMatch No  4 --  IND VS NZ\t\t\t\t|\t\n";
    cout << "\t\t|\t\t\tMatch No  5 --  SA VS PAK\t\t\t\t|\t\n";
    cout << "\t\t|\t\t\tMatch No  6 --  Aus VS ENG\t\t\t\t|\t\n";
    _sleep(120);
    cout << endl;
    cout << "\t\t|\t\t\tMatch No  7 --  PAK VS NZ\t\t\t\t|\t\n";
    cout << "\t\t|\t\t\tMatch No  8 --  IND VS Aus\t\t\t\t|\t\n";
    cout << "\t\t|\t\t\tMatch No  9 --  ENG VS SA\t\t\t\t|\t\n";
    _sleep(120);
    cout << endl;
    cout << "\t\t|\t\t\tMatch No  10 --  ENG VS IND\t\t\t\t|\t\n";
    cout << "\t\t|\t\t\tMatch No  11 --  PAK VS AUS\t\t\t\t|\t\n";
    cout << "\t\t|\t\t\tMatch No  12 --  NZ VS SA\t\t\t\t|\t\n";
    _sleep(120);
    cout << endl;
    cout << "\t\t|\t\t\tMatch No  13 --  IND VS SA\t\t\t\t|\t\n";
    cout << "\t\t|\t\t\tMatch No  14 --  ENG VS PAK\t\t\t\t|\t\n";
    cout << "\t\t|\t\t\tMatch No  15 --  NZ VS SA\t\t\t\t|\t\n";
    _sleep(120);
    // cout<<endl;
    // cout<<"\t\t|\t\t\t This is Stage 2 \t\t\t\t\t|\n";
    //  cout<<endl;
    //  cout<<"\t\t|\t\t\tMatch No  16 --  IND VS PAK\t\t\t\t|\t\n";
    // cout<<"\t\t|\t\t\tMatch No  17 --  SA VS ENG\t\t\t\t|\t\n";
    // cout<<"\t\t|\t\t\tMatch No  18 --  Aus VS NZ\t\t\t\t|\t\n";
    // _sleep(120);
    //  cout<<endl;
    // cout<<"\t\t|\t\t\tMatch No  19 --  IND VS NZ\t\t\t\t|\t\n";
    // cout<<"\t\t|\t\t\tMatch No  20 --  SA VS PAK\t\t\t\t|\t\n";
    // cout<<"\t\t|\t\t\tMatch No  21 --  Aus VS ENG\t\t\t\t|\t\n";
    // _sleep(120);
    //  cout<<endl;
    // cout<<"\t\t|\t\t\tMatch No  22 --  PAK VS NZ\t\t\t\t|\t\n";
    // cout<<"\t\t|\t\t\tMatch No  23 --  IND VS Aus\t\t\t\t|\t\n";
    // cout<<"\t\t|\t\t\tMatch No  24 --  ENG VS SA\t\t\t\t|\t\n";
    // _sleep(120);
    //  cout<<endl;
    // cout<<"\t\t|\t\t\tMatch No  25 --  ENG VS IND\t\t\t\t|\t\n";
    // cout<<"\t\t|\t\t\tMatch No  26 --  PAK VS AUS\t\t\t\t|\t\n";
    // cout<<"\t\t|\t\t\tMatch No  27 --  NZ VS SA\t\t\t\t|\t\n";
    // _sleep(120);
    //  cout<<endl;
    // cout<<"\t\t|\t\t\tMatch No  28 --  IND VS SA\t\t\t\t|\t\n";
    // cout<<"\t\t|\t\t\tMatch No  29 --  ENG VS PAK\t\t\t\t|\t\n";
    // cout<<"\t\t|\t\t\tMatch No  30 --  NZ VS SA\t\t\t\t|\t\n";
    cout << "\t\t_________________________________________________________________________________\n";
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
}
void Match_9(string m9)
{
    system("cls");
    int run1 = 0, run2 = 0;
    cout << "\t\t\t\t\tMatch Startes.....    \t\t\t\t\t\t\n";
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "\t\t\t Match is\t" << m9 << endl;
    cout << "\t\t\tEnter Team England Score ";
    cin >> run1;
    cout << "\n\t\t\tEnter Team South Africa Score ";
    cin >> run2;
    if (run1 < 0 || run2 < 0)
    {
        cout << "\n\t\t\tEnter Valid Run !!!!!!!!!!!!!!!!!!\n";
        return;
    }
    else if (run1 > run2)
    {
        eng += WIN;
        cout << "\t\t\tEngland  win" << endl;
        ENG.push_back(run1);
        SA.push_back(run2);
        sa += LOSS;
    }
    else if (run2 > run1)
    {
        aus += WIN;
        cout << "\t\t\tSouth Africa win" << endl;
        ENG.push_back(run1);
        SA.push_back(run2);
        eng += LOSS;
    }
    else
    {
        cout << "\t\t\tMatch Draw!!!!!!" << endl;
        sa += DRAW;
        eng = DRAW;
        ENG.push_back(run1);
        SA.push_back(run2);
    }

    cout << "\t\t\tMatch Complete Press Enter to Go Next Match " << endl;
}
void Match_8(string m8)
{
    system("cls");
    int run1 = 0, run2 = 0;
    cout << "\t\t\t\t\tMatch Startes.....    \t\t\t\t\t\t\n";
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "\t\t\t Match is\t" << m8 << endl;
    cout << "\t\t\tEnter Team india Score ";
    cin >> run1;
    cout << "\n\t\t\tEnter Team Australia Score ";
    cin >> run2;
    if (run1 < 0 || run2 < 0)
    {
        cout << "\t\t\t\nEnter Valid Run !!!!!!!!!!!!!!!!!!\n";
        return;
    }
    else if (run1 > run2)
    {
        in += WIN;
        cout << "\t\t\tindia  win" << endl;
        India.push_back(run1);
        Aus.push_back(run2);
        aus += LOSS;
    }
    else if (run2 > run1)
    {
        aus += WIN;
        cout << "\t\t\tAustralia  win" << endl;
        India.push_back(run1);
        Aus.push_back(run2);
        in += LOSS;
    }
    else
    {
        cout << "\t\t\tMatch Draw!!!!!!" << endl;
        in += DRAW;
        aus = DRAW;
        India.push_back(run1);
        Aus.push_back(run2);
    }

    cout << "\t\t\tMatch Complete Press Enter to Go Next Match " << endl;
}
void Match_7(string m7)
{
    system("cls");
    int run1 = 0, run2 = 0;
    cout << "\t\t\t\t\tMatch Startes.....    \t\t\t\t\t\t\n";
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "\t\t\t Match is\t" << m7 << endl;
    cout << "\t\t\tEnter Team Pakistan Score ";
    cin >> run1;
    cout << "\n\t\t\tEnter Team New Zealand Score ";
    cin >> run2;
    if (run1 < 0 || run2 < 0)
    {
        cout << "\t\t\t\nEnter Valid Run !!!!!!!!!!!!!!!!!!\n";
        return;
    }
    else if (run1 > run2)
    {
        pk += WIN;
        cout << "\t\t\tPakistan  win" << endl;
        Pak.push_back(run1);
        NZ.push_back(run2);
        nz += LOSS;
    }
    else if (run2 > run1)
    {
        nz += WIN;
        cout << "\t\t\tNew Zealand win" << endl;
        Pak.push_back(run1);
        NZ.push_back(run2);
        pk += LOSS;
    }
    else
    {
        cout << "\t\t\tMatch Draw!!!!!!" << endl;
        pk += DRAW;
        nz = DRAW;
        Pak.push_back(run1);
        NZ.push_back(run2);
    }

    cout << "\t\t\tMatch Complete Press Enter to Go Next Match " << endl;
}
void Match_6(string m6)
{
    system("cls");
    int run1 = 0, run2 = 0;
    cout << "\t\t\t\t\tMatch Startes.....    \t\t\t\t\t\t\n";
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "\t\t\t Match is\t" << m6 << endl;
    cout << "\t\t\tEnter Team Australia Score ";
    cin >> run1;
    cout << "\n\t\t\tEnter Team England Score ";
    cin >> run2;
    if (run1 < 0 || run2 < 0)
    {
        cout << "\n\t\t\tEnter Valid Run !!!!!!!!!!!!!!!!!!\n";
        return;
    }
    else if (run1 > run2)
    {
        aus += WIN;
        cout << "\t\t\tAustralia  win" << endl;
        Aus.push_back(run1);
        ENG.push_back(run2);
        eng += LOSS;
    }
    else if (run2 > run1)
    {
        eng += WIN;
        cout << "\t\t\tEngland win" << endl;
        Aus.push_back(run1);
        ENG.push_back(run2);
        aus += LOSS;
    }
    else
    {
        cout << "\t\t\tMatch Draw!!!!!!" << endl;
        aus += DRAW;
        eng += DRAW;
        Aus.push_back(run1);
        ENG.push_back(run2);
    }

    cout << "\t\t\tMatch Complete Press Enter to Go Next Match " << endl;
}
void Match_5(string m5)
{
    system("cls");
    int run1 = 0, run2 = 0;
    cout << "\t\t\t\t\tMatch Startes.....    \t\t\t\t\t\t\n";
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "\t\t\t Match is\t" << m5 << endl;
    cout << "\t\t\tEnter Team South Africa Score ";
    cin >> run1;
    cout << "\n\t\t\tEnter Team Pakistan Score ";
    cin >> run2;
    if (run1 < 0 || run2 < 0)
    {
        cout << "\t\t\t\nEnter Valid Run !!!!!!!!!!!!!!!!!!\n";
        return;
    }
    else if (run1 > run2)
    {
        sa += WIN;
        cout << "\t\t\tSouth Africa  win" << endl;
        SA.push_back(run1);
        Pak.push_back(run2);
        pk += LOSS;
    }
    else if (run2 > run1)
    {
        pk += WIN;
        cout << "\t\t\tPakistan win" << endl;
        SA.push_back(run1);
        Pak.push_back(run2);
        sa += LOSS;
    }
    else
    {
        cout << "\t\t\tMatch Draw!!!!!!" << endl;
        sa += DRAW;
        pk += DRAW;
        SA.push_back(run1);
        Pak.push_back(run2);
    }

    cout << "\t\t\tMatch Complete Press Enter to Go Next Match " << endl;
}
void Match_4(string m4)
{
    system("cls");
    int run1 = 0, run2 = 0;
    cout << "\t\t\t\t\tMatch Startes.....    \t\t\t\t\t\t\n";
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "\t\t\t Match is\t" << m4 << endl;
    cout << "\t\t\tEnter Team India Score ";
    cin >> run1;
    cout << "\n\t\t\tEnter Team New zealand Score ";
    cin >> run2;
    if (run1 < 0 || run2 < 0)
    {
        cout << "\n\t\t\tEnter Valid Run !!!!!!!!!!!!!!!!!!\n";
        return;
    }
    else if (run1 > run2)
    {
        in += WIN;
        cout << "\t\t\tIndia win" << endl;
        India.push_back(run1);
        NZ.push_back(run2);
        nz += LOSS;
    }
    else if (run2 > run1)
    {
        nz += WIN;
        cout << "\t\t\tNew zealand win" << endl;
        India.push_back(run1);
        NZ.push_back(run2);
        in += LOSS;
    }
    else
    {
        cout << "\t\t\tMatch Draw!!!!!!" << endl;
        in += DRAW;
        nz += DRAW;
        India.push_back(run1);
        NZ.push_back(run2);
    }

    cout << "\t\t\tMatch Complete Press Enter to Go Next Match " << endl;
}
void Match_3(string m3)
{
    system("cls");
    int run1 = 0, run2 = 0;

    cout << "\t\t\t\t\tMatch Startes.....    \t\t\t\t\t\t\n";
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "\t\t\t Match is\t" << m3 << endl;
    cout << "\t\t\tEnter Team Australia Score ";
    cin >> run1;
    cout << "\n\t\t\tEnter Team New zealand Score ";
    cin >> run2;
    if (run1 < 0 || run2 < 0)
    {
        cout << "\n\t\t\tEnter Valid Run !!!!!!!!!!!!!!!!!!\n";
        return;
    }
    else if (run1 > run2)
    {
        aus += WIN;
        cout << "\t\t\tAustralia win" << endl;
        Aus.push_back(run1);
        NZ.push_back(run2);
        nz += LOSS;
    }
    else if (run2 > run1)
    {
        nz += WIN;
        cout << "\t\t\tNew zealand win" << endl;
        Aus.push_back(run1);
        NZ.push_back(run2);
        aus += LOSS;
    }
    else
    {
        cout << "\t\t\tMatch Draw!!!!!!" << endl;
        aus += DRAW;
        nz += DRAW;
        Aus.push_back(run1);
        NZ.push_back(run2);
    }

    cout << "\t\t\tMatch Complete Press Enter to Go Next Match " << endl;
}
void Match_2(string m2)
{
    system("cls");
    int run1 = 0, run2 = 0;

    cout << "\t\t\t\t\tMatch Startes.....    \t\t\t\t\t\t\n";
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "\t\t\t Match is\t" << m2 << endl;
    cout << "\t\t\tEnter Team South Africa Score ";
    cin >> run1;
    cout << "\n\t\t\tEnter Team England Score ";
    cin >> run2;
    if (run1 < 0 || run2 < 0)
    {
        cout << "\t\t\t\nEnter Valid Run !!!!!!!!!!!!!!!!!!\n";
        return;
    }
    else if (run1 > run2)
    {
        sa += WIN;
        cout << "\t\t\tSouth Africa win" << endl;
        SA.push_back(run1);
        ENG.push_back(run2);
        eng += LOSS;
    }
    else if (run2 > run1)
    {
        eng += WIN;
        cout << "\t\t\tEngland win" << endl;
        SA.push_back(run1);
        ENG.push_back(run2);
        sa += LOSS;
    }
    else
    {
        cout << "\t\t\tMatch Draw!!!!!!" << endl;
        eng += DRAW;
        sa += DRAW;
        SA.push_back(run1);
        ENG.push_back(run2);
    }

    cout << "\t\t\tMatch Complete Press Enter to Go Next Match " << endl;
}
void Starting_Matches()
{

    system("cls");
    string m1 = "IND VS PAK";
    string m2 = "SA VS ENG";
    string m3 = "Aus VS NZ";

    string m4 = "IND VS NZ";
    string m5 = "SA VS PAK";
    string m6 = "Aus VS ENG";

    string m7 = "PAK VS NZ";
    string m8 = "IND VS Aus";
    string m9 = "ENG VS SA";

    string m10 = "ENG VS IND";
    string m11 = "PAK VS AUS";
    string m12 = "NZ VS SA";

    string m13 = "IND VS SA";
    string m14 = "ENG VS PAK";
    string m15 = "NZ VS SA";
    // cout<<m1;
    int run1 = 0, run2 = 0;

    cout << "\t\t\t\t\tMatch Startes.....    \t\t\t\t\t\t\n";
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "\t\t\tFirst Match is\t" << m1 << endl;
    cout << "\t\t\tEnter Team india Score ";
    cin >> run1;
    cout << "\n\t\t\tEnter Team Pakistan Score ";
    cin >> run2;
    if (run1 < 0 || run2 < 0)
    {
        cout << "\n\t\t\tEnter Valid Run !!!!!!!!!!!!!!!!!!\n";
        return;
    }
    else if (run1 > run2)
    {
        in += WIN;
        cout << "\t\t\tIndia win\n"
             << endl;
        India.push_back(run1);
        Pak.push_back(run2);
        pk += LOSS;
    }
    else if (run2 > run1)
    {
        pk += WIN;
        cout << "\t\t\tPakistan win\n"
             << endl;
        India.push_back(run1);
        Pak.push_back(run2);
        in += LOSS;
    }
    else
    {
        cout << "\t\t\tMatch Draw!!!!!!\n"
             << endl;
        in += DRAW;
        pk += DRAW;
        India.push_back(run1);
        Pak.push_back(run2);
    }

    cout << "\t\t\tMatch Complete Press Enter to Go Next Match " << endl;
    getch();
    Match_2(m2);
    getch();
    Match_3(m3);
    getch();
    Match_4(m4);
    getch();
    Match_5(m5);
    getch();
    Match_6(m6);
    getch();
    Match_7(m7);
    getch();
    Match_8(m8);
    getch();
    Match_9(m9);

    system("cls");
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "\t\t\tAll Matches is Complete Press Enter to Show Point table " << endl;
    getch();

    Show_Point_Table();
    getch();
    
    Semi_Final();
    getch();
    semi_1();
    getch();
    semi_2();
    getch();
    cout << "\t\t\tPress Enter to Go On Final \t\t\t\n";
    FINAL_Match();

    cout << endl;
    cout << endl;
    cout << endl;
}
void Score_all_teams()
{
    system("cls");
    if (India.size() == 0)
    {
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "\t\t\t_________________________________________________\n";
        cout << "\t\t\t\tPlease First Play Matches Then come  \n";
        cout << "\t\t\t_________________________________________________\n";
        return;
    }
    cout << endl;
        cout << endl;
        cout << endl;
       cout << endl;
        cout << endl;
        cout << endl;
    for (int i = 0; i < India.size(); i++)
    {
        cout << India[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < Aus.size(); i++)
    {
        cout << Aus[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < ENG.size(); i++)
    {
        cout << ENG[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < Pak.size(); i++)
    {
        cout << Pak[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < SA.size(); i++)
    {
        cout << SA[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < NZ.size(); i++)
    {
        cout << NZ[i] << " ";
    }
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
}

int main()
{
    system("cls");
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    string sn = "\t\t\t\t:::::::::::::::\t Welcome to Cricket World Cup Project \t:::::::::::::::";
    for (int i = 0; i < sn.size(); i++)
    {
        cout << sn[i];
        _sleep(60);
    }
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    while (true)
    {
        cout << endl;
        cout << endl;
        cout << "\t\t\t\t\n\t\t\t---------------------------------------------------------\n";
        cout << "\t\t\t|\t\tPress 1 For Play Cricket \t\t|\n";
        cout << "\t\t\t|\t\tPress 2 For Rule \t\t\t|\n";
        cout << "\t\t\t|\t\tPress 3 For Point Table \t\t|\n";
        cout << "\t\t\t|\t\tPress 4 For Matches List \t\t|\n";
        cout << "\t\t\t|\t\tPress 5 For All Team Score \t\t|\n";
        cout << "\t\t\t|\t\tPress 6 For Exit \t\t\t|";
        cout << "\t\t\t\t\n\t\t\t---------------------------------------------------------\n";
        int choice;
        cout << "\n\n\t\t\tEnter Your Choice \t";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            Starting_Matches();
            break;
        }
        case 2:
        {
            Rule();
            break;
        }
        case 3:
        {
            Show_Point_Table();
            break;
        }
        case 4:
        {
            Match_List();
            break;
        }
        case 5:
        {
            Score_all_teams();
            break;
        }
        case 6:
        {
            exit(0);
        }
        default:
        {
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "\t\t\t_________________________________________________\n";
            cout << "\t\t\t\tPlease Enter a valid Choice !!!! \n";
            cout << "\t\t\t_________________________________________________\n";

            break;
        }
        }
    }
   
}