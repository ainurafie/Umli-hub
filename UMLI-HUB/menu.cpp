//Program umlimi
//Tugas besar algoritma pemrograman
//Dibuat oleh
// 1. Iqbal Ainurafie
// 2. Reza Irfan Wijaya
//Kelas S1IF-07-H

#include <iostream>
#include <fstream>
using namespace std;


int cari(string b[], int y, string ch) {

    int posisi, i, ketemu;

    if (y <= 0)
        posisi = -1;
    else {
        ketemu = 0;
        i = 0;
        while ((i < y ) && ! ketemu) {
            if (b[i] == ch) {
                posisi = i;
                ketemu = 1;
            } else {
                i++;
            }
            if (!ketemu) {
                posisi = -1;
            }
        }
    }
    return posisi;
}

void pembelianurut () {
	int g,h,jumlah;
	jumlah=0;
	cout<<"berapa jumlah pestisida yang akan dibeli = ";cin>>g; //input jumlah pestisida
	cout<<endl;
	for (int i=1 ; i<=g ;i++){
		cout<<"item ke-"<<i<<" =";cin>>h; //input pestisida
		if (h==1){
			cout<<"===>harga = 29000"; 
			jumlah=jumlah+29000;
			cout<<endl;
		}else if (h==2){
			cout<<"===>harga = 34000";
			jumlah=jumlah+34000;
			cout<<endl;
		}else if (h==3){
			cout<<"===>harga = 35000";
			jumlah=jumlah+35000;
			cout<<endl;
		}else if (h==4){
			cout<<"===>harga = 44000";
			jumlah=jumlah+44000;
			cout<<endl;
		}else if (h==5){
			cout<<"===>harga = 47000";
			jumlah=jumlah+47000;
			cout<<endl;
		}else if (h==6){
			cout<<"===>harga = 49000";
			jumlah=jumlah+49000;
			cout<<endl;
		}else if (h==7){
			cout<<"===>harga = 54000";
			jumlah=jumlah+54000;
			cout<<endl;
		}else if (h==8){
			cout<<"===>harga = 67000";
			jumlah=jumlah+67000;
			cout<<endl;
		}else if (h==9){
			cout<<"===>harga = 75000";
			jumlah=jumlah+75000;
			cout<<endl;
		}else if (h==10){
			cout<<"===>harga = 76000";
			jumlah=jumlah+76000;
			cout<<endl;
		}else if (h==11){
			cout<<"===>harga = 87000";
			jumlah=jumlah+87000;
			cout<<endl;
		}else if (h==12){
			cout<<"===>harga = 91000";
			jumlah=jumlah+91000;
			cout<<endl;
		}else if (h==13){
			cout<<"===>harga = 98000";
			jumlah=jumlah+98000;
			cout<<endl;
		}else {
			cout<<"tidak ada pestisida didaftar"<<endl;		
		}
	
	}	
	cout<<endl;
	cout<<"total pembayaran = "<<jumlah;
	cout<<endl;
}


void pembelian () {
	int k,o,total;
	total=0;
	
	ofstream beli;
	
	beli.open("data beli.txt",ios :: trunc);
	
	cout<<"berapa jumlah pestisida yang akan dibeli = ";cin>>k; //input jumlah pestisida
	beli <<endl;
	beli <<"=============== UMLIMI ==============="<<endl;
	beli <<"Jumlah pestisida yang anda beli = " << k << endl<<endl;
	
	for (int i=1 ; i<=k ;i++){
		cout<<"item ke-"<<i<<" =";cin>>o; //input pestisida
		
		if (o==1){
			cout<<"===>harga = 29000"; 
			total=total+29000;
			
			beli << "AKARISIDA" <<endl<<endl;
			beli << "Harga       = 29000  "<<endl;
			int total1=k*29000;
			beli <<"Total harga = "<<total1<<endl;
			cout<<endl;
			
		}else if (o==2){
			cout<<"===>harga = 35000";
			total=total+35000;
			
			beli << "ALVISIDA" <<endl<<endl;
			beli << "Harga       = 35000 x "<<k<<endl;
			int total2=k*35000;
			beli <<"Total harga = "<<total2<<endl;
			cout<<endl;
			
		}else if (o==3){
			cout<<"===>harga = 34000";
			total=total+34000;
			cout<<endl;
		}else if (o==4){
			cout<<"===>harga = 44000";
			total=total+44000;
			cout<<endl;
		}else if (o==5){
			cout<<"===>harga = 47000";
			total=total+47000;
			cout<<endl;
		}else if (o==6){
			cout<<"===>harga = 76000";
			total=total+76000;
			cout<<endl;
		}else if (o==7){
			cout<<"===>harga = 87000";
			total=total+87000;
			cout<<endl;
		}else if (o==8){
			cout<<"===>harga = 75000";
			total=total+75000;
			cout<<endl;
		}else if (o==9){
			cout<<"===>harga =49000";
			total=total+49000;
			cout<<endl;
		}else if (o==10){
			cout<<"===>harga = 67000";
			total=total+67000;
			cout<<endl;
		}else if (o==11){
			cout<<"===>harga = 54000";
			total=total+54000;
			cout<<endl;
		}else if (o==12){
			cout<<"===>harga = 98000";
			total=total+98000;
			cout<<endl;
		}else if (o==13){
			cout<<"===>harga = 91000";
			total=total+91000;
			cout<<endl;
		}else{
			cout<<"tidak ada pestisida didaftar"<<endl;
		}
		beli.close();
	}
	cout<<endl;
	cout<<"total pembayaran = "<<total;
	cout<<endl;
}

