
@interface TATrackingAvoidanceService : NSObject <TAStoreObserver, TATrackingAvoidanceServiceProtocol> {
    NSDate * _latestClassificationDate;
    NSHashTable * _observers;
    TATrackingAvoidanceServiceSettings * _serviceSettings;
    TASettings * _settings;
    TAOutgoingRequests * _stagedIntervisitMetrics;
    TAStore * _store;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *latestClassificationDate;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) TATrackingAvoidanceServiceSettings *serviceSettings;
@property (nonatomic, readonly) TASettings *settings;
@property (nonatomic, retain) TAOutgoingRequests *stagedIntervisitMetrics;
@property (nonatomic, readonly) TAStore *store;
@property (readonly) Class superclass;

+ (id)createRandomBytes:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_performDetection;
- (void)_performUpdateIfNecessary:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)bootstrapDeviceRecord:(id)arg1;
- (void)bootstrapVisitState:(id)arg1;
- (void)debugForceSurfaceStagedDetections:(id)arg1 deviceType:(unsigned long long)arg2;
- (void)debugStageTADetection:(id)arg1 deviceType:(unsigned long long)arg2;
- (void)didRequestAIS:(id)arg1;
- (void)fetchTAUnknownBeacon:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)filterAndStageDetectionResults:(id)arg1;
- (void)ingestTAEvent:(id)arg1;
- (id)init;
- (id)initWithSettings:(id)arg1;
- (id)initWithTASettings:(id)arg1;
- (id)latestClassificationDate;
- (void)notifyObserversOfRequests:(id)arg1;
- (void)notifyObserversOfStagedSuspiciousDevices:(id)arg1;
- (void)notifyObserversOfSuspiciousDeviceUpdate:(id)arg1;
- (void)notifyObserversOfSuspiciousDevices:(id)arg1;
- (void)notifyObserversOfUnstagedSuspiciousDevices:(id)arg1;
- (void)notifyObserversOfVisitStateChange;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (id)sendUnstagingUpdatesAndRemoveUnstagingUpdatesRequests:(id)arg1;
- (id)serviceSettings;
- (void)setLatestClassificationDate:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setServiceSettings:(id)arg1;
- (void)setStagedIntervisitMetrics:(id)arg1;
- (id)settings;
- (bool)shouldPerformDetection;
- (id)stagedIntervisitMetrics;
- (id)store;
- (void)visitState:(id)arg1 didChangeStateFromType:(unsigned long long)arg2 toType:(unsigned long long)arg3;
- (void)visitState:(id)arg1 didIssueMetricsSubmissionHint:(unsigned long long)arg2;

@end
