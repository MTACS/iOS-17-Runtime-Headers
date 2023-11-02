
@interface NPKOneShotLocationFetcher : NSObject <CLLocationManagerDelegate> {
    id /* block */  _completionHandler;
    CLInUseAssertion * _inUseAssertion;
    NSObject<OS_dispatch_source> * _locationFixTimeout;
    CLLocationManager * _locationManager;
    NSObject<OS_dispatch_queue> * _locationManagerQueue;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CLInUseAssertion *inUseAssertion;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *locationFixTimeout;
@property (nonatomic, retain) CLLocationManager *locationManager;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *locationManagerQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishLocationFixWithLocation:(id)arg1;
- (id /* block */)completionHandler;
- (void)dealloc;
- (void)fetchLocationWithCompletion:(id /* block */)arg1;
- (id)inUseAssertion;
- (id)init;
- (id)locationFixTimeout;
- (id)locationManager;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (id)locationManagerQueue;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setInUseAssertion:(id)arg1;
- (void)setLocationFixTimeout:(id)arg1;
- (void)setLocationManager:(id)arg1;
- (void)setLocationManagerQueue:(id)arg1;

@end
