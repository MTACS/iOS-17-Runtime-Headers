
@interface HDDataCollectionManager : NSObject <HDAssertionObserver, HDDiagnosticObject, HDPeriodicActivityDelegate, HDProfileReadyObserver> {
    NSObject<OS_dispatch_queue> * _assertionQueue;
    HDBTLEHeartRateDataCollector * _blteHeartRateDataCollector;
    NSSet * _collectibleTypes;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _collectorLock;
    NSMutableArray * _collectorLock_builtinCollectors;
    NSMutableDictionary * _collectorLock_dataCollectorsByType;
    NSMutableDictionary * _dataAggregatorsByType;
    NSObject<OS_dispatch_queue> * _dataCollectionQueue;
    HDFakeDataCollector * _fakeCollector;
    NSMutableDictionary * _lastFlushDateByType;
    NSDate * _lastLaunchUpdate;
    NSMutableDictionary * _observersByType;
    HDDatabaseCoalescedWritePool * _pendingSavePool;
    HDPeriodicActivity * _periodicUpdateActivity;
    int  _privacyPreferencesNotificationToken;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    HDSeriesQuantityEventObserver * _seriesQuantityEventObserver;
    id /* block */  _unitTest_aggregatorConfigurationChangedHandler;
    bool  unitTest_hasSetPendingSaveCoalescingInterval;
    double  unitTest_pendingSaveCoalescingInterval;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dataCollectionQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAccessToFitnessData;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDProfile *profile;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setAggregatorConfigurationChangeHandler:(id /* block */)arg1;
- (void)addDataCollectionObserver:(id)arg1 type:(id)arg2 collectionInterval:(double)arg3 state:(id)arg4;
- (void)addDataCollector:(id)arg1;
- (id)aggregatorForType:(id)arg1;
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;
- (id)btleHeartRateDataCollector;
- (id)dataCollectionQueue;
- (void)dealloc;
- (id)diagnosticDescription;
- (void)generateFakeDataForActivityType:(long long)arg1 minutes:(double)arg2 completion:(id /* block */)arg3;
- (bool)hasAccessToFitnessData;
- (id)init;
- (id)initWithProfile:(id)arg1;
- (void)performPeriodicActivity:(id)arg1 completion:(id /* block */)arg2;
- (void)performSaveWithMaximumLatency:(double)arg1 block:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;
- (void)periodicUpdate;
- (id)profile;
- (void)profileDidBecomeReady:(id)arg1;
- (void)removeDataCollectionObserver:(id)arg1;
- (void)removeDataCollectionObserver:(id)arg1 type:(id)arg2;
- (void)requestAggregationThroughDate:(id)arg1 types:(id)arg2 mode:(long long)arg3 options:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (bool)sensorDataArrayReceived:(id)arg1 deviceEntity:(id)arg2 error:(id*)arg3;
- (void)startDataCollectionForType:(id)arg1 observer:(id)arg2 collectionInterval:(double)arg3;
- (void)startFakingDataWithActivityType:(long long)arg1 speed:(id)arg2;
- (void)startFakingWithHKWorkoutActivityType:(unsigned long long)arg1;
- (void)stopDataCollectionForType:(id)arg1 observer:(id)arg2;
- (void)stopFakingData;
- (id)takeCollectionAssertionWithOwnerIdentifier:(id)arg1 collectionIntervalsByType:(id)arg2 observerState:(id)arg3;
- (id)takeCollectionAssertionWithOwnerIdentifier:(id)arg1 sampleTypes:(id)arg2 observer:(id)arg3 observerState:(id)arg4 collectionInterval:(double)arg5;
- (id)takeCollectionAssertionWithOwnerIdentifier:(id)arg1 sampleTypes:(id)arg2 observerState:(id)arg3 collectionInterval:(double)arg4;
- (void)unitTest_addCollectibleType:(id)arg1;
- (id)unitTest_dataAggregatorConfigurationForType:(id)arg1;
- (void)unitTest_setAggregator:(id)arg1 forType:(id)arg2;
- (void)unitTest_setPendingSaveCoalescingInterval:(double)arg1;

@end
