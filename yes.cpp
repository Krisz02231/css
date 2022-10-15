#include <#iostream>

using namespace std;
void myFunction(string fname) {
  cout << fname <<"\n";
}

int main()
{
    float num3, num4;
    cout<<"Szia\nÍrd be mit akarsz csinálni\n1--->Számológép:\n2--->Számláló:\n3--->Torpedó:\n4--->credits:\n---->";
    cin >> num3;
    if (num3 == 1){
        
    
  char op;
  float num1, num2;

  cout <<"ird be milyen muveletet akarsz végrehajtani:  \n 1--->összeadás:\n 2--->kivonás:\n 3--->szorzás:\n 4--->osztás:";
  cin >> op;
  
        
    
  cout << "irj be két számot: ";
  cin >> num1 >> num2;
  switch(op) {

    case '1':
      cout << "Végösszeg: "<< num1 + num2;
      break;

    case '2':
      cout << "Végösszeg: "<< num1 - num2;
      break;

    case '3':
      cout << "Végösszeg: "<< num1 * num2;
      break;

    case '4':
      cout << "Végösszeg: "<< num1 / num2;
      break;
      
    default:
      // ha egyik se teljeseül a fentiek közül.
      cout << "Nincs ilyen művelet!";
      break;
  }
}
    if (num3 == 2){
    float num5, num6;

    cout << "mettől medig számoljon: ";
    cin >> num4 >> num5;
    
int i = num4;
  do {
    cout << i << "\n";
    i++;
  }
  while (i < num5);
}
if (num3 == 3){
// az 1 jelzi a hajót
  bool ships[4][4] = {
    { 0, 1, 1, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 1, 0 },
    { 0, 0, 1, 0 }
  };

  // hogy mennyit löttél és abbol hányszor találtál
  int talalatok = 0;
  int probalkozasok = 0;

  // engedi hogy addig lőj ameddig nem találod el mind a 4hajót
  while (talalatok < 4) {
    int sor, oszlop;

    cout << "cordináta választás\n";

    // megkérdezi a sort
    cout << "válassz melyik sorban 0 és 3 között: ";
    cin >> sor;

    // megkérdezi az oszlopot
    cout << "válassz melyik oszlopban 0 és 3 között: ";
    cin >> oszlop;

    // megnézi létezik e a hajó azon acordinátán amit beirtál
    if (ships[sor][oszlop]) {
      // amikor eltalálsz egy hajót akkor reseteli 1rá az értékétegyről és akkor eltünik a hajó.
      ships[sor][oszlop] = 0;

      // feljebb viszi a találatok számlálóját
      talalatok++;

      // amikor eltalál egy hajót megmondja még mennyi van hátra
      cout << "talált! " << (4-talalatok) << " maradt.\n\n";
    } else {
      // megmondja hogy nem talált
      cout << "nem talált\n\n";
    }

    // számolja hányszor próbálkoztál
    probalkozasok++;
  }

  cout << "Győztél!\n";
  cout << "sikerült " << probalkozasok << " probálkozásból";
}
if (num3 == 4){
    myFunction ("Készitő--->Krisztián");
    myFunction ("ötletek--->Marci,Adorján,Krisztián");
    myFunction ("weboldal--->w3schools.com");
}
    return 0;
}