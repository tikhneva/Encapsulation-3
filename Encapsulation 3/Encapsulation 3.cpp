#include <iostream>
#include <string>
#include <ctime>
using namespace std;

//1
//class Music {
//public:
//    int songRelease; //year
//    string songType;
//    string author;
//    string language;
//    int chorus;
//    string name;
//    int enjoying;
//    string author;
//    string coverColor;
//    int mood;
//    int verse;
//    bool MeaningfulLyrics;
//    bool hasGoodInstrumental;
//    string* happy;
//    int energetic; // 0...100
//    bool isTheBest;
//
//
//    void Mood() {
//        if (mood <= 4) {
//            cout << "You are in a bad mood. You will cry listening to this song." << endl;
//            return;
//        }
//        if (energetic < 20) {
//            cout << "It is a calm song." << endl;
//            return;
//        }
//        if (!isTheBest) {
//            cout << "You are completely immersed in the song. Now you have imagined yourself as a part of story." << endl;
//            return;
//        }
//        energetic -= 10;
//        enjoying += getRandomValue(+70, +100);
//
//    }
//    void Melody() {
//        enjoying = 100;
//    }
//
//    void Sing() {
//        energetic = 100;
//    }
//
//    void Dopamine(const string& joy) {
//        for (const string* m = happy; *m != ""; ++m) {
//            if (joy == *m) {
//                energetic = 100;
//                enjoying -= 10;
//                Lyrics();
//                return;
//            }
//        }
//        energetic += 10;
//    }
//
//    void Lyrics() {
//        cout << "How could I forget" << "\n" << "The day you lied to me\n" << endl;
//    }
//
//    static int getRandomValue(int min, int max) {
//        int count = max - min + 1;
//        int value = rand() % count + min;
//        return value;
//    }
//
//    void print() {
//        cout << "================================" << endl;
//        cout << "Song name: " << name << endl;
//        cout << "Song language: " << language << endl;
//        cout << "Song type: " << songType << endl;
//        cout << "Author: " << author << endl;
//        cout << "Mood: " << mood << endl;
//        cout << "Verses: " << verse << endl;
//        cout << "Chorus: " << chorus << endl;
//        cout << "Energetic: " << energetic << endl;
//        cout << "================================" << endl;
//    }
//};
//
//int main()
//{
//    Music myMusic;
//    myMusic.name = "i hate to admit";
//    myMusic.songRelease = 2022; //year
//    myMusic.enjoying = 80;
//    myMusic.author = "Bang Chan";
//    myMusic.songType = "Sad";
//    myMusic.coverColor = "Black";
//    myMusic.mood = 7;
//    myMusic.verse = 1;
//    myMusic.MeaningfulLyrics = true;
//    myMusic.hasGoodInstrumental = true;
//    myMusic.chorus = 3;
//    myMusic.energetic = 20;
//    myMusic.language = "English and Korean";
//    myMusic.isTheBest = true;
//
//     Choose your reaction
//    string happiness[] = { "Smiling", "Singing", "" };
//    myMusic.happy = happiness;
//
//     Test the methods
//    myMusic.print();
//    myMusic.Mood();
//    myMusic.Sing();
//    myMusic.Dopamine("Smiling");
//    myMusic.Lyrics();
//    myMusic.print();
//}
//
//2
//
//class Phone {
//public:
//    int model;
//    string brand;
//    int speed;
//    string color;
//    int memory;
//    int cameras;
//    int apps;
//    int battery; 
//    bool isNew;
//    bool hasCase;
//    double display;
//    int loudness;
//
//    string* priorityApp;
//
//    void Photo() {
//        if (memory <= 0) {
//            cout << "There is no free place on the device. You can not make a picture." << endl;
//            return;
//        }
//        if (battery < 20) {
//            cout << "Battery is low." << endl;
//            return;
//        }
//        if (speed < 40) {
//            cout << "Speed is very low." << endl;
//            return;
//        }
//        battery += getRandomValue(0, 100);
//        speed += getRandomValue(-5, +5);
//        memory += getRandomValue(0, 128);
//    }
//
//    void Calls() {
//        if (loudness <= 20) {
//            cout << "You did not hear the call." << endl;
//            return;
//        }
//        if (battery = 0) {
//            cout << "You missed the call." << endl;
//            return;
//        }
//    }
//
//    void Dynamics() {
//        loudness = 70;
//    }
//
//    void Surfing(const string& application) {
//        for (const string* a = priorityApp; *a != ""; ++a) {
//            if (application == *a) {
//                memory = 0;
//                battery = 20;
//                speed -= 10;
//                Warning();
//                return;
//            }
//        }
//        battery += 10;
//    }
//
//    void Warning() {
//        cout << "Charge your device and free up memory" << endl;
//    }
//
//    static int getRandomValue(int min, int max) {
//        int count = max - min + 1;
//        int value = rand() % count + min;
//        return value;
//    }
//
//    void print() {
//        cout << "-------------------------------" << endl;
//        cout << "Brand: " << brand << endl;
//        cout << "Speed: " << speed << endl;
//        cout << "Memory: " << memory << endl;
//        cout << "Cameras count: " << cameras << endl;
//        cout << "Battery: " << battery << endl;
//        cout << "-------------------------------" << endl;
//    }
//};
//
//int main()
//{
//     Create a Cat object
//    Phone myPhone;
//    myPhone.brand = "IPhone";
//    myPhone.model = 13; 
//    myPhone.memory = 50;
//    myPhone.speed = 80;
//    myPhone.cameras = 2;
//    myPhone.hasCase = true;
//    myPhone.color = "Blue";
//    myPhone.battery = 20;
//    myPhone.display = 5.4; //ה‏יל
//    myPhone.isNew = true;
//
//    string priorityApplication[] = { "Instagram", "YouTube" };
//    myPhone.priorityApp = priorityApplication;
//
//    myPhone.print();
//    myPhone.Photo();
//    myPhone.Dynamics();
//    myPhone.Surfing("Instagram");
//    myPhone.Warning();
//    myPhone.print();
//}
//
//3
//
//class Room {
//public:
//    int window;
//    int residents;
//    string location;
//    string size;
//    int comfort;
//    int insectGhosts;
//    int doors;
//    string color;
//    bool hasStains;
//    bool hasWarmWater;
//    double time;
//    int weather;
//    int temperature;
//    int scary;
//    int insects;
//
//    string* SpookyInsects;
//
//    static int getRandomValue(int min, int max) {
//        int count = max - min + 1;
//        int value = rand() % count + min;
//        return value;
//    }
//
//    void Noise() {
//        if (time >= 16.45) {
//            cout << "The neighborhoods returned from work. Noisy." << endl;
//            return;
//        }
//        if (weather <= 15) { //degrees
//            cout << "Neighborhoods try not to leave the house because it is cold outside. It can be noisy." << endl;
//            return;
//        }
//
//        time += getRandomValue(00.00, 23.59);
//        weather -= getRandomValue(0, 38);
//    }
//
//    void SleepPlace() {
//        if (comfort >= 8) {
//            cout << "You will sleep well today." << endl;
//            return;
//        }
//        if (temperature >= 26) { //degrees
//            cout << "It is too hot to sleep well." << endl;
//            return;
//        }
//
//        comfort += getRandomValue(0, 10);
//        temperature += getRandomValue(0, 30);
//    }
//
//    void Weather() {
//        if (weather >= 30) {
//            cout << "It would be better to stay home today" << endl;
//            return;
//        }
//        weather += getRandomValue(10, 38);
//    }
//
//    void Temp() {
//        if (temperature >= 27) {
//            cout << "You need  to turn on the airconditioner" << endl;
//            return;
//        }
//        temperature -= getRandomValue(18, 30);
//    }
//    
//    void Insects(const string& insectGhosts) {
//            for (const string* i = SpookyInsects; *i != ""; ++i) {
//                if (insectGhosts == *i) {
//                    scary = 90;
//                    return;
//                }
//            }
//            scary += 10;
//        
//    }
//        
//    void print() {
//        cout << "--------------------------------" << endl;
//        cout << "Location: " << location << endl;
//        cout << "Room Size: " << size << endl;
//        cout << "Temperature: " << temperature << endl;
//        cout << "Weather Outside: " << weather << endl;
//        cout << "Insects: " << insectGhosts << endl;     
//        cout << "--------------------------------" << endl;
//    }
//};
//
//int main()
//{
//    Room myRoom;
//    myRoom.location = "Seoul";
//    myRoom.size = "very small";
//    myRoom.comfort = 2; // 2 out of 10
//    myRoom.residents = 2;
//    myRoom.location = "Seoul";
//    myRoom.window = 1;
//    myRoom.hasStains = true;
//    myRoom.hasWarmWater = true;
//    myRoom.color = "White";
//    myRoom.insectGhosts = 12;
//    myRoom.doors = 2;
//    myRoom.temperature = 25; //degrees
//
//    string KilledInsects[] = { "Cockroach", "Centipede", "Mosquito", "" };
//    myRoom.SpookyInsects = KilledInsects;
//
//    myRoom.Noise();
//    myRoom.print();
//    myRoom.Weather();
//    myRoom.Insects("Cockroach"); //was killed after attacking me while I was doing this homework
//    myRoom.SleepPlace();
//    myRoom.Temp();
//    myRoom.print();
//}
//
//
//4
//
enum class EyesColor {
    YELLOW, BLACK, BROWN, GREEN, BLUE, DIFFERENT, BLIND
};

