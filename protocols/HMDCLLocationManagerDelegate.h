
@protocol HMDCLLocationManagerDelegate <NSObject>

@required

- (void)locationManager:(id <HMDCLLocationManager>)arg1 didDetermineState:(long long)arg2 forRegion:(CLRegion *)arg3;
- (void)locationManager:(id <HMDCLLocationManager>)arg1 didEnterRegion:(CLRegion *)arg2;
- (void)locationManager:(id <HMDCLLocationManager>)arg1 didExitRegion:(CLRegion *)arg2;
- (void)locationManager:(id <HMDCLLocationManager>)arg1 didFailWithError:(NSError *)arg2;
- (void)locationManager:(id <HMDCLLocationManager>)arg1 didStartMonitoringForRegion:(CLRegion *)arg2;
- (void)locationManager:(id <HMDCLLocationManager>)arg1 didUpdateLocations:(NSArray *)arg2;
- (void)locationManagerDidChangeAuthorization:(id <HMDCLLocationManager>)arg1;

@end
