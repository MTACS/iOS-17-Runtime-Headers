
@protocol GEOTransitRouteUpdaterDelegate <NSObject>

@optional

- (void)transitRouteUpdater:(GEOTransitRouteUpdater *)arg1 didFailUpdateForRouteIDs:(NSSet *)arg2 withError:(NSError *)arg3;
- (void)transitRouteUpdater:(GEOTransitRouteUpdater *)arg1 didReceiveResponse:(GEOTransitRouteUpdateResponse *)arg2;
- (void)transitRouteUpdater:(GEOTransitRouteUpdater *)arg1 didTimeoutForRouteIDs:(NSSet *)arg2;
- (void)transitRouteUpdater:(GEOTransitRouteUpdater *)arg1 didUpdateTransitRoutes:(NSArray *)arg2;
- (void)transitRouteUpdater:(GEOTransitRouteUpdater *)arg1 willSendRequests:(NSSet *)arg2;
- (void)transitRouteUpdater:(GEOTransitRouteUpdater *)arg1 willUpdateTransitForRouteIDs:(NSSet *)arg2;

@end
