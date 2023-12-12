#include<iostream>
#include<string>
#include<vector>
using namespace std;

const int SIZE = 10;

struct Employee {
    string name;
    string phone;
};

class hashTable {
    private :
        vector<Employee> table[SIZE];
        int hash(const string phone) {
            int sum = 0;
            for (char c : phone) {
                sum += c;
            }
            return sum%SIZE;
        }
        public :
            void insert(const string phone, const string name) {
                int index = hash(phone);
                Employee e;
                e.phone = phone;
                e.name = name;
                table[index].push_back(e);
            }

            void search(const string phone) {
                int index = hash(phone);
                for(const Employee& e : table[index]) {
                    if(e.phone == phone) {
                        cout << "Phone Number of Employee : " << phone  <<" | Name of Employee : " << e.name << endl;
                        return;
                    }
                }
                cout << "Phone number not found." << endl;
            }

            void remove(const string phone) {
                int index = hash(phone);
                for(auto i = table[index].begin(); i!=table[index].end(); ++i) {
                    if(i->phone == phone) {
                            i = table[index].erase(i);
                            cout << "Phone Number of Employee : " << phone << " , deleted" << endl;
                            return;
                    }
                }
                cout << "Phone number not found" << endl;
            }
};

int main() {
    hashTable employeeDetail;
    int n;
    cout << "Enter number of Employees : ";
    cin >> n;
    for(int i=0 ; i<n ; i++) {
        string name, phone;
        cout << "Enter name of employee : ", i;
        cin >> name;
        cout << "Enter mobile number of employee :", i;
        cin >> phone;
        employeeDetail.insert(phone, name);

    }

    cout << "Enter number to search : " ;
    string searchPhone;
    cin >> searchPhone;
    employeeDetail.search(searchPhone);

    string delEmployee;
    cout << "Enter number to delete : ";
    cin >> delEmployee;
    employeeDetail.remove(delEmployee);
}