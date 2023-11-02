
@interface WeatherCore.LocationManager : NSObject <CLLocationManagerDelegate> {
    void $__lazy_storage_$_locationManager;
    void _authorizationSignpostID;
    void _authorizationState;
    void _currentLocationStatus;
    void _firstRevGeoComplete;
    void _locationUpdateSignpostID;
    void geocodeManager;
    void isUpdatingLocation;
    void locationActivityQueue;
    void locationCacheManager;
    void lock;
    void logger;
    void notifyQueue;
    void observers;
}

- (void).cxx_destruct;
- (id)init;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManagerDidChangeAuthorization:(id)arg1;

@end
