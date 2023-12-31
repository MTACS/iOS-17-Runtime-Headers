
@protocol MNLocationProviderDelegate <NSObject>

@required

- (void)locationProvider:(id <MNLocationProvider>)arg1 didChangeCoarseMode:(bool)arg2;
- (void)locationProvider:(id <MNLocationProvider>)arg1 didReceiveError:(NSError *)arg2;
- (void)locationProvider:(id <MNLocationProvider>)arg1 didUpdateHeading:(CLHeading *)arg2;
- (void)locationProvider:(id <MNLocationProvider>)arg1 didUpdateLocation:(MNLocation *)arg2;
- (void)locationProvider:(id <MNLocationProvider>)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(NSDate *)arg3;
- (void)locationProvider:(id <MNLocationProvider>)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(NSDate *)arg3;
- (void)locationProviderDidChangeAuthorizationStatus:(id <MNLocationProvider>)arg1;
- (void)locationProviderDidPauseLocationUpdates:(id <MNLocationProvider>)arg1;
- (void)locationProviderDidResumeLocationUpdates:(id <MNLocationProvider>)arg1;
- (bool)locationProviderShouldPauseLocationUpdates:(id <MNLocationProvider>)arg1;

@optional

- (void)locationProvider:(id <MNLocationProvider>)arg1 didEnterRegion:(CLRegion *)arg2;
- (void)locationProvider:(id <MNLocationProvider>)arg1 didExitRegion:(CLRegion *)arg2;
- (void)locationProvider:(id <MNLocationProvider>)arg1 monitoringDidFailForRegion:(CLRegion *)arg2 withError:(NSError *)arg3;

@end
