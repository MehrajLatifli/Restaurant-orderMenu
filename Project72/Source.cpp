#include <iostream>
#include<iomanip>
#include <conio.h>
#include<ctime>
// Turan - Ailevi restoran
using namespace std;
int main()
{                        //Qutab qiymetleri                //Icki qiymetleri                   //Salat qiymetleri          //Baliq qiymetleri                                     // Sorbalar                    
	double qiymet[51] = { 5, 4, 10, 4, 1.5, 1, 0.8, 1, 1,  3, 3, 5, 2, 3, 1.5, 2, 1.5 , 1.5,   4, 6, 4, 5, 5, 5, 3, 5, 5,  10, 9, 10, 9, 9, 25, 12, 15, 25, 60, 30, 80, 10, 9,    4, 4, 4, 5, 5, 5, 4, 8, 8, 5 };
	double cem = 0;
	int sifaris;
	int qayda;
	double odenis;
	double kem; // odenilmemis mebleq
	int kkod; // Kataloq kodu
	int kod = 0; // Mehsul kodu
	double qaliq = 0;
	system("color 9");
	cout << endl;
	cout << " ============================================================ " << endl;
	cout << " Latifli Mehraj                                   Baku - 2020 " << endl;
	cout << " ============================================================ " << endl;
	cout << endl;
	cout << " Turan - Ailevi restoran   " << endl;
	cout << endl;
	cout << " ============================================================ " << endl;
	cout << " Step Academy                               Qrup: FBE_2914_AZ " << endl;
	cout << " ============================================================ " << endl;
	cout << endl;
	cout << " " << 0 << " <- Istifade qaydasi  " << endl;
	cout << " \n Qaydalar ile tanis olun: ";
	cin >> qayda;
	cout << endl;
	if (qayda == 0)
	{
		cout << endl;
		cout << endl;
		cout << " " << "  Qaydalar:   " << endl;
		cout << endl;
		cout << "  1) Menu Qutablar, Ickiler, Salatlar, Baliqlar, Sorbalar adli 5 kataloqdan ibaretdir. \n    " << endl;
		cout << "  2) Umumilikde 51 adli mehsulun her biri aid olduqlari kataloqun basliqlarinin altinda yerlesib.     \n    " << endl;
		cout << "  3) Kataloq ve Mehsulun sol kuncunde onlardan istifade etmek ucun kodlar ve sag terfinde ise qiymetler         " << endl;
		cout << "     ve qiymetin mehsulun hansi olcusune gore teyin edildiyi qeyd edilib.   \n     " << endl;
		cout << "  4) Ister tek kataloq uzre isterse de muxtelif kataloqlar uzre  verilen her bir sifarisler ekranda " << endl;
		cout << "     gorsetmekle yanasi cemlenir. \n  " << endl;
		cout << "  5) Hec bir sifaris vermeyeceyiniz teqdirde ardicil olaraq Kataloq kodunu 0 olaraq daxil etdikden sonra  " << endl;
		cout << "     Sifarisi tamamlamaq ucun 0-a basilmalidir ki, Odenis edeceyiniz mebleq yerine sifira yaza bilesiz.    \n    " << endl;
		cout << "  6) Verilen sifarisi tamamlamaq ucun ardicil olaraq  Kataloq kodunu 0 olaraq daxil etdikden sonra    " << endl;
		cout << "     Sifarisi tamamlamaq ucun 0-a basin.   \n    " << endl;
		cout << "  7) Hesablama ederken cemlenme ilk evvel Umumi mebleq ve sifarisi tamamladiqdan sonra " << endl;
		cout << "     Yekun mebleq olaraq heyata kecirilir.    \n    " << endl;
		cout << "  8) Odenis eden zaman eksik ve ya size qaytarilacaq mebleqler de qeyde alinir.\n    " << endl;
		cout << endl;
	}
	cout << "  " << 1 << " Qutablar  " << endl;
	cout << "  " << 2 << " Ickiler  " << endl;
	cout << "  " << 3 << " Salatlar  " << endl;
	cout << "  " << 4 << " Baliqlar  " << endl;
	cout << "  " << 5 << " Sorbalar  " << endl;
	cout << endl;
	cout << endl;
	for (int i = 0; i < 100; i++)
	{
		cout << " \n Kataloqun kodunu daxil edin: ";
		cin >> kkod;
		if (kkod == 1)
		{
			cout << endl;
			cout << endl;
			cout << " " << 1 << " Qutablar   " << endl;
			cout << endl;
			cout << " " << 1 << " Baliq qutabi (Kutum)          =  " << qiymet[0] << "     manat (orta olculu) " << endl;
			cout << " " << 2 << " Baliq qutabi (Sazan)          =  " << qiymet[1] << "     manat (orta olculu) " << endl;
			cout << " " << 3 << " Baliq qutabi (Nere)           =  " << qiymet[2] << "    manat (orta olculu) " << endl;
			cout << " " << 4 << " Baliq qutabi (Berj)           =  " << qiymet[3] << "     manat (orta olculu) " << endl;
			cout << " " << 5 << " Et qutabi                     =  " << qiymet[4] << "   manat (boyuk olculu) " << endl;
			cout << " " << 6 << " Ciyer qutabi                  =  " << qiymet[5] << "     manat (boyuk olculu) " << endl;
			cout << " " << 7 << " Goy qutabi                    =  " << qiymet[6] << "   manat (boyuk olculu) " << endl;
			cout << " " << 8 << " Balqabaq qutabi               =  " << qiymet[7] << "     manat (boyuk olculu) " << endl;
			cout << " " << 9 << " Pendirli qutab                =  " << qiymet[8] << "     manat (boyuk olculu) " << endl;
			cout << endl;
		}
		if (kkod == 2)
		{
			cout << endl;
			cout << endl;
			cout << " " << 2 << " Ickiler   " << endl;
			cout << endl;
			cout << " " << 10 << " Limonad (Limonlu)            =  " << qiymet[9] << "       manat (1 litr) " << endl;
			cout << " " << 11 << " Limonad (Armudlu)            =  " << qiymet[10] << "       manat (1 litr) " << endl;
			cout << " " << 12 << " Isti skolad                  =  " << qiymet[11] << "       manat (250 mlitr) " << endl;
			cout << " " << 13 << " Cay                          =  " << qiymet[12] << "       manat (1 demlik) " << endl;
			cout << " " << 14 << " Filtr qehve                  =  " << qiymet[13] << "       manat (250 ml) " << endl;
			cout << " " << 15 << " Ayran                        =  " << qiymet[14] << "     manat (250 ml) " << endl;
			cout << " " << 16 << " Tomat suyu                   =  " << qiymet[15] << "       manat (250 ml) " << endl;
			cout << " " << 17 << " Dovqa                        =  " << qiymet[16] << "     manat (250 ml) " << endl;
			cout << " " << 18 << " Sud                          =  " << qiymet[17] << "     manat (250 ml) " << endl;
			cout << endl;
		}
		if (kkod == 3)
		{
			cout << endl;
			cout << endl;
			cout << " " << 3 << " Salatlar   " << endl;
			cout << endl;
			cout << " " << 19 << " Paytaxt salati            =  " << qiymet[18] << "     manat (500 q) " << endl;
			cout << " " << 20 << " Sezar salati              =  " << qiymet[19] << "     manat (500 q) " << endl;
			cout << " " << 21 << " Lobya salati              =  " << qiymet[20] << "     manat (500 q) " << endl;
			cout << " " << 22 << " Gobelek salati            =  " << qiymet[21] << "     manat (500 q) " << endl;
			cout << " " << 23 << " Toyuq salati              =  " << qiymet[22] << "     manat (500 q) " << endl;
			cout << " " << 24 << " Manqal salati             =  " << qiymet[23] << "     manat (500 q) " << endl;
			cout << " " << 25 << " Coban salati              =  " << qiymet[24] << "     manat (500 q) " << endl;
			cout << " " << 26 << " Mimoza salati             =  " << qiymet[25] << "     manat (500 q) " << endl;
			cout << " " << 27 << " Suba salati               =  " << qiymet[26] << "     manat (500 q) " << endl;
			cout << endl;
		}
		if (kkod == 4)
		{
			cout << endl;
			cout << endl;
			cout << " " << 3 << " Baliqlar   " << endl;
			cout << endl;
			cout << " " << 28 << " Kutum                                 =  " << qiymet[27] << "     manat " << endl;
			cout << " " << 29 << " Farel                                 =  " << qiymet[28] << "      manat " << endl;
			cout << " " << 30 << " Kefal                                 =  " << qiymet[29] << "     manat " << endl;
			cout << " " << 31 << " Berj                                  =  " << qiymet[30] << "      manat " << endl;
			cout << " " << 32 << " Sazan                                 =  " << qiymet[31] << "      manat " << endl;
			cout << " " << 33 << " Nere                                  =  " << qiymet[32] << "     manat " << endl;
			cout << " " << 34 << " Xezer qizil baliqi                    =  " << qiymet[33] << "     manat " << endl;
			cout << " " << 35 << " Norvec qizil baliqi                   =  " << qiymet[34] << "     manat " << endl;
			cout << " " << 36 << " Baliq asorti (Nere ve Qizil baliq)    =  " << qiymet[35] << "     manat " << endl;
			cout << " " << 37 << " Qara kuru                             =  " << qiymet[36] << "     manat " << endl;
			cout << " " << 38 << " Qirmizi kuru                          =  " << qiymet[37] << "     manat " << endl;
			cout << " " << 39 << " Aqbaliq kurusu                        =  " << qiymet[38] << "     manat " << endl;
			cout << " " << 40 << " Siyenek                               =  " << qiymet[39] << "     manat " << endl;
			cout << " " << 41 << " Krivet                                =  " << qiymet[40] << "      manat " << endl;
			cout << endl;
		}
		if (kkod == 5)
		{
			cout << endl;
			cout << endl;
			cout << " " << 5 << " Sorbalar   " << endl;
			cout << endl;
			cout << " " << 42 << " Pomidor sorbasi                       =  " << qiymet[41] << "     manat " << endl;
			cout << " " << 43 << " Mercimek sorbasi                      =  " << qiymet[42] << "     manat " << endl;
			cout << " " << 44 << " Gobelek sorbasi                       =  " << qiymet[43] << "     manat " << endl;
			cout << " " << 45 << " Dusbere                               =  " << qiymet[44] << "     manat " << endl;
			cout << " " << 46 << " Xengel                                =  " << qiymet[45] << "     manat " << endl;
			cout << " " << 47 << " Bors                                  =  " << qiymet[46] << "     manat " << endl;
			cout << " " << 48 << " Toyuq sorbasi                         =  " << qiymet[47] << "     manat " << endl;
			cout << " " << 49 << " Piti                                  =  " << qiymet[48] << "     manat " << endl;
			cout << " " << 50 << " Kufde bozbas                          =  " << qiymet[49] << "     manat " << endl;
			cout << " " << 51 << " Erisde                                =  " << qiymet[50] << "     manat " << endl;
			cout << endl;
		}
		cout << " \n Davam etmek ucun 1 -e ve ya Sifarisi tamamlamaq ucun 0 -a basin: ";
		cin >> sifaris;
		if (sifaris == 1)
		{
			cout << endl;
			cout << " Mehsul kodunu daxil edin:  ";
			cin >> kod;
			switch (kod)
			{
			case 1: // Qutablar
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Baliq qutabi(Kutum) " << qiymet[0] << " manat (orta olculu) ";
				cout << endl;
				cem += qiymet[0];
				break;
			case 2:
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Baliq qutabi (Sazan) " << qiymet[1] << " manat (orta olculu) ";
				cout << endl;
				cem += qiymet[1];
				break;
			case 3:
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Baliq qutabi (Nere) " << qiymet[2] << " manat (orta olculu) ";
				cout << endl;
				cem += qiymet[2];
				break;
			case 4:
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Baliq qutabi (Berj) " << qiymet[3] << " manat (orta olculu) ";
				cout << endl;
				cem += qiymet[3];
				break;
			case 5:
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Et qutabi  " << qiymet[4] << " manat (orta olculu) ";
				cout << endl;
				cem += qiymet[4];
				break;
			case 6:
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Ciyer qutabi " << qiymet[5] << " manat (orta olculu) ";
				cout << endl;
				cem += qiymet[5];
				break;
			case 7:
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Goy qutabi  " << qiymet[6] << " manat (orta olculu) ";
				cout << endl;
				cem += qiymet[6];
				break;
			case 8:
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Balqabaq qutabi " << qiymet[7] << " manat (orta olculu) ";
				cout << endl;
				cem += qiymet[7];
				break;
			case 9:
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Pendirli qutab " << qiymet[8] << " manat (orta olculu) ";
				cout << endl;
				cem += qiymet[8];
				break;
			case 10: // Ickiler
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Limonad (Limonlu) " << qiymet[9] << " manat (orta olculu) ";
				cout << endl;
				cem += qiymet[9];
				break;
			case 11:
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Limonad (Armudlu) " << qiymet[10] << " manat (orta olculu) ";
				cout << endl;
				cem += qiymet[10];
				break;
			case 12:
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Isti skolad " << qiymet[11] << " manat (orta olculu) ";
				cout << endl;
				cem += qiymet[11];
				break;
			case 13:
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Cay " << qiymet[12] << " manat (orta olculu) ";
				cout << endl;
				cem += qiymet[12];
				break;
			case 14:
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Filtr qehve " << qiymet[13] << " manat (orta olculu) ";
				cout << endl;
				cem += qiymet[13];
				break;
			case 15:
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Ayran " << qiymet[14] << " manat (orta olculu) ";
				cout << endl;
				cem += qiymet[14];
				break;
			case 16:
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Tomat suyu " << qiymet[15] << " manat (orta olculu) ";
				cout << endl;
				cem += qiymet[15];
				break;
			case 17:
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Dovqa " << qiymet[16] << " manat (orta olculu) ";
				cout << endl;
				cem += qiymet[16];
				break;
			case 18:
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Sud " << qiymet[17] << " manat (orta olculu) ";
				cout << endl;
				cem += qiymet[17];
				break;
			case 19: //Salatlar
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Paytaxt salati " << qiymet[18] << " manat (500 q) ";
				cout << endl;
				cem += qiymet[18];
				break;
			case 20:
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Sezar salati " << qiymet[19] << " manat (500 q) ";
				cout << endl;
				cem += qiymet[19];
				break;
			case 21:
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Lobya salati " << qiymet[20] << " manat (500 q) ";
				cout << endl;
				cem += qiymet[20];
				break;
			case 22:
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Gobelek salati " << qiymet[21] << " manat (500 q) ";
				cout << endl;
				cem += qiymet[21];
				break;
			case 23:
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Toyuq salati " << qiymet[22] << " manat (500 q) ";
				cout << endl;
				cem += qiymet[22];
				break;
			case 24:
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Manqal salati " << qiymet[23] << " manat (500 q) ";
				cout << endl;
				cem += qiymet[23];
				break;
			case 25:
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Coban salati " << qiymet[24] << " manat (500 q) ";
				cout << endl;
				cem += qiymet[24];
				break;
			case 26:
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Mimoza salati " << qiymet[25] << " manat (500 q) ";
				cout << endl;
				cem += qiymet[25];
				break;
			case 27:
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Suba salati " << qiymet[26] << " manat (500 q) ";
				cout << endl;
				cem += qiymet[26];
				break;
			case 28: //Baliqlar
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Kutum baliqi " << qiymet[27] << " manat ";
				cout << endl;
				cem += qiymet[27];
				break;
			case 29:
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Farel baliqi " << qiymet[28] << " manat ";
				cout << endl;
				cem += qiymet[28];
				break;
			case 30:
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Kefal baliqi " << qiymet[29] << " manat ";
				cout << endl;
				cem += qiymet[29];
				break;
			case 31:
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Berj baliqi " << qiymet[30] << " manat ";
				cout << endl;
				cem += qiymet[30];
				break;
			case 32:
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Sazan baliqi " << qiymet[31] << " manat ";
				cout << endl;
				cem += qiymet[31];
				break;
			case 33:
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Nere baliqi " << qiymet[32] << " manat ";
				cout << endl;
				cem += qiymet[32];
				break;
			case 34:
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Xezer qizil baliqi " << qiymet[33] << " manat ";
				cout << endl;
				cem += qiymet[33];
				break;
			case 35:
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Norvec qizil baliqi " << qiymet[34] << " manat ";
				cout << endl;
				cem += qiymet[34];
				break;
			case 36:
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Baliq assorti  " << qiymet[35] << " manat ";
				cout << endl;
				cem += qiymet[35];
				break;
			case 37:
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Qara kuru  " << qiymet[36] << " manat ";
				cout << endl;
				cem += qiymet[36];
				break;
			case 38:
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Qirmizi kuru  " << qiymet[37] << " manat ";
				cout << endl;
				cem += qiymet[37];
				break;
			case 39:
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Aqbaliq kurusu  " << qiymet[38] << " manat ";
				cout << endl;
				cem += qiymet[38];
				break;
			case 40:
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Siyenek  " << qiymet[39] << " manat ";
				cout << endl;
				cem += qiymet[39];
				break;
			case 41:
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Krivet  " << qiymet[40] << " manat ";
				cout << endl;
				cem += qiymet[40];
				break;
			case 42: //Sorbalar
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Pomidor sorbasi " << qiymet[41] << " manat ";
				cout << endl;
				cem += qiymet[41];
				break;
			case 43:
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Mercimek sorbasi " << qiymet[42] << " manat ";
				cout << endl;
				cem += qiymet[42];
				break;
			case 44:
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Gobelek sorbasi " << qiymet[43] << " manat ";
				cout << endl;
				cem += qiymet[43];
				break;
			case 45:
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Dusbere " << qiymet[44] << " manat ";
				cout << endl;
				cem += qiymet[44];
				break;
			case 46:
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Xengel " << qiymet[45] << " manat ";
				cout << endl;
				cem += qiymet[45];
				break;
			case 47:
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Bors " << qiymet[46] << " manat ";
				cout << endl;
				cem += qiymet[46];
				break;
			case 48:
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Toyuq " << qiymet[47] << " manat ";
				cout << endl;
				cem += qiymet[47];
				break;
			case 49:
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Piti " << qiymet[48] << " manat ";
				cout << endl;
				cem += qiymet[48];
				break;
			case 50:
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Kufde bozbas  " << qiymet[49] << " manat ";
				cout << endl;
				cem += qiymet[49];
				break;
			case 51:
				cout << endl;
				cout << " Sizin secdiyiniz mehsul -> " << " Erisde  " << qiymet[50] << " manat ";
				cout << endl;
				cem += qiymet[50];
				break;
			}
			cout << endl;
			cout << " Umumi mebleq: " << cem << " manatdir. " << endl;
		}
		if (sifaris < 0)
			cout << " \n Daxil etdiyiniz kod yalnisdir. \n";
		if (sifaris > 1)
			cout << " \n Daxil etdiyiniz kod yalnisdir. \n";
		if (sifaris == 0)
			break;
	}
	cout << endl;
	cout << "============================================================";
	cout << endl;
	cout << endl;
	cout << " Yekun mebleq:                                " << cem << " manat. " << endl;
	cout << endl;
	cout << " Odenis edeceyiniz mebleqi qeyd edin:         "; cin >> odenis;
	qaliq = odenis - cem;
	kem = cem - odenis;
	while (true) {
		if (odenis < cem)
			cout << " \n Siz odenisi tamamlamaq ucun                  " << kem << " manat odemelisiz. \n";
		if (qaliq > 0)
			cout << " \n Size qaytarilan mebleq:                      " << qaliq << " manat. \n " << endl;
		break;
	}
	cout << "============================================================" << endl;
	cout << endl;
	cout << "Turan - Ailevi restoran Nus olsun " << endl;
	cout << endl;
	cout << "============================================================" << endl;
	cout << endl;
}