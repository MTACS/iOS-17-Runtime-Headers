
@protocol GEONavigationListenerPrivateDelegate <GEONavigationListenerDelegate>

@optional

- (void)navigationListener:(GEONavigationListener *)arg1 didArriveAtWaypoint:(GEOComposedWaypoint *)arg2 endOfLegIndex:(unsigned long long)arg3;
- (void)navigationListener:(GEONavigationListener *)arg1 didResumeNavigatingFromWaypoint:(GEOComposedWaypoint *)arg2 endOfLegIndex:(unsigned long long)arg3;
- (void)navigationListener:(GEONavigationListener *)arg1 didUpdateETA:(GEOArrivalTimeAndDistanceInfo *)arg2;
- (void)navigationListener:(GEONavigationListener *)arg1 didUpdateLocation:(GEOLocation *)arg2;
- (void)navigationListener:(GEONavigationListener *)arg1 didUpdateLocation:(GEOLocation *)arg2 routeMatchedCoordinate:(struct { unsigned int x1; float x2; })arg3;
- (void)navigationListener:(GEONavigationListener *)arg1 didUpdateRoute:(GEOComposedRoute *)arg2;
- (void)navigationListener:(GEONavigationListener *)arg1 didUpdateTrafficForCurrentRoute:(GEOComposedRouteTraffic *)arg2;

@end
