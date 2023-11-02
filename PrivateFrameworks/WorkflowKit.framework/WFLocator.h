
@interface WFLocator : NSObject <CLLocationManagerDelegate> {
    CLLocation * _bestEffortLocation;
    id /* block */  _completionHandler;
    CLInUseAssertion * _inUseAssertion;
    CLLocationManager * _locationManager;
    double  _timeout;
}

@property (nonatomic, retain) CLLocation *bestEffortLocation;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CLInUseAssertion *inUseAssertion;
@property (nonatomic, retain) CLLocationManager *locationManager;
@property (readonly) Class superclass;
@property (nonatomic) double timeout;

+ (void)determineLocationWithWorkflowEnvironment:(long long)arg1 completion:(id /* block */)arg2;
+ (void)determineLocationWithWorkflowEnvironment:(long long)arg1 desiredAccuracy:(double)arg2 completion:(id /* block */)arg3;
+ (void)determineLocationWithWorkflowEnvironment:(long long)arg1 desiredAccuracy:(double)arg2 timeout:(double)arg3 completion:(id /* block */)arg4;

- (void).cxx_destruct;
- (id)bestEffortLocation;
- (id /* block */)completionHandler;
- (void)dealloc;
- (void)finishUpdatingLocation;
- (id)inUseAssertion;
- (id)initWithWorkflowEnvironment:(long long)arg1;
- (id)locationManager;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)requestLocation;
- (void)setBestEffortLocation:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setInUseAssertion:(id)arg1;
- (void)setLocationManager:(id)arg1;
- (void)setTimeout:(double)arg1;
- (void)start;
- (void)startUpdatingLocation;
- (double)timeout;
- (bool)useRequestLocation;

@end
