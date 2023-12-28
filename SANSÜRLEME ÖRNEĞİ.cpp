#include <string>
#include <iostream>
using namespace std;
int main()
{
string x;                           //SANSÜRLEME ÖRNEĞİ
char gecici;
cout << "lutfen bir kelime giriniz: ";
cin >> x;

for (  int i = 0; i < x.length(); i++)      // KELİMENİN UZUNLUĞUNU DÖNGÜYE ALIR
{
	gecici = x[i];

	if (gecici== 'a' ||gecici ==  'u' ||gecici== 'e' ||gecici== 'A' ||gecici== 'E' ||gecici== 'U' ||gecici== 'i' ||gecici== 'I'||gecici== 'o') { // SESLİ HARF SANSÜRÜ

		x[i] = '*';
	}

}
cout<<x<<endl; // EKRANA BASMA

return0;
}

