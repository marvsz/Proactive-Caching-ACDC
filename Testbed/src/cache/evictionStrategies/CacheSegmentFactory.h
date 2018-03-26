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

#ifndef SRC_CACHE_EVICTIONSTRATEGIES_CACHESEGMENTFACTORY_H_
#define SRC_CACHE_EVICTIONSTRATEGIES_CACHESEGMENTFACTORY_H_
#include <string>
#include "BasicCacheSegment.h"

class CacheSegmentFactory {
public:
    static BasicCacheSegment* createCacheSegment(std::string type, std::string category, long long size);

protected:
    CacheSegmentFactory();
};

#endif /* SRC_CACHE_EVICTIONSTRATEGIES_CACHESEGMENTFACTORY_H_ */