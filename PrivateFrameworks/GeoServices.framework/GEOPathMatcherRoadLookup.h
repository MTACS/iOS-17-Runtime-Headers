
@interface GEOPathMatcherRoadLookup : NSObject {
    unsigned long long  _cacheMissCount;
    GEOMapFeatureAccess * _mapFeatureAccess;
    unsigned long long  _mapFeatureRoadsCount;
    NSCache * _roadsCache;
}

- (void).cxx_destruct;
- (void)_cacheRoad:(id)arg1;
- (id)_roadForKey:(struct GEOPathMatcherRoadKey { long long x1; unsigned long long x2; double x3; double x4; })arg1;
- (void)dealloc;
- (id)description;
- (id)findOutgoingRoadsFrom:(struct GEOPathMatcherRoadKey { long long x1; unsigned long long x2; double x3; double x4; })arg1;
- (id)findRoadWithMuid:(long long)arg1 nearCoordinate:(struct { double x1; double x2; })arg2;
- (id)findRoadsNearCoordinate:(struct { double x1; double x2; })arg1 radius:(double)arg2;
- (struct GEOPathMatcherRoadKey { long long x1; unsigned long long x2; double x3; double x4; })flippedRoad:(struct GEOPathMatcherRoadKey { long long x1; unsigned long long x2; double x3; double x4; })arg1;
- (id)initWithAuditToken:(id)arg1;
- (struct GEOPathMatcherRoadKey { long long x1; unsigned long long x2; double x3; double x4; })keyForRoad:(id)arg1;
- (id)roadForKey:(struct GEOPathMatcherRoadKey { long long x1; unsigned long long x2; double x3; double x4; })arg1;

@end
