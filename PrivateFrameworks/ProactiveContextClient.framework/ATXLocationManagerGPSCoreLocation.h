
@interface ATXLocationManagerGPSCoreLocation : NSObject <ATXLocationManagerGPS, CLLocationManagerDelegate> {
    NSObject<OS_dispatch_queue> * _clQueue;
    <ATXLocationManagerGPSDelegate> * _delegate;
    NSMutableSet * _locationBlocksToInvoke;
    bool  _locationEnabled;
    CLLocationManager * _locationManager;
    bool  _preciseLocationEnabled;
    CLRegion * _regionRequested;
    NSCondition * _requestStateCondition;
    long long  _state;
    NSCondition * _updateCondition;
    bool  _updatePending;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ATXLocationManagerGPSDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) bool locationEnabled;
@property (nonatomic, readonly) bool preciseLocationEnabled;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_existingRegionWithIdentifierOnCLQueue:(id)arg1;
- (id)_init;
- (void)_requestStateIfNeededForRegion:(id)arg1;
- (void)_startUpdateIfNeededWithPreciseLocation:(bool)arg1;
- (void)_updateConditionAndInvokeLocationBlocks:(id)arg1 error:(id)arg2;
- (void)beginMonitoringRegion:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)location;
- (bool)locationEnabled;
- (void)locationManager:(id)arg1 didDetermineState:(long long)arg2 forRegion:(id)arg3;
- (void)locationManager:(id)arg1 didEnterRegion:(id)arg2;
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didStartMonitoringForRegion:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (bool)preciseLocationEnabled;
- (void)setDelegate:(id)arg1;
- (long long)stateForRegion:(id)arg1 withTimeout:(double)arg2;
- (void)stopMonitoringRegionWithIdentifier:(id)arg1;
- (void)updateLocationWithCompletionHandler:(id /* block */)arg1;
- (id)updateLocationWithTimeout:(double)arg1 requestPreciseLocation:(bool)arg2;

@end
