
@interface SiriGeo.LocationController : NSObject <CLLocationManagerDelegate> {
    void completion;
    void locationManager;
    void logObject;
}

- (void).cxx_destruct;
- (id)init;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;

@end
