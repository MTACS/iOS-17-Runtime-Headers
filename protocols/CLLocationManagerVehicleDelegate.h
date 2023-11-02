
@protocol CLLocationManagerVehicleDelegate <CLLocationManagerDelegate>

@optional

- (void)locationManager:(CLLocationManager *)arg1 didUpdateVehicleHeading:(CLVehicleHeading *)arg2;
- (void)locationManager:(CLLocationManager *)arg1 didUpdateVehicleSpeed:(CLVehicleSpeed *)arg2;

@end
