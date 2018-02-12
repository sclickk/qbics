// Copyright (C) 2018  E. S. Villarreal

// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; version 2 of the License.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

#include <iostream>
#include <string>
#include <vector>

static void show_usage(std::string name)
{
    std::cerr << "Usage: " << argv[0] << " <option(s)> SOURCES"
              << "Options:\n"
              << "\t-h,--help\t\tShow this help message\n"
              << std::endl;
}

int main(int argc, char* argv[])
{
    if (argc < 3) {
        show_usage(argv[0]);
        return 1;
    }

    std::vector <std::string> sources;
    std::string cubefile;

    for (int i = 1; i < argc; ++i) {
        std::string arg = argv[i];
        if ((arg == "help")) {
            show_usage(argv[0]);
            return 0;
        } else if ((arg == "solve")) {
            if (i + 1 < argc) {                         // Make sure we aren't at the end of argv!
                cubefile = argv[i++];                // Increment 'i' so we don't get the argument as the next argv[i].
            } else {
                  std::cerr << "\"solve\" requires one argument." << std::endl;
                return 1;
            }  
        } else {
            sources.push_back(argv[i]);
        }
    }
    return move(sources, cubefile);
}
