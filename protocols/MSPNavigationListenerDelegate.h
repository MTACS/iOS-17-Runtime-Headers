
@protocol MSPNavigationListenerDelegate <NSObject>

@required

- (void)navigationListenerArrived:(MSPNavigationListener *)arg1;
- (void)navigationListenerETAUpdated:(MSPNavigationListener *)arg1;
- (void)navigationListenerIsReady:(MSPNavigationListener *)arg1;
- (void)navigationListenerResumed:(MSPNavigationListener *)arg1;
- (void)navigationListenerRouteUpdated:(MSPNavigationListener *)arg1;
- (void)navigationListenerStopped:(MSPNavigationListener *)arg1;
- (void)navigationListenerTrafficUpdated:(MSPNavigationListener *)arg1;
- (void)navigationListenerWaypointsUpdated:(MSPNavigationListener *)arg1;

@end
