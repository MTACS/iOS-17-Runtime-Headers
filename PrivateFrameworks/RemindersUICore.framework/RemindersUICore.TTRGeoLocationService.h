
@interface RemindersUICore.TTRGeoLocationService : NSObject <CLLocationManagerDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _addressToResolvedLocationCache;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _lastKnownCurrentLocation;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _locationToResolvedLocationCache;
    void blockToPerformAfterRequestingInUseAuthorization;
    void currentlyGeocodingLocation;
    void delegate;
    void locationAccuracyUpperBound;
    void locationManager;
    void maximumLocationUpdatingTime;
    void pendingLocationsToResolve;
}

- (void).cxx_destruct;
- (id)init;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManagerDidChangeAuthorization:(id)arg1;

@end
