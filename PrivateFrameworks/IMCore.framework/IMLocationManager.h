
@interface IMLocationManager : NSObject <CLLocationManagerDelegate, IMLocationManager> {
    NSError * _error;
    bool  _firstAuthorizationCallbackArrived;
    NSMutableArray * _handlers;
    bool  _inRequestPreciseLocation;
    CLInUseAssertion * _inUseAssertion;
    NSDate * _locateStartTime;
    CLLocation * _location;
    CLLocationManager * _locationManager;
    NSTimer * _locationUpdateTimer;
}

@property (nonatomic, readonly, copy) CLLocation *currentLocation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *error;
@property (nonatomic) bool firstAuthorizationCallbackArrived;
@property (nonatomic, retain) NSMutableArray *handlers;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool inRequestPreciseLocation;
@property (nonatomic, retain) CLInUseAssertion *inUseAssertion;
@property (nonatomic, retain) NSDate *locateStartTime;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic, readonly) bool locationAuthorizationDenied;
@property (nonatomic, readonly) bool locationAuthorizationDetermined;
@property (nonatomic, retain) CLLocationManager *locationManager;
@property (nonatomic, retain) NSTimer *locationUpdateTimer;
@property (nonatomic, readonly) bool preciseLocationAuthorized;
@property (readonly) Class superclass;

+ (Class)__CLInUseAssertionClass;
+ (Class)__CLLocationManagerClass;
+ (id)locationShifter;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_errorHappend:(id)arg1;
- (void)_fireCompletionHandlers;
- (void)_locationManagerTimedOut;
- (void)_locationUpdateTimerFired:(id)arg1;
- (bool)_shouldSendLocation:(id)arg1 timeIntervalSinceStart:(double)arg2;
- (void)_startLocationUpdateTimerWithAuthorizedHandler:(id /* block */)arg1 updateHandler:(id /* block */)arg2;
- (id)currentLocation;
- (id)error;
- (bool)firstAuthorizationCallbackArrived;
- (id)handlers;
- (bool)inRequestPreciseLocation;
- (id)inUseAssertion;
- (id)init;
- (id)locateStartTime;
- (id)location;
- (bool)locationAuthorizationDenied;
- (bool)locationAuthorizationDetermined;
- (id)locationManager;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (id)locationUpdateTimer;
- (bool)preciseLocationAuthorized;
- (void)setError:(id)arg1;
- (void)setFirstAuthorizationCallbackArrived:(bool)arg1;
- (void)setHandlers:(id)arg1;
- (void)setInRequestPreciseLocation:(bool)arg1;
- (void)setInUseAssertion:(id)arg1;
- (void)setLocateStartTime:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationManager:(id)arg1;
- (void)setLocationUpdateTimer:(id)arg1;
- (void)shiftedLocationWithLocation:(id)arg1 completion:(id /* block */)arg2;
- (void)startUpdatingCurrentLocationWithAuthorizedHandler:(id /* block */)arg1 updateHandler:(id /* block */)arg2;
- (void)startUpdatingCurrentLocationWithForegroundAssertionForBundleIdentifier:(id)arg1 withAuthorizedHandler:(id /* block */)arg2 updateHandler:(id /* block */)arg3;

@end
