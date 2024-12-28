#include <iostream>
using namespace std;

// Nama : Anak Agung Mas Mayuri
// Kelas : XI IPA 8


int main (){
	float a;
	char mode;
	
	cout << "== Selamat Datang di Konversi Satuan Waktu ==" << endl;
	cout << endl;
	cout << "Silahkan piih mode konversi" << endl;
	cout << "A. Konversi Tahun" << endl;
	cout << "B. Konversi Bulan" << endl;
	cout << "C. Konversi Minggu" << endl;
	cout << "D. Konversi Hari" << endl;
	cout << "E. Konversi Jam" << endl;
	cout << "F. Konversi Menit" << endl;
	cout << "G. Konversi Detik" << endl;
	cout << endl;
	cout << "Masukkan pilihan anda dalam Huruf Kapital : " << endl;
	cin >> mode;
	cout << "--------------------------------------------" << endl;
	
	switch (mode){
		case 'A':
			cout << "Konversi Tahun" << endl;
			cout << endl;
			cout << "Silahkan piih mode konversi Tahun" << endl;
            
			cout << "a. Tahun ke Bulan" << endl;
			cout << "b. Tahun ke Minggu" << endl;
			cout << "c. Tahun ke Hari" << endl;
			cout << "d. Tahun ke Jam" << endl;
			cout << "e. Tahun ke Menit" << endl;
			cout << "f. Tahun ke Detik" << endl;
			cout << endl;
			cout << "Masukkan pilihan anda : " << endl;
			cin >> mode;
			cout << "--------------------------------------------" << endl;
			cout << endl;
			
			
			switch (mode){
       			case 'a':
            		cout << "Tahun ke Bulan" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Tahun" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Dalam " << a << " Tahun terdapat " << a*12 << " Bulan" <<endl;
		            break;
            
            	case 'b':
            		cout << "Tahun ke Minggu" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Tahun" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Dalam " << a << " Tahun terdapat " << a*52 << " Minggu" <<endl;
		            break;
	
				case 'c':
            		cout << "Tahun ke Hari" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Tahun" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Dalam " << a << " Tahun terdapat " << a*365 << " Hari" <<endl;
		            break;
		            
		        case 'd':
            		cout << "Tahun ke Jam" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Tahun" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Dalam " << a << " Tahun terdapat " << a*8760 << " Jam" <<endl;
		            break;
		            
		        case 'e':
            		cout << "Tahun ke Menit" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Tahun" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Dalam " << a << " Tahun terdapat " << a*525600 << " Menit" <<endl;
		            break;
		            
		        case 'f':
            		cout << "Tahun ke Detik" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Tahun" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Dalam " << a << " Tahun terdapat " << a*3.154e+7 << " Detik" <<endl;
		            break;
		            
		        default:
		        	cout << "Pilihan tidak tersedia" << endl;
		    }
			break;
	
		case 'B':
			cout << "Konversi Bulan" << endl;
			cout << endl;
			cout << "Silahkan piih mode konversi Bulan" << endl;
            
			cout << "a. Bulan ke Tahun" << endl;
			cout << "b. Bulan ke Minggu" << endl;
			cout << "c. Bulan ke Hari" << endl;
			cout << "d. Bulan ke Jam" << endl;
			cout << "e. Bulan ke Menit" << endl;
			cout << "f. Bulan ke Detik" << endl;
			cout << endl;
			cout << "Masukkan pilihan anda : " << endl;
			cin >> mode;
			cout << "--------------------------------------------" << endl;
			cout << endl;
			
			
			switch (mode){
       			case 'a':
            		cout << "Bulan ke Tahun" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Bulan" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Terdapat " << a << " Bulan dalam " << a/12 << " Tahun" <<endl;
		            break;
            
            	case 'b':
            		cout << "Bulan ke Minggu" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Bulan" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Dalam " << a << " Bulan terdapat " << a*4.35 << " Minggu" <<endl;
		            break;
	
				case 'c':
            		cout << "Bulan ke Hari" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Bulan" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Dalam " << a << " Bulan terdapat " << a*30.5 << " Hari" <<endl;
		            break;
		            
		        case 'd':
            		cout << "Bulan ke Jam" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Bulan" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Dalam " << a << " Bulan terdapat " << a*730 << " Jam" <<endl;
		            break;
		            
		        case 'e':
            		cout << "Bulan ke Menit" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Bulan" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Dalam " << a << " Bulan terdapat " << a*43800 << " Menit" <<endl;
		            break;
		            
		        case 'f':
            		cout << "Bulan ke Detik" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Bulan" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Dalam " << a << " Bulan terdapat " << a*2.628e+6 << " Detik" <<endl;
		            break;
		            
		        default:
		        	cout << "Pilihan tidak tersedia" << endl;
		        	break;    
			}
		  	break;
		  
		case 'C':
			cout << "Konversi Minggu" << endl;
			cout << endl;
			cout << "Silahkan piih mode konversi Minggu" << endl;
            
			cout << "a. Minggu ke Tahun" << endl;
			cout << "b. Minggu ke Bulan" << endl;
			cout << "c. Minggu ke Hari" << endl;
			cout << "d. Minggu ke Jam" << endl;
			cout << "e. Minggu ke Menit" << endl;
			cout << "f. Minggu ke Detik" << endl;
			cout << endl;
			cout << "Masukkan pilihan anda : " << endl;
			cin >> mode;
			cout << "--------------------------------------------" << endl;
			cout << endl;
			
			
			switch (mode){
       			case 'a':
            		cout << "Minggu ke Tahun" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Minggu" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Terdapat " << a << " Minggu dalam " << a/52.143 << " Tahun" <<endl;
		            break;
            
            	case 'b':
            		cout << "Minggu ke Bulan" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Minggu" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Terdapat " << a << " Minggu dalam " << a/4.35 << " Bulan" <<endl;
		            break;
	
				case 'c':
            		cout << "Minggu ke Hari" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Minggu" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Dalam " << a << " Minggu terdapat " << a*7 << " Hari" <<endl;
		            break;
		            
		        case 'd':
            		cout << "Minggu ke Jam" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Minggu" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Dalam " << a << " Minggu terdapat " << a*168 << " Jam" <<endl;
		            break;
		            
		        case 'e':
            		cout << "Minggu ke Menit" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Minggu" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Dalam " << a << " Minggu terdapat " << a*10080 << " Menit" <<endl;
		            break;
		            
		        case 'f':
            		cout << "Minggu ke Detik" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Minggu" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Dalam " << a << " Minggu terdapat " << a*604800 << " Detik" <<endl;
		            break;
		            
		        default:
		        	cout << "Pilihan tidak tersedia" << endl;
		        	break;    
			}  
			break;
		 
		case 'D':
			cout << "Konversi Hari" << endl;
			cout << endl;
			cout << "Silahkan piih mode konversi Hari" << endl;
            
			cout << "a. Hari ke Tahun" << endl;
			cout << "b. Hari ke Bulan" << endl;
			cout << "c. Hari ke Minggu" << endl;
			cout << "d. Hari ke Jam" << endl;
			cout << "e. Hari ke Menit" << endl;
			cout << "f. Hari ke Detik" << endl;
			cout << endl;
			cout << "Masukkan pilihan anda : " << endl;
			cin >> mode;
			cout << "--------------------------------------------" << endl;
			cout << endl;
			
			
			switch (mode){
       			case 'a':
            		cout << "Hari ke Tahun" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Hari" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Terdapat " << a << " Hari dalam " << a/365 << " Tahun" <<endl;
		            break;
            
            	case 'b':
            		cout << "Hari ke Bulan" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Hari" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Terdapat " << a << " Hari dalam " << a/30.5 << " Bulan" <<endl;
		            break;
	
				case 'c':
            		cout << "Hari ke Minggu" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Hari" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Terdapat " << a << " Hari dalam " << a/7 << " Minggu" <<endl;
		            break;
		            
		        case 'd':
            		cout << "Hari ke Jam" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Hari" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Dalam " << a << " Hari terdapat " << a*24 << " Jam" <<endl;
		            break;
		            
		        case 'e':
            		cout << "Hari ke Menit" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Hari" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Dalam " << a << " Hari terdapat " << a*1440 << " Menit" <<endl;
		            break;
		            
		        case 'f':
            		cout << "Hari ke Detik" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Hari" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Dalam " << a << " Hari terdapat " << a*86400 << " Detik" <<endl;
		            break;
		            
		        default:
		        	cout << "Pilihan tidak tersedia" << endl;
		        	break;    
			} 
			break;
			
		case 'E':
			cout << "Konversi Jam" << endl;
			cout << endl;
			cout << "Silahkan piih mode konversi Jam" << endl;
            
			cout << "a. Jam ke Tahun" << endl;
			cout << "b. Jam ke Bulan" << endl;
			cout << "c. Jam ke Minggu" << endl;
			cout << "d. Jam ke Hari" << endl;
			cout << "e. Jam ke Menit" << endl;
			cout << "f. Jam ke Detik" << endl;
			cout << endl;
			cout << "Masukkan pilihan anda : " << endl;
			cin >> mode;
			cout << "--------------------------------------------" << endl;
			cout << endl;
			
			
			switch (mode){
       			case 'a':
            		cout << "Jam ke Tahun" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Jam" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Terdapat " << a << " Jam dalam " << a/8760 << " Tahun" <<endl;
		            break;
            
            	case 'b':
            		cout << "Jam ke Bulan" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Jam" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Terdapat " << a << " Jam dalam " << a/730 << " Bulan" <<endl;
		            break;
	
				case 'c':
            		cout << "Jam ke Minggu" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Jam" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Terdapat " << a << " Jam dalam " << a/168 << " Minggu" <<endl;
		            break;
		            
		        case 'd':
            		cout << "Jam ke Hari" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Jam" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Terdapat " << a << " Jam dalam " << a/24 << " Hari" <<endl;
		            break;
		            
		        case 'e':
            		cout << "Jam ke Menit" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Jam" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Dalam " << a << " Jam terdapat " << a*60 << " Menit" <<endl;
		            break;
		            
		        case 'f':
            		cout << "Jam ke Detik" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Jam" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Dalam " << a << " Jam terdapat " << a*3600 << " Detik" <<endl;
		            break;
		            
		        default:
		        	cout << "Pilihan tidak tersedia" << endl;
		        	break;    
			} 
			break;
			
		case 'F':
			cout << "Konversi Menit" << endl;
			cout << endl;
			cout << "Silahkan piih mode konversi Menit" << endl;
            
			cout << "a. Menit ke Tahun" << endl;
			cout << "b. Menit ke Bulan" << endl;
			cout << "c. Menit ke Minggu" << endl;
			cout << "d. Menit ke Hari" << endl;
			cout << "e. Menit ke Jam" << endl;
			cout << "f. Menit ke Detik" << endl;
			cout << endl;
			cout << "Masukkan pilihan anda : " << endl;
			cin >> mode;
			cout << "--------------------------------------------" << endl;
			cout << endl;
			
			
			switch (mode){
       			case 'a':
            		cout << "Menit ke Tahun" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Menit" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Terdapat " << a << " Menit dalam " << a/525600 << " Tahun" <<endl;
		            break;
            
            	case 'b':
            		cout << "Menit ke Bulan" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Menit" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Terdapat " << a << " Menit dalam " << a/43800 << " Bulan" <<endl;
		            break;
	
				case 'c':
            		cout << "Menit ke Minggu" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Menit" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Terdapat " << a << " Menit dalam " << a/10080 << " Minggu" <<endl;
		            break;
		            
		        case 'd':
            		cout << "Menit ke Hari" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Menit" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Terdapat " << a << " Menit dalam " << a/1440 << " Hari" <<endl;
		            break;
		            
		        case 'e':
            		cout << "Menit ke Jam" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Menit" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Terdapat " << a << " Menit dalam " << a/60 << " Jam" <<endl;
		            break;
		            
		        case 'f':
            		cout << "Menit ke Detik" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Menit" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Dalam " << a << " Menit terdapat " << a*60 << " Detik" <<endl;
		            break;
		            
		        default:
		        	cout << "Pilihan tidak tersedia" << endl;
		        	break;    
			} 		
			break;
	
		case 'G':
			cout << "Konversi Detik" << endl;
			cout << endl;
			cout << "Silahkan piih mode konversi Detik" << endl;
            
			cout << "a. Detik ke Tahun" << endl;
			cout << "b. Detik ke Bulan" << endl;
			cout << "c. Detik ke Minggu" << endl;
			cout << "d. Detik ke Hari" << endl;
			cout << "e. Detik ke Jam" << endl;
			cout << "f. Detik ke Menit" << endl;
			cout << endl;
			cout << "Masukkan pilihan anda : " << endl;
			cin >> mode;
			cout << "--------------------------------------------" << endl;
			cout << endl;
			
			
			switch (mode){
       			case 'a':
            		cout << "Detik ke Tahun" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Detik" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Terdapat " << a << " Detik dalam " << a/3.154e+7 << " Tahun" <<endl;
		            break;
            
            	case 'b':
            		cout << "Detik ke Bulan" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Detik" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Terdapat " << a << " Detik dalam " << a/2.628e+6 << " Bulan" <<endl;
		            break;
	
				case 'c':
            		cout << "Detik ke Minggu" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Detik" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Terdapat " << a << " Detik dalam " << a/604800 << " Minggu" <<endl;
		            break;
		            
		        case 'd':
            		cout << "Detik ke Hari" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Detik" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Terdapat " << a << " Detik dalam " << a/86400 << " Hari" <<endl;
		            break;
		            
		        case 'e':
            		cout << "Detik ke Jam" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Detik" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Terdapat " << a << " Detik dalam " << a/3600 << " Jam" <<endl;
		            break;
		            
		        case 'f':
            		cout << "Detik ke Menit" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Detik" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Terdapat " << a << " Detik dalam " << a/60 << " Menit" <<endl;
		            break;
		            
		        default:
		        	cout << "Pilihan tidak tersedia" << endl;
		        	break;    
			} 	
			break;
		
		default:
            cout << "Pilihan tidak tersedia" << endl;	
			break;	
	}
	
	return 0;
}


