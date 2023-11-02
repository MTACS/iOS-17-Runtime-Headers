
@interface GEONavigationMapMatcher : NSObject {
    GEOApplicationAuditToken * _auditToken;
    bool  _isSimulation;
    GEOLocationShifter * _locationShifter;
    GEONavigationMatchResult * _previousMatchResult;
    bool  _requiresRoadNetworkData;
    GEORoadMatcher * _roadMatcher;
    GEOComposedRoute * _route;
    GEORouteMatcher * _routeMatcher;
    bool  _shouldSnapRouteMatchToRoute;
    bool  _shouldWaitForSnappedSegments;
    unsigned long long  _targetLegIndex;
}

@property (nonatomic, readonly) GEOApplicationAuditToken *auditToken;
@property (nonatomic) bool isSimulation;
@property (nonatomic, retain) GEOLocationShifter *locationShifter;
@property (nonatomic, retain) GEONavigationMatchResult *previousMatchResult;
@property (nonatomic, retain) GEORoadMatcher *roadMatcher;
@property (nonatomic, retain) GEOComposedRoute *route;
@property (nonatomic, retain) GEORouteMatcher *routeMatcher;
@property (nonatomic) unsigned long long targetLegIndex;

- (void).cxx_destruct;
- (id)_routeMatcherForRoute:(id)arg1;
- (id)auditToken;
- (id)initWithRoute:(id)arg1 auditToken:(id)arg2;
- (bool)isSimulation;
- (id)locationShifter;
- (id)matchLocation:(id)arg1 transportType:(int)arg2;
- (id)previousMatchResult;
- (void)resetToLocation:(id)arg1;
- (id)roadMatcher;
- (id)route;
- (id)routeMatcher;
- (void)setIsSimulation:(bool)arg1;
- (void)setLocationShifter:(id)arg1;
- (void)setPreviousMatchResult:(id)arg1;
- (void)setRequiresRoadNetworkData:(bool)arg1;
- (void)setRoadMatcher:(id)arg1;
- (void)setRoute:(id)arg1;
- (void)setRouteMatcher:(id)arg1;
- (void)setShouldSnapRouteMatchToRoute:(bool)arg1;
- (void)setShouldWaitForSnappedSegments:(bool)arg1;
- (void)setTargetLegIndex:(unsigned long long)arg1;
- (unsigned long long)targetLegIndex;
- (int)transportType;
- (id)updateForReroute:(id)arg1 location:(id)arg2 routeStartsFromLocation:(bool)arg3;

@end
