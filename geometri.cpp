#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    
    double a,b,c,d,t,p,l,s,r,i, Luas, Keliling, Volume, Luaspermukaan ;
    char pilihan16, pilihan9, pilihan10, pilihan11, pilihan12, pilihan13, pilihan14, pilihan15, pilihan8, pilihan, A, B, V, P, L,K, pilihan1, pilihan2, pilihan3, pilihan4, pilihan5, pilihan6, pilihan7;
    
    cout<<"Pilihlah Bangun yang akan anda tanyakan\n" ;
    cout<<"A Bangun Datar\n";
    cout<<"B Bangun Ruang\n";
    cout<<"A/B : ";
    cin>>pilihan;

    if(pilihan=='A'){
    cout<<"Pilihlah Bangun Datar :\n";
    cout<<"a. Trapesium\n";
    cout<<"b. Segitiga\n";
    cout<<"c. Persegi panjang\n";
    cout<<"d. Persegi\n";
    cout<<"e. Lingkaran\n";
    cout<<"a/b/c/d/e : ";
    cin>>pilihan1;  
    
    if(pilihan1=='a'){
      cout<<"Apa yang anda cari ?\n";
      cout<<"L. luas\n";
      cout<<"K. Keliling\n";
      cout<<"L/K ? ";
      cin>>pilihan3 ;
     if(pilihan3=='L'){
       cout<<"Masukkan panjang sisi atas :\n";
       cin>>a;
       cout<<"Masukkan panjang sisi bawah :\n";
       cin>>b;
       cout<<"Masukkan Tingginya :\n";
       cin>>t;
       
       Luas= (a + b)*t*0.5;
       cout<<"Luasnya adalah "<<Luas;
     }else if(pilihan3=='K'){
       cout<<"masukkan sisi pertama :\n";
       cin>>a;
       cout<<"masukkan sisi kedua :\n";
       cin>>b;
       cout<<"masukkan sisi ketiga :\n";
       cin>>c;
       cout<<"masukkan sisi keempat:\n";
       cin>>d;
       Keliling=a + b + c + d;
       cout<<"Keliling nya adalah "<<Keliling;
     }else{
       cout<<"Maaf Belum Buat 🙏.";
       }
    }else if(pilihan1=='b'){
      cout<<"Apa yang anda cari ?\n";
      cout<<"L. luas\n";
      cout<<"K. Keliling\n";
      cout<<"L/K ? ";
      cin>>pilihan4 ;
      
      if(pilihan4=='L'){
        cout<<"Masukkan panjang alas :\n";
        cin>>a;
        cout<<"Masukkan Tinggi:\n";
        cin>>t;
        Luas=a*t*0.5;
        cout<<"Luasnya adalah "<<Luas;
      }else if(pilihan4=='K'){
       cout<<"masukkan sisi pertama :\n";
       cin>>a;
       cout<<"masukkan sisi kedua :\n";
       cin>>b;
       cout<<"masukkan sisi ketiga :\n";
       cin>>c;
       Keliling=a + b + c;
       cout<<"Keliling nya adalah "<<Keliling;
      }else{
        cout<<"Maaf Belum Buat 🙏 ";
        }
    }else if(pilihan1=='c'){
      cout<<"Apa yang anda cari ?\n";
      cout<<"L. luas\n";
      cout<<"K. Keliling\n";
      cout<<"L/K ? ";
      cin>>pilihan5 ;
      
      if(pilihan5=='L'){
      cout<<"Masukkan panjang :\n";
      cin>>p;
      cout<<"Masukkan Lebar :\n";
      cin>>l;
      Luas=p*l;
      cout<<"Luasnya adalah "<<Luas;
      }else if(pilihan5=='K'){
       cout<<"Masukkan panjang :\n";
      cin>>p;
      cout<<"Masukkan Lebar :\n";
      cin>>l;
      Keliling=2*(p+l);
      cout<<"Keliling nya adalah "<<Keliling;
      }else{
        cout<<"Maaf Belum Buat 🙏 ";
        }

    }else if(pilihan1=='d'){
      cout<<"Apa yang anda cari ?\n";
      cout<<"L. luas\n";
      cout<<"K. Keliling\n";
      cout<<"L/K ? ";
      cin>>pilihan6 ;
      
     if(pilihan6=='L'){
      cout<<"Masukkan panjang sisi persegi :\n";
      cin>> s;
      Luas = s*s;
      cout <<"Luasnya adalah "<< Luas;
     }
     else if(pilihan6=='K'){
        cout<< "Masukkan panjang sisi persegi : \n";
        cin >> s;
        Keliling= 4*s;
        cout<<" Kelilingnya adalah "<< Keliling;
      }else{
        cout<<"Maaf Belum Buat 🙏 ";
      }

    }else if(pilihan1=='e'){
      cout<<"Apa yang anda cari ?\n";
      cout<<"L. luas\n";
      cout<<"K. Keliling\n";
      cout<<"L/K ? ";
      cin>>pilihan7 ;
      if(pilihan7='L'){
        cout<<"Masukkan jari-jari :\n";
        cin>>r;
        Luas=3.14*r*r;
        cout<<"Luasnya adalah "<<Luas;
      }else if(pilihan7='K'){
        cout<<"Masukkan jari-jari :\n";
        cin>>r;
        Keliling=2*r*3,14;
        cout<<"Keliling nya adalah "<<Keliling;
      }
    }else{
      cout<<"Maaf Belum Buat selain bangun diatas 🙏" ;
      }
      }else if(pilihan=='B'){
      cout<<"Pilihlah Bangun Ruang :\n";
      cout<<"a. Kerucut\n";
      cout<<"b. Kubus\n";
      cout<<"c. Balok\n";
      cout<<"d. Tabung\n";
      cout<<"e. Limas Segiempat\n";
      cout<<"f. Limas Segitiga\n";
      cout<<"g. Prisma segitiga\n";
      cout<<"h. Prisma segiempat\n";
      cout<<"i. Bola\n";
      cout<<"a/b/c/d/e/f/g/h/i : ";
      cin>>pilihan2 ;
      
      if(pilihan2=='a'){
        cout<<"Apa yang anda cari ?\n";
        cout<<"V. Volume\n";
        cout<<"P. Permukaan\n";
        cout<<"V/P ? ";
        cin>>pilihan8 ;
        
        if(pilihan8=='V'){
          cout<<"Masukkan Tinggi :\n";
          cin>>t;
          cout<<"Masukkan jari-jari :\n";
          cin>>r;
          Volume=(3.14*r*r)*t*0.3;
          cout<<"Volumenya adalah "<<Volume;
       
        }else if(pilihan8=='P'){
          cout<<"Masukkan jari-jari :\n ";
          cin>>r;
          cout<<"Garis Pelukis :\n";
          cin>>s;
          Luaspermukaan=3.14*r*(r+s);
          cout<<"Luas Permukaan nya"<<Luaspermukaan;
        }else{
          cout<<"Baru cuma ada itu.";
          }
      }else if(pilihan2=='b'){
        cout<<"Apa yang anda cari ?\n";
        cout<<"V. Volume\n";
        cout<<"P. Permukaan\n";
        cout<<"V/P ? ";
        cin>>pilihan9 ;
        
        if(pilihan9=='V'){
          cout<<"Masukkan panjang rusuk :\n";
          cin>>r;
          Volume=r*r*r;
          cout<<"Volume nya adalah "<<Volume;
        }else if(pilihan9=='P'){
          cout<<"Masukkan panjang rusuk:\n";
          cin>>r;
          Luaspermukaan=6*r*r;
          cout<<"Luas Permukaan nya adalah "<<Luaspermukaan;
        }
      }else if(pilihan2=='c'){
        cout<<"Apa yang anda cari ?\n";
        cout<<"V. Volume\n";
        cout<<"P. Permukaan\n";
        cout<<"V/P ? ";
        cin>>pilihan10 ;
        
        if(pilihan10=='V'){
          cout<<"Masukkan Panjang :\n";
          cin>>p;
          cout<<"Masukkan Lebar :\n";
          cin>>l;
          cout<<"Masukkan Tinggi :\n";
          cin>>t;
          Volume=p*l*t;
          cout<<"Volumenya adalah "<<Volume;
        }else if(pilihan10=='P'){
          cout<<"Masukkan Panjang :\n";
          cin>>p;
          cout<<"Masukkan Lebar :\n";
          cin>>l;
          cout<<"Masukkan Tinggi :\n";
          cin>>t;
          Luaspermukaan=2*(p*l + l*t + p*t);
          cout<<"Luas Permukaan nya adalah "<<Luaspermukaan;        
        }
      }else if(pilihan2=='d'){
        cout<<"Apa yang anda cari ?\n";
        cout<<"V. Volume\n";
        cout<<"P. Permukaan\n";
        cout<<"V/P ? ";
        cin>>pilihan11 ;
        
        if(pilihan11='V'){
          cout<<"Masukkan jari-jari :\n";
          cin>>r;
          cout<<"Masukkan Tinggi :\n";
          cin>>t;
          Volume=3.14*r*r*t;
          cout<<"Volume nya adalah "<<Volume;
        }else if(pilihan11='P'){
          cout<<"Masukkan jari-jari :\n";
          cin>>r;
          cout<<"Masukkan Tinggi :\n";
          cin>>t;
          Luaspermukaan=(3.14*2*r*t)+(2*3.14*r);
          cout<<"Luas permukaan nya adalah "<<Luaspermukaan;
        }       
      }else if(pilihan2=='e'){
        cout<<"Apa yang anda cari ?\n";
        cout<<"V. Volume\n";
        cout<<"P. Permukaan\n";
        cout<<"V/P ? ";
        cin>>pilihan12 ;
        
        if(pilihan12=='V'){
          cout<<"Masukkan sisi alas :";
          cin>>a;
          cout<<"Masukkan Tinggi Limas :";
          cin>>t;
          Volume=a*a*t/3;
          cout<<"Volume nya adalah "<<Volume;
        }else if(pilihan12=='P'){
          cout<<"Masukkan sisi alas :";
          cin>>a;
          cout<<"Masukkan Tinggi Limas :";
          cin>>t;
          cout<<"Maaf Rumus Belum ada.";
        }
      }else if(pilihan2=='f'){
        cout<<"Apa yang anda cari ?\n";
        cout<<"V. Volume\n";
        cout<<"P. Permukaan\n";
        cout<<"V/P ? ";
        cin>>pilihan13 ;
        
        if(pilihan13=='V'){
          cout<<"Masukkan Luas alas :";
          cin>>a;
          cout<<"Masukkan Tinggi :";
          cin>>t;
          Volume=a*t/3;
          cout<<"Volume nya adalah "<<Volume;
        }
      }else if(pilihan2=='g'){
        cout<<"Apa yang anda cari ?\n";
        cout<<"V. Volume\n";
        cout<<"P. Permukaan\n";
        cout<<"V/P ? ";
        cin>>pilihan14 ;
        
        if(pilihan14=='V'){
          cout<<"Masukkan Luas alas :";
          cin>>a;
          cout<<"Masukkan tinggi :";
          cin>>t;
          Volume=a*t;
          cout<<"Volumenya adalah "<<Volume;
        }
      }else if(pilihan2=='h'){
        cout<<"Apa yang anda cari ?\n";
        cout<<"V. Volume\n";
        cout<<"P. Permukaan\n";
        cout<<"V/P ? ";
        cin>>pilihan15 ;
        
        if(pilihan15=='V'){
          cout<<"Masukkan luas alas :";
          cin>>a;
          cout<<"Masukkan tinggi :";
          cin>>t;
          Volume=a*t;
          cout<<"Volumenya adalah "<<Volume;
        }
      }
    }else if(pilihan2=='i'){
      cout<<"Apa yang anda cari ?\n";
        cout<<"V. Volume\n";
        cout<<"P. Permukaan\n";
        cout<<"V/P ? ";
        cin>>pilihan16 ;
        
        if(pilihan16=='V'){
          cout<<"Masukkan jari-jari :";
          cin>>r;
          Volume=3.14*r*r*r*4/3;
          cout<<"Volume nya adalah "<<Volume;
        }else if(pilihan16=='P'){
          cout<<"Masukkan jari-jari :";
          cin>>r;
          Luaspermukaan=4*3.14*r*r;
          cout<<" Luas Permukaan nya adalah "<<Luaspermukaan;
        }else{
          cout<<"Maaf belum ada.";
          }
    }else{
      cout<<"Data yang anda input salah.";
}

}