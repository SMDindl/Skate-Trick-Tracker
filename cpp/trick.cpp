// Represents an instance of a skatboarding trick

#include <iostream>
#include <string>
#include <vector>
#include <random>
using std::string;
using std::cout;
using std::endl;

/*
    Includes: 
    TrickType: 0 or 1 (flatground = 0, freestyle =1)
    Stance: string: = regular, switch, fakie, nollie
    Confidence Rating: int value 0-10
    Goal: string
    Video link: string
    Date: string


*/

class Trick {

    private:

    // Translates to string verison
    // Int will be easier to manage data
    int trickType;
    int stance;
    string trickTypeString;
    string stanceString;
    string trickName;

    // User input to set these
    int selfRating = -1;
    string goal = " ";
    string link = " ";
    string date = " ";

    public:

    // Set trick type with an int value
    void setTrickType(int trickType) {
        if(trickType >= 0 && trickType < 3) {
            this->trickType = trickType;
        }
        trickTypeString = findTrickTypeString();
    } 

    string findTrickTypeString() {
         if(trickType == 0) {
            return "Flat Ground";
        } else {
            return "Freestyle";
        }
    }

    int getTrickTypeInt() {
        return trickType;
    }

    string getTrickTypeString() {
        return trickTypeString;
    }

    // Set trick type with an int value
    void setStance(int stance) {
        if(stance >= 0 && stance < 5) {
            this->stance = stance;
        }
        stanceString = findStanceString();
    } 

    // Return stance as string 
    string findStanceString() {
        switch(stance) {
            case 0:
                return "Regular";
            case 1:
                return "Switch";
            case 2:
                return "Fakie";
            case 3:
                return "Nollie";
            default:
                return "";
        }
    } 

    int getStanceInt() {
        return stance;
    }

    string getStanceString() {
        return stanceString;
    }

    // User's self rating for this trick
    void setSelfRating(int selfRating) {
        if(selfRating >= 0 && selfRating < 11) {
            this->selfRating = selfRating;
        }
    } 

    int getSelfRating() {
        return selfRating;
    }

    // User's goal statement for this trick
    void setGoal(const string goal) {
        this->goal = goal;
    }

    string getGoal() const {
        return goal;
    }

    // User's video of them preforming this trick
    void setLink(const string link) {
        this->link = link;
    }

    string getLink() const {
        return link;
    }

    // User's date that they preformed the trick
    void setDate(const string& date) {
        this->date = date;
    } 

    string getDate() const {
        return date;
    } 

    // Print trick info for testing
    void printTrickInfo() const {
        cout << "Trick Type: " << trickTypeString << endl;
        cout << "Stance: " << stanceString << endl;
        cout << "Self Rating: " << selfRating << endl;
        cout << "Goal: " << goal << endl;
        cout << "Video Link: " << link << endl;
        cout << "Date: " << date << endl;
    }
}; 

class TrickCollection {

    private:
    vector<Trick> tricks; // Vector of Trick objects

    public:
    void addTrick(const Trick& trick) {
        tricks.push_back(trick);
    }



    

};

int main() {
    Trick trick;

    // Set to regular and flat ground
    trick.setTrickType(0); 
    trick.setStance(0); 
    trick.setSelfRating(8);
    trick.setGoal("Want to land one first try, 3 days in a row");
    trick.setLink("https://example.com/kickflip-video");
    trick.setDate("10/4/2024");

    trick.printTrickInfo();

    return 0;
}