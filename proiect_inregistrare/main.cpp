#include<iostream>
    #include<fstream>
    #include<iomanip>
    using namespace std;

    void MeniuPrincipal();

    class Programare {
    public:
        Programare(){
           MeniuPrincipal();
        }
    };

    class Detalii
    {
    public:
        string nume,prenume,servicii;
        int numar_telefon;
        int varsta;
        int ora_programare;

        char arr[100];

        void information()
        {
            cout<<"\n Introduceti numele : "<<endl;
            cin>>nume;
            cout<<"\n Introduceti prenumele : "<<endl;
            cin>>prenume;
            cout<<"\n Introduceti serviciile dorite : "<<endl;
            cin>>servicii;
            cout<<"\n Introduceti numarul de telefon : "<<endl;
            cin>>numar_telefon;
            cout<<"\n Introduceti varsta :"<<endl;
            cin>>varsta;
            cout<<"\n Introduceti ora la care doriti programarea : "<<endl;
            cin>>ora_programare;
            cout<<"Detaliile au fost salvate"<<endl;
        };
    };

    class Inregistrare
    {
    public:
        int alegere3;
        int alegere4;
        int alegere1, alegere2;
        int back;
        float pret;

        void rezervare()
        {
            string rezervareR[]={"Salon1","Salon2","Salon3","Salon4","Salon5","Salon6"};
            for(int i=0;i<6;i++)
            {
                cout<<(i+1)<<"Rezervare la"<<rezervareR[i]<<endl;
            }

        cout<<"Alege numarul salonului favorit : ";
        cin>>alegere3;

        switch(alegere3)
        {
            case 1:
                {
                cout<<"Ne bucuram ca ai ales Salonul 1"<<endl;
                cout<<"Preturile noastre sunt:" <<endl;
                cout<<"\t tuns - 40 lei ,ora disponibila - 15:30-16:20"<<endl;
                cout<<"\t spalat - 30 lei ,ora disponibila - 15:00-15:25"<<endl;
                cout<<"\t coafat - 50 lei, ora disponibila - 16:30-17:10"<<endl;
                cout<<"\t vopsit par - 150lei, ora disponibila - 17:20-19:20"<<endl;

                cout<<"Selecteaza serviciile dorite: "<<endl;
                cin>>alegere4;

                if(alegere4==1)
                {
                    pret=40;
                    cout<<"Ai ale sa faci rezervare la salonul nostru pentru tuns par , la ora 15:30-16:20";
                    cout<<"Rezervarea a fost finalizata"<<endl;
                    cout<< "Poti sa te reintorci la meniu pentru a vedea rezervarea finala"<<endl;
                }
                else if(alegere4==2)
                {
                    pret=30;
                    cout<<"Ai ale sa faci rezervare la salonul nostru pentru spalat par , la ora 15:00-15:25";
                    cout<<"Rezervarea a fost finalizata"<<endl;
                    cout<< "Poti sa te reintorci la meniu pentru a vedea rezervarea finala"<<endl;
                }
                else if(alegere4==3)
                {
                    pret=50;
                    cout<<"Ai ale sa faci rezervare la salonul nostru pentru coafat par , la ora 16:30-17:10";
                    cout<<"Rezervarea a fost finalizata"<<endl;
                    cout<< "Poti sa te reintorci la meniu pentru a vedea rezervarea finala"<<endl;
                }
                else if(alegere4==4)
                {
                    pret=150;
                    cout<<"Ai ale sa faci rezervare la salonul nostru pentru vopsit par , la ora 17:20-19:20";
                    cout<<"Rezervarea a fost finalizata"<<endl;
                    cout<< "Poti sa te reintorci la meniu pentru a vedea rezervarea finala"<<endl;
                }
                else {
                    cout<<"Invalid, reveniti la pagina principala"<<endl;
                    rezervare();
                }
                cout<<"Apasati orice tasta pentru a reveni la pagina principala"<<endl;
                cin>>back;
                if (back==1)
                {
                MeniuPrincipal();
                }
                else{
                 MeniuPrincipal();
                    }
            break;
        };

        case 2:
        {

                cout<<"Ne bucuram ca ai ales Salonul 2"<<endl;
                cout<<"Preturile noastre sunt:" <<endl;
                cout<<"\t tuns - 50 lei ,ora disponibila - 15:20-16:10"<<endl;
                cout<<"\t spalat - 40 lei ,ora disponibila - 15:00-15:15"<<endl;
                cout<<"\t coafat - 60 lei, ora disponibila - 16:20-17:00"<<endl;
                cout<<"\t vopsit par - 200lei, ora disponibila - 17:20-19:20"<<endl;

            cout<<"Selecteaza serviciile dorite: "<<endl;
            cin>>alegere4;

            if(alegere4==1)
            {
                pret=50;
                cout<<"Ai ale sa faci rezervare la salonul nostru pentru tuns par , la ora 15:20-16:10";
                cout<<"Rezervarea a fost finalizata"<<endl;
                cout<< "Poti sa te reintorci la meniu pentru a vedea rezervarea finala"<<endl;
            }
            else if(alegere4==2)
            {
                pret=40;
                cout<<"Ai ale sa faci rezervare la salonul nostru pentru spalat par , la ora 15:00-15:15";
                cout<<"Rezervarea a fost finalizata"<<endl;
                cout<< "Poti sa te reintorci la meniu pentru a vedea rezervarea finala"<<endl;
            }
            else if(alegere4==3)
            {
                pret=60;
                cout<<"Ai ale sa faci rezervare la salonul nostru pentru coafat par , la ora 16:20-17:00";
                cout<<"Rezervarea a fost finalizata"<<endl;
                cout<< "Poti sa te reintorci la meniu pentru a vedea rezervarea finala"<<endl;
            }
            else if(alegere4==4)
            {
                pret=200;
                cout<<"Ai ale sa faci rezervare la salonul nostru pentru vopsit par , la ora 17:20-19:20";
                cout<<"Rezervarea a fost finalizata"<<endl;
                cout<< "Poti sa te reintorci la meniu pentru a vedea rezervarea finala"<<endl;
            }
            else {
                cout<<"Invalid, reveniti la pagina principala"<<endl;
                rezervare();
            }
            cout<<"Apasati orice tasta pentru a reveni la pagina principala"<<endl;
            cin>>back;
            if (back==1)
            {
               MeniuPrincipal();
            }
            else{
                 MeniuPrincipal();
            }
        };
        case 3:
            {
                cout<<"Ne bucuram ca ai ales Salonul 3"<<endl;
                cout<<"Preturile noastre sunt:" <<endl;
                cout<<"\t tuns - 30 lei ,ora disponibila - 15:30-16:20"<<endl;
                cout<<"\t spalat - 20 lei ,ora disponibila - 15:00-15:25"<<endl;
                cout<<"\t coafat - 40 lei, ora disponibila - 16:30-17:10"<<endl;
                cout<<"\t vopsit par - 100lei, ora disponibila - 17:20-19:20"<<endl;

            cout<<"Selecteaza serviciile dorite: "<<endl;
            cin>>alegere4;

            if(alegere4==1)
            {
                pret=30;
                cout<<"Ai ale sa faci rezervare la salonul nostru pentru tuns par , la ora 15:30-16:20";
                cout<<"Rezervarea a fost finalizata"<<endl;
                cout<< "Poti sa te reintorci la meniu pentru a vedea rezervarea finala"<<endl;
            }
            else if(alegere4==2)
            {
                pret=20;
                cout<<"Ai ale sa faci rezervare la salonul nostru pentru spalat par , la ora 15:00-15:25";
                cout<<"Rezervarea a fost finalizata"<<endl;
                cout<< "Poti sa te reintorci la meniu pentru a vedea rezervarea finala"<<endl;
            }
            else if(alegere4==3)
            {
                pret=40;
                cout<<"Ai ale sa faci rezervare la salonul nostru pentru coafat par , la ora 16:30-17:10";
                cout<<"Rezervarea a fost finalizata"<<endl;
                cout<< "Poti sa te reintorci la meniu pentru a vedea rezervarea finala"<<endl;
            }
            else if(alegere4==4)
            {
                pret=100;
                cout<<"Ai ale sa faci rezervare la salonul nostru pentru vopsit par , la ora 17:20-19:20";
                cout<<"Rezervarea a fost finalizata"<<endl;
                cout<< "Poti sa te reintorci la meniu pentru a vedea rezervarea finala"<<endl;
            }
            else {
                cout<<"Invalid, reveniti la pagina principala"<<endl;
                rezervare();
            }
            cout<<"Apasati orice tasta pentru a reveni la pagina principala"<<endl;
            cin>>back;
            if (back==1)
            {
               MeniuPrincipal();
            }
            else{
                 MeniuPrincipal();
            }
        };
        case 4:
            {

                cout<<"Ne bucuram ca ai ales Salonul 4"<<endl;
                cout<<"Preturile noastre sunt:" <<endl;
                cout<<"\t tuns - 70 lei ,ora disponibila - 15:30-16:20"<<endl;
                cout<<"\t spalat - 60 lei ,ora disponibila - 15:00-15:25"<<endl;
                cout<<"\t coafat - 20 lei, ora disponibila - 16:30-17:10"<<endl;
                cout<<"\t vopsit par - 250lei, ora disponibila - 17:20-19:20"<<endl;

            cout<<"Selecteaza serviciile dorite: "<<endl;
            cin>>alegere4;

            if(alegere4==1)
            {
                pret=70;
                cout<<"Ai ale sa faci rezervare la salonul nostru pentru tuns par , la ora 15:30-16:20";
                cout<<"Rezervarea a fost finalizata"<<endl;
                cout<< "Poti sa te reintorci la meniu pentru a vedea rezervarea finala"<<endl;
            }
            else if(alegere4==2)
            {
                pret=60;
                cout<<"Ai ale sa faci rezervare la salonul nostru pentru spalat par , la ora 15:00-15:25";
                cout<<"Rezervarea a fost finalizata"<<endl;
                cout<< "Poti sa te reintorci la meniu pentru a vedea rezervarea finala"<<endl;
            }
            else if(alegere4==3)
            {
                pret=20;
                cout<<"Ai ale sa faci rezervare la salonul nostru pentru coafat par , la ora 16:30-17:10";
                cout<<"Rezervarea a fost finalizata"<<endl;
                cout<< "Poti sa te reintorci la meniu pentru a vedea rezervarea finala"<<endl;
            }
            else if(alegere4==4)
            {
                pret=250;
                cout<<"Ai ale sa faci rezervare la salonul nostru pentru vopsit par , la ora 17:20-19:20";
                cout<<"Rezervarea a fost finalizata"<<endl;
                cout<< "Poti sa te reintorci la meniu pentru a vedea rezervarea finala"<<endl;
            }
            else {
                cout<<"Invalid, reveniti la pagina principala"<<endl;
                rezervare();
            }
            cout<<"Apasati orice tasta pentru a reveni la pagina principala"<<endl;
            cin>>back;
            if (back==1)
            {
               MeniuPrincipal();
            }
            else{
                 MeniuPrincipal();
            }

            }

        case 5:
            {
                cout<<"Ne bucuram ca ai ales Salonul 5"<<endl;
                cout<<"Preturile noastre sunt:" <<endl;
                cout<<"\t tuns - 80 lei ,ora disponibila - 15:30-16:20"<<endl;
                cout<<"\t spalat - 50 lei ,ora disponibila - 15:00-15:25"<<endl;
                cout<<"\t coafat - 60 lei, ora disponibila - 16:30-17:10"<<endl;
                cout<<"\t vopsit par - 350lei, ora disponibila - 17:20-19:20"<<endl;

            cout<<"Selecteaza serviciile dorite: "<<endl;
            cin>>alegere4;

            if(alegere4==1)
            {
                pret=80;
                cout<<"Ai ale sa faci rezervare la salonul nostru pentru tuns par , la ora 15:30-16:20";
                cout<<"Rezervarea a fost finalizata"<<endl;
                cout<< "Poti sa te reintorci la meniu pentru a vedea rezervarea finala"<<endl;
            }
            else if(alegere4==2)
            {
                pret=50;
                cout<<"Ai ale sa faci rezervare la salonul nostru pentru spalat par , la ora 15:00-15:25";
                cout<<"Rezervarea a fost finalizata"<<endl;
                cout<< "Poti sa te reintorci la meniu pentru a vedea rezervarea finala"<<endl;
            }
            else if(alegere4==3)
            {
                pret=60;
                cout<<"Ai ale sa faci rezervare la salonul nostru pentru coafat par , la ora 16:30-17:10";
                cout<<"Rezervarea a fost finalizata"<<endl;
                cout<< "Poti sa te reintorci la meniu pentru a vedea rezervarea finala"<<endl;
            }
            else if(alegere4==4)
            {
                pret=350;
                cout<<"Ai ale sa faci rezervare la salonul nostru pentru vopsit par , la ora 17:20-19:20";
                cout<<"Rezervarea a fost finalizata"<<endl;
                cout<< "Poti sa te reintorci la meniu pentru a vedea rezervarea finala"<<endl;
            }
            else {
                cout<<"Invalid, reveniti la pagina principala"<<endl;
                rezervare();
            }
            cout<<"Apasati orice tasta pentru a reveni la pagina principala"<<endl;
            cin>>back;
            if (back==1)
            {
               MeniuPrincipal();
            }
            else{
                 MeniuPrincipal();
            }
        };
        case 6:
            {
                cout<<"Ne bucuram ca ai ales Salonul 6"<<endl;
                cout<<"Preturile noastre sunt:" <<endl;
                cout<<"\t tuns - 100 lei ,ora disponibila - 15:30-16:20"<<endl;
                cout<<"\t spalat - 80 lei ,ora disponibila - 15:00-15:25"<<endl;
                cout<<"\t coafat - 60 lei, ora disponibila - 16:30-17:10"<<endl;
                cout<<"\t vopsit par - 550lei, ora disponibila - 17:20-19:20"<<endl;

            cout<<"Selecteaza serviciile dorite: "<<endl;
            cin>>alegere4;

            if(alegere4==1)
            {
                pret=100;
                cout<<"Ai ale sa faci rezervare la salonul nostru pentru tuns par , la ora 15:30-16:20";
                cout<<"Rezervarea a fost finalizata"<<endl;
                cout<< "Poti sa te reintorci la meniu pentru a vedea rezervarea finala"<<endl;
            }
            else if(alegere4==2)
            {
                pret=80;
                cout<<"Ai ale sa faci rezervare la salonul nostru pentru spalat par , la ora 15:00-15:25";
                cout<<"Rezervarea a fost finalizata"<<endl;
                cout<< "Poti sa te reintorci la meniu pentru a vedea rezervarea finala"<<endl;
            }
            else if(alegere4==3)
            {
                pret=60;
                cout<<"Ai ale sa faci rezervare la salonul nostru pentru coafat par , la ora 16:30-17:10";
                cout<<"Rezervarea a fost finalizata"<<endl;
                cout<< "Poti sa te reintorci la meniu pentru a vedea rezervarea finala"<<endl;
            }
            else if(alegere4==4)
            {
                pret=550;
                cout<<"Ai ale sa faci rezervare la salonul nostru pentru vopsit par , la ora 17:20-19:20";
                cout<<"Rezervarea a fost finalizata"<<endl;
                cout<< "Poti sa te reintorci la meniu pentru a vedea rezervarea finala"<<endl;
            }
            else {
                cout<<"Invalid, reveniti la pagina principala"<<endl;
                rezervare();
            }
            cout<<"Apasati orice tasta pentru a reveni la pagina principala"<<endl;
            cin>>back;
            if (back==1)
            {
               MeniuPrincipal();
            }
            else{
                 MeniuPrincipal();
            }
        default:
            {
                cout<<"Reveniti la meniul principal"<<endl;
                MeniuPrincipal();
            }
        }
        }
        }

    };

    //float Inregistrare::alegere3;
    //int Inregistrare::alegere4;

    class RezervareFinala:public Inregistrare, public Detalii {
    public:
        void bill()
        {
            string salonrezervare="";
            ofstream outf("rezervare.txt");
                outf<<"_____Detaliile rezervarii____"<<endl;
                outf<<"_______________________________"<<endl;
                outf<<" Numele Clientului: "<<Detalii::nume<<endl;
                outf<<"Prenumele Clientului: "<<Detalii::prenume<<endl;
                outf<<"Serviciile dorite: "<<Detalii::servicii<<endl;
                outf<<"Pretul: "<<Inregistrare::pret<<endl;
                if(Inregistrare::alegere1==1)
                {
                    salonrezervare="Salon1";
                }
                else
                    if(Inregistrare::alegere1==2)
                {
                    salonrezervare="Salon2";
                }
                else
                if(Inregistrare::alegere1==3)
                {
                    salonrezervare="Salon3";
                }
                else
                if(Inregistrare::alegere1==4)
                {
                    salonrezervare="Salon4";
                }
                else
                if(Inregistrare::alegere1==5)
                {
                    salonrezervare="Salon5";
                }
                else
                if(Inregistrare::alegere1==6)
                {
                    salonrezervare="Salon6";
                }
                outf<<"Salonul rezervat este : "<<salonrezervare<<endl;
                outf<<"Costul serviciilor este :" <<Inregistrare::pret<<endl;
            outf.close();
        }

        void afisare_facturi()
        {
            ifstream ifs("rezervare.txt");

                if(!ifs)
                {
                    cout<<"File error!"<<endl;
                }
                while(!ifs.eof())
                {
                    ifs.getline(arr,100);
                    cout<<arr<<endl;
                }
            ifs.close();
        }
    };



    void MeniuPrincipal()
    {
    int alegere1;
    int alegere2;
    int back;

    cout<<"\t              Programeaza-te la salonul tau favorit!\n"<<endl;
    cout<<"\t_______________Meniu principal_______________________"<<endl;

    cout<<"\t_______________________________________________________"<<endl;
    cout<<"\t|\t\t\t\t\t\t|"<<endl;

    cout<<"\t|\t 1. Adauga detaliile tale    \t|"<<endl;
    cout<<"\t|\t 2. Inregistrarea programarii  \t|"<<endl;
    cout<<"\t|\t 3. Preturi\t|"<<endl;
    cout<<"\t|\t 4. Iesi din aplicatie   \t|"<<endl;
    cout<<"\t|\t\t\t\t\t\t|"<<endl;
    cout<<"\t_______________________________________________________"<<endl;

    cout<<"Introduceti un numar : ";
    cin>>alegere1;

    Detalii d;
    Inregistrare i;
    RezervareFinala r;

    switch(alegere1)
    {
        case 1:
            {
                cout<<"______Clienti_____\n"<<endl;
                d.information();
                cout<<"Apasati orice tasta pentru a reveni la meniul principal";
                cin>>back;

                if(back==1)
                {
                    MeniuPrincipal();
                }
                else
                {
                 MeniuPrincipal();
                }
                break;
            }
        case 2:
            {
            cout<<"___Fa o rezervare___\n"<<endl;
            i.rezervare();
            break;
            }
        case 3:
            {
               cout<<"___Vezi rezervarea___\n" <<endl;
               r.bill();
               cout<<"Revervare finalizata,o poti vizualiza"<<endl;
               cout<<"Apasa 1 pentru a vizualiza rezervarea"<<endl;
               cin>>back;
                if(back==1){
                    r.rezervare();
                    cout<<"Apasati orice tasta pentru a reveni la meniul principal";
                    cin>>back;
                    if(back==1)
                    {
                       MeniuPrincipal();
                    }
                    else
                        {
                            MeniuPrincipal();
                        }

                }
                else
                    {
                       MeniuPrincipal();

                    }
                    break;
            }
        case 4:
            {
                cout<<"\n\n\t_____Multumim!_______"<<endl;
                break;
            }
        default:
            {
            cout<<"Incearca din nou!"<<endl;
            MeniuPrincipal();
            break;
            }
    }
};

    int main()
    {
        Programare Pobj;
        return 0;
    }
