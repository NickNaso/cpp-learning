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

#include <iostream>

class complex {
    public:
        double get_r() {
            return r;
        }
        void set_r(double newr) {
            r = newr;
        }
        double get_i() {
            return i;
        }
        void set_i(double newi) {
            i = newi;
        }
    private:
        double r, i;
};

int main (int argc, char* argv[]) {
    complex c1, c2;

    c1.set_r(3.0);
    c1.set_i(2.0);

    c2.set_r(c1.get_r());
    c2.set_i(c1.get_i());

    std::cout << "C1 r: " << c1.get_r() << " i: " << c1.get_i() << std::endl
              << "C2 r: " << c2.get_r() << " i: " << c2.get_i() << std::endl;
}