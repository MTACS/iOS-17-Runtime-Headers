
@interface _NTKRelevanceEngineLocationManager : RELocationManager {
    NTKLocationManager * _locationManager;
    NSString * _token;
}

- (void).cxx_destruct;
- (id)currentLocation;
- (id)initWithLocationManager:(id)arg1;
- (void)startLocationUpdatesWithHandler:(id /* block */)arg1;
- (void)stopLocationUpdates;

@end
