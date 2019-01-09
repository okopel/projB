
#ifndef PROJB_CACHEMANAGER_H
#define PROJB_CACHEMANAGER_H


#include <map>

using namespace std;
template<class P, class S>
class CacheManager {
    map<P *, S *> solMap;
public:
    bool isSolved(P *p) {
        return solMap.count(p) != 0;
    }

    S *getSolution(P *p) {
        return solMap[p];
    }

    virtual void saveSolution(P *p, S *s) = 0;
};

#endif //PROJB_CACHEMANAGER_H