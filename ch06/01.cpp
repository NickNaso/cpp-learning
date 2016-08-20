/*******************************************************************************
 * Copyright (c) 2016 Nicola Del Gobbo
 * Licensed under the Apache License, Version 2.0 (the "License"); you may not
 * use this file except in compliance with the License. You may obtain a copy of
 * the license at http://www.apache.org/licenses/LICENSE-2.0
 *
 * THIS CODE IS PROVIDED ON AN *AS IS* BASIS, WITHOUT WARRANTIES OR CONDITIONS
 * OF ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION ANY
 * IMPLIED WARRANTIES OR CONDITIONS OF TITLE, FITNESS FOR A PARTICULAR PURPOSE,
 * MERCHANTABLITY OR NON-INFRINGEMENT.
 *
 * See the Apache Version 2.0 License for specific language governing
 * permissions and limitations under the License.
 *
 * Contributors - initial API implementation:
 * Nicola Del Gobbo <nicoladelgobbo@gmail.com>
 ******************************************************************************/

#include <iostream>;
//#include <string>;

using namespace std;

class Person {
    public:
        Person() {}
        explicit Person(const string& name) : name(name) {}
        //void setName(const string& n) { name = n; }
        string getName()const { return name; }
        void allInfo() const { cout << "[person] My name is " << name << endl; }
    private:
        string name;
};

class Student : public Person {
    public:
        Student(const string& name, const string& passed) : Person(name), passed(passed) {}
        void allInfo() const {
            cout << "[student] My name is " << getName() << endl;
            cout << "I passed the following grades: " << passed << endl;
        }
    private:
        string passed;
};

int main (int argc, char* argv[]) {
    Person me("NickNaso");
    me.allInfo();

    Student you("StudentName", "Algebra");
    you.allInfo();
}