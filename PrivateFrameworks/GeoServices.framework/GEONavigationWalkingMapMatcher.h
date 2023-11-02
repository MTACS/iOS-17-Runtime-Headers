
@interface GEONavigationWalkingMapMatcher : GEONavigationMapMatcher {
    unsigned long long  _numProgressionsOffRoute;
}

- (id)_routeMatcherForRoute:(id)arg1;
- (id)matchLocation:(id)arg1 transportType:(int)arg2;
- (int)transportType;

@end
