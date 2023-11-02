
@interface FMFCore.FMFMyLocationController : NSObject <CLLocationManagerDelegate> {
    void accuracyThreshold;
    void currentMyLocation;
    void delegate;
    void distanceThreshold;
    void interactionController;
    void locationManager;
    void locationShifter;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  myLocation;
    void myLocationUpdatingQueue;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  myUnshiftedLocation;
    void unshiftedLocation;
}

- (void).cxx_destruct;
- (id)init;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;

@end