class Human { 
public:
    double high; 
    double beauty;
    string name;
    string skill;
    int excitement;
    string hairColor;
    int energy;
    bool hasPets;
    EyesColor eyesColor;
    string* deliciousFood;
    double footSize;
    int mood; 
    int joy;

    void PetLover() {
        if (energy <= 0) {
            cout << "Alice has no energy to play with her dog." << endl;
            return;
        }
        if (mood > 70) {
            cout << "Alice is in a good mood to play with her dog! They will go outside." << endl;
            return;
        }
        mood -= 10;
        excitement += getRandomValue(0, 100);
        joy += getRandomValue(0, 100);

    }

    void University() {
        if (energy <= 0) {
            cout << "Alice has no energy to go to university. She will sleep." << endl;
            return;
        }
        if (mood < 20) {
            cout << "Alice is in a bad mood. She will think about wether to go to university." << endl;
            return;
        }
        mood -= 10;
        excitement += getRandomValue(0, 100);
        joy += getRandomValue(0, 100);
        footSize -= getRandomValue(0, 1000);
    }

    void SaySmth() {
        cout << "Let's make a masterpiece!\n" << endl;
    }

    void Cooking(const string& food) {
        for (const string* f = deliciousFood; *f != ""; ++f) {
            if (food == *f) {
                joy = 90;
                mood = 100;
                excitement -= 60;
                SaySmth();
                return;
            }
        }
        joy -= 10;
        mood += 10;
    }

