//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 

#include "RandomAdmission.h"
#include <stdlib.h>

RandomAdmission::RandomAdmission() {
    // TODO Auto-generated constructor stub
}

RandomAdmission::~RandomAdmission() {
    // TODO Auto-generated destructor stub
}

bool RandomAdmission::toBeCached(VideoSegment* pkg){
    int random = rand() % 2 + 1; // zahl zwischen 1 und 2
    if(random == 1)
        return true;
    else
        return false;
}

void RandomAdmission::periodicEvents(){

}