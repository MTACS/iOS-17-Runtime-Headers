
@interface GEORoadConnectivityPenalty : NSObject <GEORoadMatcherPenalty> {
    bool  _completedConnectivityMap;
    GEOLocation * _location;
    GEOMapFeatureAccess * _mapFeatureAccess;
    unsigned long long  _maxDepthForRoadConnectivity;
    GEOMapFeatureRoad * _originRoad;
    NSMutableDictionary * _roadIntersections;
}

@property (nonatomic, readonly) GEOMapFeatureRoad *originRoad;
@property (nonatomic, retain) NSMutableDictionary *roadIntersections;

- (void).cxx_destruct;
- (void)_addRoadsFromOriginRoad:(id)arg1 currentDepth:(unsigned long long)arg2;
- (void)_initConnectivityMap;
- (id)init;
- (id)initWithOriginRoad:(id)arg1;
- (id)originRoad;
- (double)penaltyForCandidate:(id)arg1;
- (id)roadIntersections;
- (void)setRoadIntersections:(id)arg1;
- (unsigned long long)shortestLengthToRoad:(id)arg1;

@end
