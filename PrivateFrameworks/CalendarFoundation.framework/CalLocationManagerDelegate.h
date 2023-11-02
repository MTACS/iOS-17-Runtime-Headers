
@interface CalLocationManagerDelegate : NSObject <CLLocationManagerDelegate> {
    id /* block */  _completionBlock;
    NSString * _currentBundleID;
    CLLocation * _currentLocation;
    bool  _didFinish;
    CLLocationManager * _manager;
}

@property (copy) id /* block */ completionBlock;
@property (retain) CLLocation *currentLocation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool didFinish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (id /* block */)completionBlock;
- (id)currentLocation;
- (void)dealloc;
- (bool)didFinish;
- (void)didFinishLocationLookupWithLocation:(id)arg1 error:(id)arg2;
- (id)initWithCurrentBundleID:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setCurrentLocation:(id)arg1;
- (void)setDidFinish:(bool)arg1;
- (void)timeout;

@end