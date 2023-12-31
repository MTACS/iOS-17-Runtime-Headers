
@interface HMDLocation : HMFObject <HMDCLLocationManagerDelegate, HMFLogging, HMFTimerDelegate> {
    int  _authStatus;
    NSMutableSet * _batchLocationContexts;
    bool  _beingConfigured;
    NSObject<OS_dispatch_queue> * _handlerQueue;
    long long  _locationAuthorized;
    <HMDCLLocationManager> * _locationManager;
    NSMapTable * _pendingRegionCallbacks;
    NSMapTable * _pendingRegionMonitoringRequests;
    NSMapTable * _regionStateDelegatesByRegionIdentifier;
    NSMapTable * _regionStates;
    NSHashTable * _singleLocationDelegates;
}

@property (nonatomic) int authStatus;
@property (nonatomic, readonly) NSMutableSet *batchLocationContexts;
@property (nonatomic) bool beingConfigured;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *handlerQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long locationAuthorized;
@property (nonatomic, readonly) <HMDCLLocationManager> *locationManager;
@property (nonatomic, readonly) NSMapTable *pendingRegionCallbacks;
@property (nonatomic, readonly) NSMapTable *pendingRegionMonitoringRequests;
@property (nonatomic, readonly) NSMapTable *regionStateDelegatesByRegionIdentifier;
@property (nonatomic, readonly) NSMapTable *regionStates;
@property (nonatomic, readonly) NSHashTable *singleLocationDelegates;
@property (readonly) Class superclass;

+ (id)_getAlmanacWithLocation:(id)arg1;
+ (id)_getAlmanacWithLocation:(id)arg1 date:(id)arg2;
+ (id)bundleForLocationManager;
+ (id)findEvent:(id)arg1 withGeo:(id)arg2;
+ (bool)isAccurateLocation:(id)arg1;
+ (id)logCategory;
+ (id)nextSunriseTimeForLocation:(id)arg1 date:(id)arg2;
+ (id)nextSunsetTimeForLocation:(id)arg1 date:(id)arg2;
+ (id)sharedManager;
+ (id)sunriseTimeForLocation:(id)arg1;
+ (id)sunsetTimeForLocation:(id)arg1;
+ (void)timeZoneISOCountryCodeForCLLocationAsync:(id)arg1 withCompletion:(id /* block */)arg2;

- (void).cxx_destruct;
- (bool)_canLocationBeExtracted;
- (id)_delegateforRegion:(id)arg1;
- (void)_extractSingleLocationForDelegate:(id)arg1;
- (void)_handleDeterminedState:(long long)arg1 forRegion:(id)arg2;
- (void)_notifySingleLocationDelegate:(id)arg1 withLocation:(id)arg2;
- (void)_notifySingleLocationDelegatesWithLocation:(id)arg1;
- (void)_startExtractingBatchLocationsForDelegate:(id)arg1;
- (void)_stopExtractingBatchLocationsForContext:(id)arg1;
- (void)_updateEntryForRegion:(id)arg1;
- (void)_updateExitForRegion:(id)arg1;
- (void)_updateRegionState:(long long)arg1 forRegion:(id)arg2;
- (void)_updateWithLocationAuthorizationStatus:(int)arg1;
- (int)authStatus;
- (id)batchLocationContexts;
- (bool)beingConfigured;
- (void)beingConfigured:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (void)deregisterForRegionUpdate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getCoreRoutineLOIForCurrentLocationWithCompletionHandler:(id /* block */)arg1;
- (id)getCurrentLocation;
- (void)getLOIForCurrentLocationWithCompletionHandler:(id /* block */)arg1;
- (id)handlerQueue;
- (id)init;
- (id)initWithLocationManager:(id)arg1 handlerQueue:(id)arg2;
- (long long)locationAuthorized;
- (id)locationManager;
- (void)locationManager:(id)arg1 didDetermineState:(long long)arg2 forRegion:(id)arg3;
- (void)locationManager:(id)arg1 didEnterRegion:(id)arg2;
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didStartMonitoringForRegion:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (id)pendingRegionCallbacks;
- (id)pendingRegionMonitoringRequests;
- (id)regionStateDelegatesByRegionIdentifier;
- (id)regionStates;
- (void)registerForRegionUpdate:(id)arg1 withDelegate:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)requestMicroLocationLocalizationScanWithMetadata:(id)arg1;
- (void)requestMicroLocationRecordingScanWithMetadata:(id)arg1;
- (void)setAuthStatus:(int)arg1;
- (void)setBeingConfigured:(bool)arg1;
- (void)setLocationAuthorized:(long long)arg1;
- (id)singleLocationDelegates;
- (void)startExtractingBatchLocationsForDelegate:(id)arg1;
- (void)startExtractingSingleLocationForDelegate:(id)arg1;
- (void)stopExtractingBatchLocationsForDelegate:(id)arg1;
- (void)timerDidFire:(id)arg1;

@end
