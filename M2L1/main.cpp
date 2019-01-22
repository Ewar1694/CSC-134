//CSC 1
//M2L1
//Ethan Warren
//01/22/18

#include <iostream>

using namespace std;

int main()
{
    begining:
    string movieName;
    string qInput;
    string qInput2;
    double rating;
    int year;
    char firstLetter;
    movieName = "The Holy Mountain";
    rating = 7.9;
    year = 1975;
    cout << "Film Name(No Spaces): " << endl;
    cin >> qInput;

        if (qInput == "TheHolyMountain") {
            cout << "Film Name: " << movieName << endl;
            cout << "Rating: " << rating << endl;
            cout << "Release Year: " << year << endl;
        }else{
            query:
            cout << "No such film in registry. Try another?" << endl;
            cin >> qInput2;
                if (qInput2 == "Yes"){
                     goto begining;
                }else if (qInput2 == "No"){
                return 0;
                }else{
                    cout << "Please answer with 'Yes' or 'No'." << endl;
                    goto query;
                }
        }
    return 0;
}
