
@interface GEORouteMatcher : NSObject {
    GEOApplicationAuditToken * _auditToken;
    double  _maxMatchDistanceFromPreviousRouteMatch;
    GEOPathMatcher * _pathMatcher;
    bool  _requiresRoadNetworkData;
    GEOComposedRoute * _route;
    bool  _shouldSnapRouteMatchToRoute;
    bool  _shouldWaitForSnappedSegments;
    NSArray * _snappedSegments;
    unsigned long long  _targetLegIndex;
    bool  _useMatchedCoordinateForMatching;
    bool  _useStrictInitialOnRouteCriteria;
}

@property (nonatomic, readonly) GEOApplicationAuditToken *auditToken;
@property (nonatomic) double maxMatchDistanceFromPreviousRouteMatch;
@property (nonatomic) bool requiresRoadNetworkData;
@property (nonatomic, readonly) GEOComposedRoute *route;
@property (nonatomic) bool shouldSnapRouteMatchToRoute;
@property (nonatomic) bool shouldWaitForSnappedSegments;
@property (nonatomic, readonly) NSArray *snappedSegments;
@property (nonatomic) unsigned long long targetLegIndex;
@property (nonatomic) bool useMatchedCoordinateForMatching;
@property (nonatomic) bool useStrictInitialOnRouteCriteria;

- (void).cxx_destruct;
- (id)_candidateForSegment:(id)arg1 location:(id)arg2 previousRouteMatch:(id)arg3;
- (void)_considerCandidateMatch:(id)arg1;
- (void)_finishRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;
- (void)_forEachSegmentNearLocation:(id)arg1 previousRouteMatch:(id)arg2 handler:(id /* block */)arg3;
- (struct PolylineCoordinate { unsigned int x1; float x2; })_guaranteedRouteCoordinateForLocationCoordinate:(struct { double x1; double x2; })arg1;
- (double)_roadWidthForSnappedSegment:(id)arg1;
- (double)_scoreModifierForStep:(id)arg1 previousStep:(id)arg2;
- (bool)_shouldConsiderCourseForLocation:(id)arg1;
- (void)_startRouteMatch;
- (id)_startStepForPreviousRouteMatch:(id)arg1;
- (id)_stepForRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1 stepHint:(id)arg2;
- (bool)_supportsSnapping;
- (id)auditToken;
- (struct PolylineCoordinate { unsigned int x1; float x2; })closestRouteCoordinateForLocationCoordinate:(struct { double x1; double x2; })arg1;
- (double)distanceToRouteFrom:(struct { double x1; double x2; })arg1;
- (double)distanceToRouteFrom:(struct { double x1; double x2; })arg1 startDistance:(double)arg2 endDistance:(double)arg3;
- (id)initWithRoute:(id)arg1 auditToken:(id)arg2;
- (id)matchToClosestPointOnRouteWithLocation:(id)arg1;
- (id)matchToRouteWithLocation:(id)arg1;
- (id)matchToRouteWithLocation:(id)arg1 previousRouteMatch:(id)arg2;
- (double)maxMatchDistanceFromPreviousRouteMatch;
- (bool)requiresRoadNetworkData;
- (double)roadWidthForRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (id)route;
- (void)setMaxMatchDistanceFromPreviousRouteMatch:(double)arg1;
- (void)setRequiresRoadNetworkData:(bool)arg1;
- (void)setShouldSnapRouteMatchToRoute:(bool)arg1;
- (void)setShouldWaitForSnappedSegments:(bool)arg1;
- (void)setTargetLegIndex:(unsigned long long)arg1;
- (void)setUseMatchedCoordinateForMatching:(bool)arg1;
- (void)setUseStrictInitialOnRouteCriteria:(bool)arg1;
- (bool)shouldSnapRouteMatchToRoute;
- (bool)shouldWaitForSnappedSegments;
- (id)snappedSegmentForRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (id)snappedSegments;
- (unsigned long long)targetLegIndex;
- (bool)useMatchedCoordinateForMatching;
- (bool)useStrictInitialOnRouteCriteria;

@end
