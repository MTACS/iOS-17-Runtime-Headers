
@interface ARGeoTrackingLocationRequestHandler : NSObject <CLLocationManagerDelegate> {
    NSCondition * _authorizationCondition;
    int  _authorizationStatus;
    id /* block */  _locationCompletionHandler;
    CLLocationManager * _locationManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ locationCompletionHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id /* block */)locationCompletionHandler;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (void)requestLocationWithCompletionHandler:(id /* block */)arg1;
- (void)setLocationCompletionHandler:(id /* block */)arg1;
- (void)setLocationManager:(id)arg1;
- (int)waitForAuthorizationStatus;

@end
