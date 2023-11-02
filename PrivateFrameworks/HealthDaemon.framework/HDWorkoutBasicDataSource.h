
@interface HDWorkoutBasicDataSource : NSObject <HDClientDataCollectionObservationStateMonitorDelegate, HDQuantitySeriesObserver, HDWorkoutDataSource, HKDataFlowLinkProcessor> {
    HDHealthStoreClient * _client;
    HDClientDataCollectionObservationStateMonitor * _clientStateMonitor;
    HDDataCollectionAssertion * _collectionAssertion;
    NSLock * _lock;
    HDProfile * _profile;
    NSSet * _sampleTypesToCollect;
    HKWorkoutConfiguration * _workoutConfiguration;
    HKDataFlowLink * _workoutDataFlowLink;
    NSUUID * _workoutDataProcessorUUID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSSet *sampleTypesToCollect;
@property (readonly) Class superclass;
@property (readonly) HKDataFlowLink *workoutDataFlowLink;
@property (readonly, copy) NSUUID *workoutDataProcessorUUID;

- (void).cxx_destruct;
- (void)dataCollectionObservationStateDidChangeForClient:(id)arg1;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 client:(id)arg2;
- (void)profile:(id)arg1 didDiscardSeriesOfType:(id)arg2;
- (id)sampleTypesToCollect;
- (void)setSampleTypesToCollect:(id)arg1;
- (void)setWorkoutConfiguration:(id)arg1;
- (id /* block */)transactionalQuantityInsertHandlerForProfile:(id)arg1 journaled:(bool)arg2 count:(long long)arg3;
- (void)workoutDataDestination:(id)arg1 didBeginActivity:(id)arg2;
- (void)workoutDataDestination:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)workoutDataDestination:(id)arg1 didEndActivity:(id)arg2;
- (void)workoutDataDestination:(id)arg1 didInsertEvent:(id)arg2;
- (void)workoutDataDestination:(id)arg1 didUpdateConfiguration:(id)arg2;
- (void)workoutDataDestination:(id)arg1 requestsDataFrom:(id)arg2 to:(id)arg3;
- (void)workoutDataDestination:(id)arg1 requestsFinalDataFrom:(id)arg2 to:(id)arg3 completion:(id /* block */)arg4;
- (id)workoutDataFlowLink;
- (id)workoutDataProcessorUUID;

@end
