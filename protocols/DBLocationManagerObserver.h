
@protocol DBLocationManagerObserver <NSObject>

@required

- (void)locationManager:(DBLocationManager *)arg1 didEnterRegionIdentifier:(id)arg2;
- (void)locationManager:(DBLocationManager *)arg1 didExitRegionIdentifier:(id)arg2;
- (void)locationManager:(DBLocationManager *)arg1 didUpdateLocation:(CLLocation *)arg2;

@end
