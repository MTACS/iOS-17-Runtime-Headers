
@interface _TtC11ClockPosterP33_80B341479428838F1831E32E38C9D6BF14LocationSource : NSObject <CLLocationManagerDelegate> {
    void $__lazy_storage_$_locationManager;
    void _isLocationUpdating;
    void _location;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  distanceFilter;
    void inUseAssertion;
    void locationQueue;
    void source;
    void stream;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManagerDidChangeAuthorization:(id)arg1;

@end
