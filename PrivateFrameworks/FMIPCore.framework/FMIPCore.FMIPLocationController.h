
@interface FMIPCore.FMIPLocationController : NSObject <CLLocationManagerDelegate> {
    void currentLocation;
    void delegate;
    void limitedPrecision;
    void locationManager;
    void locationShifter;
    void locationUpdatingQueue;
}

- (void).cxx_destruct;
- (id)init;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;

@end
