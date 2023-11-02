
@protocol MNSessionUpdateManagerDelegate <NSObject>

@required

- (GEORecentLocationHistory *)recentLocationHistoryForUpdateManager:(MNSessionUpdateManager *)arg1;
- (MNActiveRouteInfo *)routeInfoForUpdateManager:(MNSessionUpdateManager *)arg1;
- (int)state;
- (unsigned long long)targetLegIndex;
- (void)updateManager:(MNSessionUpdateManager *)arg1 didReceiveETAResponse:(MNSessionUpdateResponseInfo *)arg2;
- (void)updateManager:(MNSessionUpdateManager *)arg1 didReceiveTransitError:(NSError *)arg2;
- (void)updateManager:(MNSessionUpdateManager *)arg1 didReceiveTransitUpdateResponse:(GEOTransitRouteUpdateResponse *)arg2;
- (void)updateManager:(MNSessionUpdateManager *)arg1 didReceiveTransitUpdates:(NSSet *)arg2;
- (void)updateManager:(MNSessionUpdateManager *)arg1 willSendETARequest:(GEOETATrafficUpdateRequest *)arg2;
- (void)updateManager:(MNSessionUpdateManager *)arg1 willSendTransitUpdateRequestForRouteIDs:(NSSet *)arg2;
- (void)updateManager:(MNSessionUpdateManager *)arg1 willSendTransitUpdateRequests:(NSSet *)arg2;
- (MNLocation *)userLocationForUpdateManager:(MNSessionUpdateManager *)arg1;
- (bool)wantsETAUpdates;

@end