void urut (string arr[] , int x){
	int a,b;
	string tmp;
	
	for (a=1 ; a<x ; a++){
		b=a;
		
		while (b>0 && arr[b-1] > arr[b]){
			tmp = arr[b];
			arr[b] = arr[b-1];
			arr[b-1] = tmp;
			b--;
		}
	}
}

void tampil (string a[] , int x){
	for (int i=0 ; i<x ;i++){
		cout<<a[i]<<endl;
	}
}

void urut1 (string arr[] , int z){
	int a,b;
	string tmp;
	
	for (a=1 ; a<z ; a++){
		b=a;
		
		while (b>0 && arr[b-1] > arr[b]){
			tmp = arr[b];
			arr[b] = arr[b-1];
			arr[b-1] = tmp;
			b--;
		}
	}
}
void tampil1 (string a[] , int z){
	for (int i=0 ; i<z ;i++){
		cout<<i+1<<"."<<a[i]<<endl;
	}
}

int main (){
	bagian1:
	int p;			  // variabel pilihan
	int x=5;		 // variabel menampung data hama
	int z=13;		// variabel menampung data hama dan harga untuk di sorting
	int y=10;	   // variabel menampung data hama untuk di searching
	
	string a[]={"|5| HAMA BAKTERI" , "|3| PENGGEREK BATANG" , "|4| TUNGRO" , "|2| GULMA" , "|1| TIKUS"};
	string t[]={"|2| KUTU PUTIH" , "|1| KUTU BATOK" , "|5| TUNGAU" , "|4| SEMUT" , "|3| KUTU SISIK"};
	string arr[]={"AKARISIDA 		= Rp. 29.000","ALGASIDA 		= Rp. 34.000","BAKTERISIDA		= Rp. 44.000","FUNGISIDA		= Rp. 47.000","MOLLUSKISIDA		= RP. 76.000","NEMATISIDA		= RP. 87.000","KANON			= RP. 75.000","GUSADRIN		= Rp. 49.000","INSEKTISIDA		= RP. 67.000","ALVISIDA		= Rp. 35.000","HERBISIDA		= Rp. 54.000","RODENTISA		= RP. 98.000","PESTISIDA SINTETIK	= Rp. 91.000"};
	string b[y]={"HAMA BAKTERI","PENGGEREK BATANG","TUNGRO","GULMA","TIKUS","KUTU PUTIH","KUTU BATOK","TUNGAU","SEMUT","KUTU SISIK"};
	
	cout<<"================UMLIMI-HUB================"<<endl;
	cout<<"|1| JENIS HAMA"<<endl;
	cout<<"|2| JENIS PESTISIDA"<<endl;
	cout<<"|3| BELI"<<endl;
	cout<<"|4| CARI"<<endl;
	cout<<"|5| KELUAR"<<endl<<endl;
	cout<<"Masukan pilihan :";cin>>p; // input pilihan
	
	switch (p){
		case 1:
			bagian2:
			char backe;  //variabel untuk data kembali
			int b;		//variabel untuk memilih menu
			cout<<endl;
			cout<<"===============JENIS HAMA================"<<endl;
			cout<<"|1| PADI"<<endl;
			cout<<"|2| BUAH"<<endl;
			cout<<"|3| KEMBALI KE MENU UTAMA"<<endl;
			cout<<endl;
			cout<<"Masukan pilihan :";cin>>b; //input pilihan
			
			if (b==1){
				subbagian2:
				int c;        //variabel untuk memilih menu
				char kembali; //variabel untuk data kemabli
				cout<<endl;
				cout<<"============DAFTAR HAMA PADI=============";
				cout<<endl;
				urut(a,x);
				tampil(a,x);
				urut (a,x);
				cout<<"|6| KEMBALI KE MENU SEBELUMNYA"<<endl;
				cout<<endl;
				cout<<"masukan pilihan :";cin>>c; // input pilihan
				if (c==1){
					cout<<endl;
					cout<<"HAMA TIKUS"<<endl;
					cout<<"|1| Penyebab        : Tikus"<<endl;
					cout<<"|2| Jenis Pestisida : Rodentisida"<<endl;
					cout<<endl;
					cout<<"kembali ke menu sebelumnya [Y/T]-->";cin>>kembali; // input pilihan kembali atau tidak
					if (kembali=='Y'||kembali=='y'){
						system ("cls");
						system ("pause");
						goto subbagian2;
						
					}else if (kembali=='T'||kembali=='t'){
						cout<<"terima kasih";
						return 0;
					}
					
				}else if(c==2){
					cout<<endl;
					cout<<"HAMA GULMA"<<endl;
					cout<<"|1| Penyebab        : Gulma"<<endl;
					cout<<"|2| Jenis Pestisida : Pestidida Sintetik"<<endl;
					cout<<endl;
					cout<<"kembali ke menu sebelumnya [Y/T]-->";cin>>kembali; // input pilihan kembali atau tidak
					if (kembali=='Y'||kembali=='y'){
						system ("cls");
						system ("pause");
						goto subbagian2; //kembali ke menu 
						
					}else if (kembali=='T'||kembali=='t'){
						cout<<"terima kasih";
						return 0;
					}
					
				}else if(c==3){
					cout<<endl;
					cout<<"HAMA PENGGEREK BATANG"<<endl;
					cout<<"|1| Penyebab        : Penggerek Batang"<<endl;
					cout<<"|2| Jenis Pestisida : Pestidida Kimia"<<endl;
					cout<<endl;
					cout<<"kembali ke menu sebelumnya [Y/T]-->";cin>>kembali; // input pilihan kembali atau tidak
					if (kembali=='Y'||kembali=='y'){
						system ("cls");
						system ("pause");
						goto subbagian2; //kembali ke menu 
						
					}else if (kembali=='T'||kembali=='t'){
						cout<<"terima kasih";
						return 0;
					}
					
				}else if(c==4){
					cout<<endl;
					cout<<"HAMA TUNGRO"<<endl;
					cout<<"|1| Penyebab        : Tungro"<<endl;
					cout<<"|2| Jenis Pestisida : Pestisida Kimia"<<endl;
					cout<<endl;
					cout<<"kembali ke menu sebelumnya [Y/T]-->";cin>>kembali; // input pilihan kembali atau tidak
					if (kembali=='Y'||kembali=='y'){
						system ("cls");
						system ("pause");
						goto subbagian2; //kembali ke menu 
						
					}else if (kembali=='T'||kembali=='t'){
						cout<<"terima kasih";
						return 0;
					}
					
				}else if(c==5){
					cout<<endl;
					cout<<"HAMA BAKTERI"<<endl;
					cout<<"|1| Penyebab        : Bachteria"<<endl;
					cout<<"|2| Jenis Pestisida : Bakterisida"<<endl;
					cout<<endl;
					cout<<"kembali ke menu sebelumnya [Y/T]-->";cin>>kembali; // input pilihan kembali atau tidak
					if (kembali=='Y'||kembali=='y'){
						system ("cls");
						system ("pause");
						goto subbagian2; //kembali ke menu 
						
					}else if (kembali=='T'||kembali=='t'){
						cout<<"terima kasih";
						return 0;
					}
					
				}else if(c==6){
					system ("cls");
					system ("pause");
					goto bagian2; //kembali ke menu 
					
				}else{
					cout<<endl;
					cout<<"Maaf,menu tidak tersedia"<<endl;
					cout<<endl;
					cout<<"kembali ke menu sebelumnya [Y/T]-->";cin>>kembali;  // input pilihan kembali atau tidak
					if (kembali=='Y'||kembali=='y'){
						system ("cls");
						system ("pause");
						goto bagian2; //kembali ke menu 
						
					}else if (kembali=='T'||kembali=='t'){
						cout<<"terima kasih";
						return 0;
					}
				}
				
				
				
				
			}else if(b==2){
				subbagian2ke2: 
				char back;	//variabel untuk data kembali
				int d;		//varibael untuk pilihan
				cout<<endl;
				cout<<"============DAFTAR HAMA BUAH=============";
				cout<<endl;
				urut (t,x);
				tampil (t,x);
				urut (t,x);
				cout<<"|6| KEMBALI KE MENU SEBELUMNYA"<<endl;
				cout<<endl;
				cout<<"Masukan Pilihan :";cin>>d; //input pilihan
				if (d==1){
					cout<<endl;
					cout<<"HAMA KUTU BATOK"<<endl;
					cout<<"|1| Penyebab        : Kutu Batok"<<endl;
					cout<<"|2| Jenis Pestisida : Kanon"<<endl;
					cout<<endl;
					cout<<"kembali ke menu sebelumnya [Y/T]-->";cin>>back; //input kembali atau tidak
					if (back=='Y'||back=='y'){
						system ("cls");
						system ("pause");
						goto subbagian2ke2; //kembali ke menu
						
					}else if (back=='T'||back=='t'){
						cout<<"terima kasih";
						return 0;
					}
					
				}else if(d==2){
					cout<<endl;
					cout<<"HAMA KUTU PUTIH"<<endl;
					cout<<"|1| Penyebab        : Kutu Putih"<<endl;
					cout<<"|2| Jenis Pestisida : Insektisida Sistemik"<<endl;
					cout<<endl;
					cout<<"kembali ke menu sebelumnya [Y/T]-->";cin>>back; //input kembali atau tidak
					if (back=='Y'||back=='y'){
						system ("cls");
						system ("pause");
						goto subbagian2ke2; //kembali ke menu
						
					}else if (back=='T'||back=='t'){
						cout<<"terima kasih";
						return 0;
					}
					
				}else if(d==3){
					cout<<endl;
					cout<<"HAMA KUTU SISIK"<<endl;
					cout<<"|1| Penyebab        : Kutu Sisik"<<endl;
					cout<<"|2| Jenis Pestisida : Kanon"<<endl;
					cout<<endl;
					cout<<"kembali ke menu sebelumnya [Y/T]-->";cin>>back; //input kembali atau tidak
					if (back=='Y'||back=='y'){
						system ("cls");
						system ("pause");
						goto subbagian2ke2; //kembali ke menu
						
					}else if (back=='T'||back=='t'){
						cout<<"terima kasih";
						return 0;
					}
					
				}else if(d==4){
					cout<<endl;
					cout<<"HAMA SEMUT"<<endl;
					cout<<"|1| Penyebab        : Semut"<<endl;
					cout<<"|2| Jenis Pestisida : Gusadrin"<<endl;
					cout<<endl;
					cout<<"kembali ke menu sebelumnya [Y/T]-->";cin>>back; //input kembali atau tidak
					if (back=='Y'||back=='y'){
						system ("cls");
						system ("pause");
						goto subbagian2ke2;  //kembali ke menu
						
					}else if (back=='T'||back=='t'){
						cout<<"terima kasih";
						return 0;
					}
					
				}else if(d==5){
					cout<<endl;
					cout<<"HAMA TUNGAU"<<endl;
					cout<<"|1| Penyebab        : Tungau"<<endl;
					cout<<"|2| Jenis Pestisida : Rodentisida"<<endl;
					cout<<endl;
					cout<<"kembali ke menu sebelumnya [Y/T]-->";cin>>back; //input kembali atau tidak
					if (back=='Y'||back=='y'){
						system ("cls");
						system ("pause");
						goto subbagian2ke2; //kembali ke menu
						
					}else if (back=='T'||back=='t'){
						cout<<"terima kasih";
						return 0;
					}
					
				}else if(d==6){
					system ("cls");
					system ("pause");
					goto bagian2;	
					
				}else{
					cout<<endl;
					cout<<"Maaf,menu tidak tersedia"<<endl;
					cout<<endl;
					cout<<"kembali ke menu sebelumnya [Y/T]-->";cin>>back; //input kembali atau tidak
					if (back=='Y'||back=='y'){
						system ("cls");
						system ("pause");
						goto subbagian2ke2; //kembali ke menu
						
					}else if (back=='T'||back=='t'){
						cout<<"terima kasih";
						return 0;
					}
				}
				
			}else if(b==3){
				system ("cls");
				system ("pause");
				goto bagian1; //kembali ke menu
				
			}else{
				cout<<endl;
				cout<<"menu tidak ada"<<endl;
				cout<<endl;
				cout<<"kembali ke menu sebelumnya [Y/T]-->";cin>>backe; //input kembali atau tidak
				if (backe=='Y'||backe=='y'){
					system ("cls");
					system ("pause");
					goto bagian2; //kembali ke menu
						
				}else if (backe=='T'||backe=='t'){
					cout<<"terima kasih";
					return 0;
				}
			}
			break;
	
		case 2:
			bagian3:
			char ulang; //variabel data kembali
			int a;		//variabel pilihan
			cout<<"===============JENIS PESTISIDA================"<<endl;	
			cout<<"1. Akarisida"<<endl;
			cout<<"2. Algasida"<<endl;
			cout<<"3. Alvisida"<<endl;
			cout<<"4. Bakterisida"<<endl;
			cout<<"5. Fungisida"<<endl;
			cout<<"6. Molluskisida"<<endl;
			cout<<"7. Nematisida"<<endl;
			cout<<"8. Kembali ke menu utama"<<endl<<endl;
			cout<<"Masukan Pilihan : ";cin>>a; //input pilihan
			
			if (a==1){
				cout<<endl;
				cout<<"AKARISIDA"<<endl;
				cout<<"|1| Nama Lain	: Mitesida"<<endl;
				cout<<"|2| Kegunaan	: Membunuh tungau/kutu"<<endl;
				cout<<endl;
				cout<<"kembali ke menu sebelumnya [Y/T]-->";cin>>ulang; //input kembali atau tidak
				if (ulang=='Y'||ulang=='y'){
					system ("cls");
					system ("pause");
					goto bagian3; //kembali ke menu
						
				}else if (ulang=='T'||ulang=='t'){
					cout<<"terima kasih";
					return 0;
				}
				
			}else if (a==2){
				cout<<endl;
				cout<<"ALGASIDA"<<endl;
				cout<<"|1| Nama Lain	: Gangga Laut"<<endl;
				cout<<"|2| Kegunaan	: Membunuh alge"<<endl;
				cout<<endl;
				cout<<"kembali ke menu sebelumnya [Y/T]-->";cin>>ulang; //input kembali atau tidak
				if (ulang=='Y'||ulang=='y'){
					system ("cls");
					system ("pause");
					goto bagian3; //kembali ke menu
						
				}else if (ulang=='T'||ulang=='t'){
					cout<<"terima kasih";
					return 0;
				}
			}else if (a==3){
				cout<<endl;
				cout<<"ALVISIDA"<<endl;
				cout<<"|1| Nama Lain	: Avis"<<endl;
				cout<<"|2| Kegunaan	: Membunuh Burung"<<endl;
				cout<<endl;
				cout<<"kembali ke menu sebelumnya [Y/T]-->";cin>>ulang;  //input kembali atau tidak
				if (ulang=='Y'||ulang=='y'){
					system ("cls");
					system ("pause");
					goto bagian3; //kembali ke menu
						
				}else if (ulang=='T'||ulang=='t'){
					cout<<"terima kasih";
					return 0;
				}
			}else if (a==4){
				cout<<endl;	
				cout<<"BAKTERISIDA"<<endl;
				cout<<"|1| Nama Lain	: Bacterium"<<endl;
				cout<<"|2| Kegunaan 	: Membunuh Bakteri"<<endl;
				cout<<endl;
				cout<<"kembali ke menu sebelumnya [Y/T]-->";cin>>ulang; //input kembali atau tidak
				if (ulang=='Y'||ulang=='y'){
					system ("cls");
					system ("pause");
					goto bagian3; //kembali ke menu
						
				}else if (ulang=='T'||ulang=='t'){
					cout<<"terima kasih";
					return 0;
				}
			}else if (a==5){
				cout<<endl;	
				cout<<"FUNGISIDA"<<endl;
				cout<<"|1| Nama Lain	: Fungus"<<endl;
				cout<<"|2| Kegunaan	: Membunuh Jamur"<<endl;
				cout<<endl;
				cout<<"kembali ke menu sebelumnya [Y/T]-->";cin>>ulang; //input kembali atau tidak
				if (ulang=='Y'||ulang=='y'){
					system ("cls");
					system ("pause");
					goto bagian3; //kembali ke menu
						
				}else if (ulang=='T'||ulang=='t'){
					cout<<"terima kasih";
					return 0;
				}
			}else if (a==6){
				cout<<endl;	
				cout<<"MOLLUSKISIDA"<<endl;
				cout<<"|1| Nama Lain	: Molluscus"<<endl;
				cout<<"|2| Kegunaan	: Membunuh Siput"<<endl;
				cout<<endl;
				cout<<"kembali ke menu sebelumnya [Y/T]-->";cin>>ulang; //input kembali atau tidak
				if (ulang=='Y'||ulang=='y'){
					system ("cls");
					system ("pause");
					goto bagian3; //kembali ke menu
						
				}else if (ulang=='T'||ulang=='t'){
					cout<<"terima kasih";
					return 0;
				}
			}else if (a==7){
				cout<<endl;	
				cout<<"NEMATISIDA"<<endl;
				cout<<"|1| Nama Lain	: Nematoda"<<endl;
				cout<<"|2| Kegunaan	: Membunuh Nematoda"<<endl;
				cout<<endl;
				cout<<"kembali ke menu sebelumnya [Y/T]-->";cin>>ulang; //input kembali atau tidak
				if (ulang=='Y'||ulang=='y'){
					system ("cls");
					system ("pause");
					goto bagian3; //kembali ke menu
						
				}else if (ulang=='T'||ulang=='t'){
					cout<<"terima kasih";
					return 0;
				}
			}else if (a==8){
				system ("cls");
				system ("pause");
				goto bagian1; //kembali ke menu
				
			} else {
				cout<<endl;
				cout<<"menu tidak ada"<<endl;
				cout<<endl;
				cout<<"kembali ke menu sebelumnya [Y/T]-->";cin>>ulang; //input kembali atau tidak
				if (ulang=='Y'||ulang=='y'){
				if (ulang=='Y'||ulang=='y'){
					system ("cls");
					system ("pause");
					goto bagian3; //kembali ke menu
						
				}else if (ulang=='T'||ulang=='t'){
					cout<<"terima kasih";
					return 0;
				}
			
				}
			break;
			
		case 3:
			uruut:
			char ulangi1;	//variabel data kembali
			char urut,urut10; // varibael data sorting
			int h;  //varibel pilihan
			
			cout<<endl;
			cout<<"================================================================================="<<endl;
			cout<<"| No |			Nama Pestisida			|         Harga 	|"<<endl;
			cout<<"================================================================================="<<endl;
			cout<<"| 1. |			AKARISIDA			| 	Rp.29.000 	|"<<endl;
			cout<<"---------------------------------------------------------------------------------"<<endl;
			cout<<"| 2. |	  		ALVISIDA			| 	Rp.35.000 	|"<<endl;
			cout<<"---------------------------------------------------------------------------------"<<endl;
			cout<<"| 3. |	  		ALGASIDA			| 	Rp.34.000 	|"<<endl;
			cout<<"---------------------------------------------------------------------------------"<<endl;
			cout<<"| 4. |	  		BAKTERISIDA			| 	Rp.44.000 	|"<<endl;
			cout<<"---------------------------------------------------------------------------------"<<endl;
			cout<<"| 5. |	  		FUNGSIDA			| 	Rp.47.000 	|"<<endl;
			cout<<"---------------------------------------------------------------------------------"<<endl;
			cout<<"| 6. |	  		MOLLUSKISIDA			| 	Rp.76.000 	|"<<endl;
			cout<<"---------------------------------------------------------------------------------"<<endl;
			cout<<"| 7. |	 		NEMATISIDA			|	Rp.87.000 	|"<<endl;
			cout<<"---------------------------------------------------------------------------------"<<endl;
			cout<<"| 8. |	  		KANON				|	Rp.75.000 	|"<<endl;
			cout<<"---------------------------------------------------------------------------------"<<endl;
			cout<<"| 9. |	  		GUSADRIN			|	Rp.49.000 	|"<<endl;
			cout<<"---------------------------------------------------------------------------------"<<endl;
			cout<<"| 10. |	 		INSEKTISIDA			| 	Rp.67.000 	|"<<endl;
			cout<<"---------------------------------------------------------------------------------"<<endl;
			cout<<"| 11. |	  		HERBISIDA			| 	Rp.54.000 	|"<<endl;
			cout<<"---------------------------------------------------------------------------------"<<endl;
			cout<<"| 12. |	  		RODENTISA			| 	Rp.98.000 	|"<<endl;
			cout<<"---------------------------------------------------------------------------------"<<endl;
			cout<<"| 13. |			PESTISIDA SINTETIK		| 	Rp.91.000 	|"<<endl;
			cout<<"---------------------------------------------------------------------------------"<<endl<<endl;
			
			cout<<"Urutkan berdasarkan harga terendah[Y/T] :";cin>>urut; //input pilihan untuk sorting tau tidak
			if(urut=='Y'||urut=='y'){
				int pb;
				cout<<endl;
				urut1(arr,z);
				tampil1(arr,z);
				urut1(arr,z);
				
				cout<<endl;
				pembelianurut();
				
				
			}else if(urut=='T'||urut=='t'){
				cout<<endl;
				pembelian();
					
			}else{
				cout<<"tidak merespon"<<endl<<endl;
				cout<<"kembali ke menu sebelumnya [Y/T] :";cin>>urut10; //input untuk kembali atau tidak
				
			if(urut=='Y'||urut=='y'){
				system ("cls");
				system ("pause");
				goto uruut; //kembali ke menu
			}else if(urut=='T'||urut=='t'){
				return 0;	
			}
			}
			
			cout<<"kembali ke menu utama [Y/T]-->";cin>>ulang; //input untuk kembali atau tidak
			if (ulang=='Y'||ulang=='y'){
				system ("cls");
				system ("pause");
				goto bagian1; //kembali ke menu
						
			}else if (ulang=='T'||ulang=='t'){
				cout<<"terima kasih";
				return 0;
			}
			
			break;
		
		case 4:
			{
			pencarian:
			char q; //variabel data kembali
			int y=10;	// parameter isi array
			string c; // variabel data cari
			string b[y]={"HAMA BAKTERI","PENGGEREK BATANG","TUNGRO","GULMA","TIKUS","KUTU PUTIH","KUTU BATOK","TUNGAU","SEMUT","KUTU SISIK"};
			
			cout<<endl;
			cout<<"DAFTAR NAMA HAMA"<<endl;
			cout<<"================="<<endl<<endl;
			for (int i=0;i<y;i++){
				cout << i+1 << "." << b[i] << endl;
			}
			cout<<endl;
			cout<<"Masukan nama hama untuk dicari : ";
			cin.ignore();
			getline (cin, c); //masukan inputan data untuk dicari
			cout<<endl;
			
			int posisi=cari(b, y, c);
			
			if (posisi != -1){
				cout << "HAMA " << c << " DITEMUKAN PADA URUTAN KE-"<<posisi+1<<endl;
				
				if (c=="TUNGRO"||c=="tungro"){
					
					cout<<"Pestisida = Pestisida Kimia "<<endl<<endl;
					cout<<"Kembali kemenu utama [Y/T] : ";cin>>q; //input untuk kembali atau tidak
					if (q=='Y'||q=='y'){
					system ("cls");
					system ("pause");
					goto bagian1; //kembali ke menu
						
					}else if (q=='T'||q=='t'){
					cout<<"terima kasih";
					return 0;
					}
					
				}else if (c=="HAMA BAKTERI"||c=="hama bakteri"){
					cout<<"Pestisida = Bakterisida"<<endl<<endl;
					cout<<"Kembali kemenu utama [Y/T] : ";cin>>q; //input untuk kembali atau tidak
					if (q=='Y'||q=='y'){
					system ("cls");
					system ("pause");
					goto bagian1; //kembali ke menu
					}
				}else if (q=='T'||q=='t'){
					cout<<"terima kasih";
					return 0;
			
				}else if (c=="PENGGEREK BATANG"||c=="penggerek batang"){
					cout<<"Pestisida = Pestidida Kimia"<<endl<<endl;
					cout<<"Kembali kemenu utama [Y/T] : ";cin>>q; //input untuk kembali atau tidak
					if (q=='Y'||q=='y'){ 
					system ("cls");
					system ("pause");
					goto bagian1; //kembali ke menu
					}
				}else if (q=='T'||q=='t'){
					cout<<"terima kasih";
					return 0;
				
		    	}else if (c=="GULMA"||c=="gulma"){
					cout<<"Pestisida = Pestidida Sintetik"<<endl<<endl;
					cout<<"Kembali kemenu utama [Y/T] : ";cin>>q; //input untuk kembali atau tidak
					if (q=='Y'||q=='y'){ 
					system ("cls");
					system ("pause");
					goto bagian1; //kembali ke menu
					}
				}else if (q=='T'||q=='t'){
					cout<<"terima kasih";
					return 0;
					
				}else if (c=="TIKUS"||c=="tikus"){
					cout<<"Pestisida = Rodentisida"<<endl<<endl;
					cout<<"Kembali kemenu utama [Y/T] : ";cin>>q; //input untuk kembali atau tidak
					if (q=='Y'||q=='y'){
					system ("cls");
					system ("pause");
					goto bagian1; //kembali ke menu
					}
				}else if (q=='T'||q=='t'){
					cout<<"terima kasih";
					return 0;
					
				}else if (c=="KUTU PUTIH"||c=="kutu putih"){
					cout<<"Pestisida = Insektisida Sistemik"<<endl<<endl;
					cout<<"Kembali kemenu utama [Y/T] : ";cin>>q; //input untuk kembali atau tidak
					if (q=='Y'||q=='y'){
					system ("cls");
					system ("pause");
					goto bagian1; //kembali ke menu
					}
				}else if (q=='T'||q=='t'){
					cout<<"terima kasih";
					return 0;
					
				}else if (c=="KUTU BATOK"||c=="kutu batok"){
					cout<<"Pestisida = Kanon"<<endl<<endl;
					cout<<"Kembali kemenu utama [Y/T] : ";cin>>q; //input untuk kembali atau tidak
					if (q=='Y'||q=='y'){
					system ("cls");
					system ("pause");
					goto bagian1; //kembali ke menu
					}
				}else if (q=='T'||q=='t'){
					cout<<"terima kasih";
					return 0;
					
				}else if (c=="KUTU SISIK"||c=="kutu sisik"){
					cout<<"Pestisida = Kanon"<<endl<<endl;
					cout<<"Kembali kemenu utama [Y/T] : ";cin>>q; //input untuk kembali atau tidak
					if (q=='Y'||q=='y'){
					system ("cls");
					system ("pause");
					goto bagian1; //kembali ke menu
						
				}else if (q=='T'||q=='t'){
					cout<<"terima kasih";
					return 0;
					}
				}else if (c=="SEMUT"||c=="semut"){
					cout<<"Pestisida = Gusadrin"<<endl<<endl;
					cout<<"Kembali kemenu utama [Y/T] : ";cin>>q; //input untuk kembali atau tidak
					if (q=='Y'||q=='y'){
					system ("cls");
					system ("pause");
					goto bagian1; //kembali ke menu
					}
				}else if (q=='T'||q=='t'){
					cout<<"terima kasih";
					return 0;
					
				}
		   	 }else {
		        cout << "HAMA " << c << " tidak ditemukan " << endl<<endl;
		        cout<<"Kembali kemenu utama [Y/T] : ";cin>>q; //input untuk kembali atau tidak
					if (q=='Y'||q=='y'){
					system ("cls");
					system ("pause");
					goto bagian1;  //kembali ke menu
					
				}else if (q=='T'||q=='t'){
					cout<<"terima kasih";
					} 
					return 0;
			}
			break;
		}

		case 5:
			cout<<endl;
			cout<<"Terima kasih";
			return 0; //keluar dari program
			
		break;
		
		
		default:
			char m;	//variabel data kembali
			cout<<endl;
			cout<<"pilihan tidak ada"<<endl<<endl;
			cout<<"input ulang [Y/T] : ";cin>>m; //input untuk kembali atau tidak
			if (m=='Y'||m=='y'){
				system ("cls");
				system ("pause");
				goto bagian1; //kembali ke menu
						
			}else if (m=='T'||m=='t'){
				cout<<"terima kasih";
				return 0; // keluar dari program
			}		
	}	
	
   }
   
   return 0; //pengembalian nilai dari fungsi
}
