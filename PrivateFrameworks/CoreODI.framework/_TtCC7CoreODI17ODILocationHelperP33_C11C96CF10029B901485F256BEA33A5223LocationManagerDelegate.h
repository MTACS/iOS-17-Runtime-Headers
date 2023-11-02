
@interface _TtCC7CoreODI17ODILocationHelperP33_C11C96CF10029B901485F256BEA33A5223LocationManagerDelegate : NSObject <CLLocationManagerDelegate> {
    void _locationManager;
    void lock;
    void logger;
    void parent;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;

@end
