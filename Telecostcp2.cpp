#include <iostream>
#include <string>
#include <vector>

using namespace std;

string areazone(const string& phoneNumber) {
    vector<string> nyareacodes = {"212", "315", "347", "516", "518", "585", "607", "631", "646", "716",
                                  "718", "845", "914", "917", "929", "934"};
    
    size_t pos = phoneNumber.find('-');
    std::string areaCode = phoneNumber.substr(pos + 1, 3);

    if (std::find(nyareacodes.begin(), nyareacodes.end(), areaCode) != nyareacodes.end()) {
        return "New York";
    } else if (phoneNumber.find("+52") == 0) {
        return "Mexico";
    } else if (phoneNumber.find("+55") == 0) {
        return "Brazil";
    } else if (phoneNumber.find("+") == 0) {
        return "World Zone 1";
    } else {
        return "Other";
    }
}


int main() {
    cout << "Destination Phone #: ";
    string destinum;
    getline(cin, destinum);

    cout << "Start Time # (hh:mm in military time): ";
    int starttime;
    cin >> starttime;

    cout << "Weekday (1=Mon, 2=Tue, 3=Wed, 4=Thu, 5=Fri, 6=Sat, 7=Sun): ";
    int weekdaynum;
    cin >> weekdaynum;

    cout << "Length of the call (in minutes): ";
    long int calllen;
    cin >> calllen;

    double cost_of_call;
    cout << "Cost is $" << cost_of_call;

    return 0;
}