    void LatestNews() {
        if (excitement > 80) {
            cout << "Listen! I will tell you such great news now!" << endl;
            return;
        }
        excitement += getRandomValue(0, 100);
    }

    static int getRandomValue(int min, int max) {
        int count = max - min + 1;
        int value = rand() % count + min;
        return value;
    }

    void print() {
        cout << "--------------------------------" << endl;
        cout << "Name: " << name << endl;
        cout << "Excitement: " << excitement << endl;
        cout << "Joy: " << joy << endl;
        cout << "Energy: " << energy << endl;
        cout << "Mood: " << mood << endl;
        cout << "--------------------------------" << endl;
    }
};

int main()
{
    Human myHuman;
    myHuman.name = "Alice";
    myHuman.skill = "luck";
    myHuman.mood = 50;
    myHuman.joy = 60;
    myHuman.hairColor = "Light Brown";
    myHuman.hasPets = true;
    myHuman.eyesColor = EyesColor::GREEN;
    myHuman.footSize = 37; //EU size
    myHuman.excitement = 90;
    myHuman.high = 163; //cm
    myHuman.energy = 70;
    myHuman.beauty = 100; //%


    string favoriteMealsToCook[] = { "Pasta", "Cakes", "" };
    myHuman.deliciousFood = favoriteMealsToCook;
    myHuman.print();
    myHuman.University();
    myHuman.SaySmth();
    myHuman.Cooking("Cakes");
    myHuman.SaySmth();
    myHuman.print();
}
//
//
//5
//
//enum class EyesColor {
//    YELLOW, BLACK, BROWN, GREEN, BLUE, DIFFERENT, BLIND
//};
//
//class Parrot {
//public:
//    double wingsSize; 
//    string species;
//    string nick;
//    int interest;
//    int hungry;
//    string color;
//    int wings;
//    bool hasPlumage;
//    EyesColor eyesColor;
//    string* AvailableFood;
//    double weight;
//    int mood; 
//    
//    void MakeNoize() {
//        cout << "ARH!\n" << endl;
//    }
//
//    static int getRandomValue(int min, int max) {
//        int count = max - min + 1;
//        int value = rand() % count + min;
//        return value;
//    }
//
//    void Fly() {
//        if (wings <= 0) {
//            cout << "Parrot lost its wings. It is unable to Fly :(" << endl;
//            return;
//        }
//        if (hungry == 100) {
//            cout << "Parrot is hungry!" << endl;
//            return;
//        }
//        if (mood < 10) {
//            cout << "Parrot is bored!" << endl;
//            return;
//        }
//
//        mood -= 10;
//        interest += getRandomValue(-5, +5);
//        hungry += getRandomValue(0, 10);
//        weight -= getRandomValue(0, 1000);
//    }
//
//    void Eat(const string& meal) {
//        for (const string* m = AvailableFood; *m != ""; ++m) {
//            if (meal == *m) {
//                hungry = 0;
//                mood = 100;
//                interest -= 10;
//                weight += 1000;
//                MakeNoize();
//                return;
//            }
//        }
//        hungry -= 10;
//        mood += 10;
//    }
//
//    void Sleep() {
//        hungry = 100;
//        mood = 100;
//    }
//
//    void Stare() {
//        if (interest < 5) {
//            cout << "You got a sideways glance from Sarah" << endl;
//            return;
//        }
//    }
//
//    void print() {
//        cout << "--------------------------------" << endl;
//        cout << "Name: " << nick << endl;
//        cout << "Interest: " << interest << endl;
//        cout << "Hungry: " << hungry << endl;
//        cout << "Wings: " << wings << endl;
//        cout << "Weight: " << weight << endl;
//        cout << "Mood: " << mood << endl;
//        cout << "--------------------------------" << endl;
//    }
//};
//
//int main()
//{
//    Parrot myParrot;
//    myParrot.nick = "Sarah";
//    myParrot.species = "Ara"; 
//    myParrot.interest = 50;
//    myParrot.hungry = 40;
//    myParrot.color = "Red";
//    myParrot.wings = 2 ;
//    myParrot.hasPlumage = true;
//    myParrot.eyesColor = EyesColor::YELLOW;
//    myParrot.weight = 1000;
//    myParrot.mood = 70;
//    myParrot.wingsSize = 40; //סל
//
//    string Food[] = { "Carrot", "Cabbage", "Pumpkin", "" };
//    myParrot.AvailableFood = Food;
//    myParrot.MakeNoize();
//    myParrot.print();
//    myParrot.Fly();
//    myParrot.Eat("Carrot");
//    myParrot.Sleep();   
//    myParrot.Stare();
//    myParrot.print();
//}

