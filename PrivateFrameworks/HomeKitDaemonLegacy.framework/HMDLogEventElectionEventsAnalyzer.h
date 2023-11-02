
@interface HMDLogEventElectionEventsAnalyzer : HMDLogEventAnalyzer <HMDAggregationAnalysisEventContributing> {
    HMDEventCountersManager * _eventCountersManager;
    bool  _isCurrentDeviceInSecondaryResidentCoordinationMesh;
    double  _lastDurationInMeshUpdateTime;
    NSNumber * _lastPrimaryUpdateTime;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id /* block */  _uptimeFactory;
}

@property (nonatomic, readonly) HMDEventCountersManager *eventCountersManager;
@property bool isCurrentDeviceInSecondaryResidentCoordinationMesh;
@property double lastDurationInMeshUpdateTime;
@property (nonatomic, retain) NSNumber *lastPrimaryUpdateTime;
@property (nonatomic, readonly) id /* block */ uptimeFactory;

+ (id)managedEventCounterRequestGroups;

- (void).cxx_destruct;
- (void)_updatePrimaryDuration;
- (void)didReceiveEventFromDispatcher:(id)arg1;
- (id)eventCountersManager;
- (unsigned long long)fetchCountForEventName:(id)arg1;
- (void)handlePrimaryResidentChangedNotification:(id)arg1;
- (void)incrementCountForEventName:(id)arg1;
- (void)incrementCountForEventName:(id)arg1 withValue:(long long)arg2;
- (id)initWithDataSource:(id)arg1;
- (id)initWithDataSource:(id)arg1 uptimeFactory:(id /* block */)arg2;
- (bool)isCurrentDeviceInSecondaryResidentCoordinationMesh;
- (double)lastDurationInMeshUpdateTime;
- (id)lastPrimaryUpdateTime;
- (void)populateAggregationAnalysisLogEvent:(id)arg1;
- (void)resetAggregationAnalysisContext;
- (void)setIsCurrentDeviceInSecondaryResidentCoordinationMesh:(bool)arg1;
- (void)setLastDurationInMeshUpdateTime:(double)arg1;
- (void)setLastPrimaryUpdateTime:(id)arg1;
- (void)updateMeshStateAndDurationInPrimaryMeshForCurrentDevice:(bool)arg1;
- (void)updatePrimaryDuration;
- (id /* block */)uptimeFactory;

@end
