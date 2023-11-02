
@interface SleepHealthUI.LocationModel : NSObject <CLLocationManagerDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _currentCity;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _currentLocation;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _solarColors;
    void debugIdentifier;
    void inUseAssertion;
    void locationManager;
    void options;
}

- (void).cxx_destruct;
- (id)init;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManagerDidChangeAuthorization:(id)arg1;

@end
