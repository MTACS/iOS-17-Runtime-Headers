
@interface RELocationManager : NSObject

+ (id)locationManager;
+ (id)simulatedLocationManager;

- (id)currentLocation;
- (void)startLocationUpdatesWithHandler:(id /* block */)arg1;
- (void)stopLocationUpdates;

@end
