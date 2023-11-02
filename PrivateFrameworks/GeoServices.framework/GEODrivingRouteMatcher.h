
@interface GEODrivingRouteMatcher : GEORouteMatcher {
    double  _differentLegScorePenalty;
}

- (id)_candidateForSegment:(id)arg1 location:(id)arg2 previousRouteMatch:(id)arg3;
- (struct { double x1; double x2; })_coordinateFromLocation:(id)arg1;
- (double)_courseFromLocation:(id)arg1;
- (double)_courseWeightForLocation:(id)arg1 accuracyType:(long long)arg2;
- (void)_finishRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;
- (double)_maxCourseDelta:(id)arg1 previousRouteMatch:(id)arg2 timeSinceTunnel:(double)arg3;
- (double)_maxMatchDistance:(double)arg1 routeCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2 previousRouteMatch:(id)arg3 timeSinceTunnel:(double)arg4;
- (double)_modifiedCourseAccuracyForLocation:(id)arg1 previousRouteMatch:(id)arg2;
- (double)_modifiedHorizontalAccuracy:(double)arg1 routeCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2;
- (id)_startStepForPreviousRouteMatch:(id)arg1;
- (bool)_supportsSnapping;
- (id)initWithRoute:(id)arg1 auditToken:(id)arg2;

@end
