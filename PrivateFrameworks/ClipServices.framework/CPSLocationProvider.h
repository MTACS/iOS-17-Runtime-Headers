
@interface CPSLocationProvider : NSObject <CLLocationManagerDelegate> {
    bool  _locationEnabled;
    CLLocationManager * _locationManager;
    CPSPromise * _locationPromise;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)locationServiceEnabled;
+ (void)setLocationServiceEnabled:(bool)arg1;
+ (id)sharedProvider;

- (void).cxx_destruct;
- (void)confirmCurrentLocationInRegion:(id)arg1 completion:(id /* block */)arg2;
- (void)getCurrentLocationWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManagerDidChangeAuthorization:(id)arg1;

@end
