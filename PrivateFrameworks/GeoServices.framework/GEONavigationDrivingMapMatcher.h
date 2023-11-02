
@interface GEONavigationDrivingMapMatcher : GEONavigationMapMatcher {
    bool  _isCorrectingCourseSwing;
    GEOLocation * _lastAccurateCourseLocation;
    bool  _useMatchedCoordinateForMatching;
}

@property (nonatomic) bool useMatchedCoordinateForMatching;

- (void).cxx_destruct;
- (double)_approximateMaxSpeedForRoad:(id)arg1;
- (struct { double x1; double x2; })_coordinateFromLocation:(id)arg1;
- (double)_courseFromLocation:(id)arg1;
- (id)_effectiveLocationForLocation:(id)arg1;
- (bool)_locationMeetsSpeedThresholdForRoadMatch:(id)arg1 distanceFromRoute:(double)arg2;
- (id)_routeMatcherForRoute:(id)arg1;
- (bool)_shouldConsiderRoadMatch:(id)arg1 overRouteMatch:(id)arg2 forLocation:(id)arg3;
- (id)matchLocation:(id)arg1 transportType:(int)arg2;
- (void)setUseMatchedCoordinateForMatching:(bool)arg1;
- (int)transportType;
- (bool)useMatchedCoordinateForMatching;

@end
