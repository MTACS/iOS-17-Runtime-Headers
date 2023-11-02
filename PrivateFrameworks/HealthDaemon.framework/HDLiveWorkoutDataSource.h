
@interface HDLiveWorkoutDataSource : HDStandardTaskServer <HDWorkoutDataDestination, HDWorkoutDataSource, HKDataFlowLinkProcessor, HKLiveWorkoutDataSourceServerInterface> {
    HDWorkoutBasicDataSource * _basicDataSource;
    HKWorkoutDataSourceConfiguration * _dataSourceConfiguration;
    NSLock * _lock;
    HDProfile * _profile;
    HKDataFlowLink * _workoutDataFlowLink;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HDWorkoutDataAccumulator> *workoutDataAccumulator;
@property (readonly) unsigned long long workoutDataDestinationState;
@property (readonly) HKDataFlowLink *workoutDataFlowLink;
@property (readonly, copy) NSUUID *workoutDataProcessorUUID;

+ (Class)configurationClass;
+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)addMetadata:(id)arg1 dataSource:(id)arg2;
- (void)addOtherSamples:(id)arg1 dataSource:(id)arg2;
- (void)addQuantities:(id)arg1 dataSource:(id)arg2;
- (void)addWorkoutEvents:(id)arg1 dataSource:(id)arg2;
- (void)connectionInvalidated;
- (void)didBeginActivity:(id)arg1 dataSource:(id)arg2;
- (void)didEndActivity:(id)arg1 dataSource:(id)arg2;
- (void)didReceiveDataFromRemoteWorkoutSession:(id)arg1 completion:(id /* block */)arg2;
- (void)didSuggestActivity:(id)arg1 dataSource:(id)arg2;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (id)remoteInterface;
- (void)remote_setDataSourceConfiguration:(id)arg1;
- (void)remote_startTaskServerIfNeeded;
- (void)remote_synchronizeWithCompletion:(id /* block */)arg1;
- (void)updateWorkoutConfiguration:(id)arg1 dataSource:(id)arg2;
- (id)workoutDataAccumulator;
- (void)workoutDataDestination:(id)arg1 didBeginActivity:(id)arg2;
- (void)workoutDataDestination:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)workoutDataDestination:(id)arg1 didEndActivity:(id)arg2;
- (void)workoutDataDestination:(id)arg1 didInsertEvent:(id)arg2;
- (void)workoutDataDestination:(id)arg1 didUpdateConfiguration:(id)arg2;
- (void)workoutDataDestination:(id)arg1 requestsDataFrom:(id)arg2 to:(id)arg3;
- (void)workoutDataDestination:(id)arg1 requestsFinalDataFrom:(id)arg2 to:(id)arg3 completion:(id /* block */)arg4;
- (unsigned long long)workoutDataDestinationState;
- (id)workoutDataFlowLink;
- (id)workoutDataProcessorUUID;

@end
