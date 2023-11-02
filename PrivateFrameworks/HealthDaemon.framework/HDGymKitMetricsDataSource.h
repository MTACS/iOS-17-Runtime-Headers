
@interface HDGymKitMetricsDataSource : HDStandardTaskServer <HDMetricsCollectorObserver, HDWorkoutDataSource, HKDataFlowLinkProcessor, HKGymKitDataSourceServerInterface> {
    NSMutableDictionary * _accumulatedMetadata;
    NSLock * _lock;
    HKDataFlowLink * _workoutDataFlowLink;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) HKDataFlowLink *workoutDataFlowLink;
@property (readonly, copy) NSUUID *workoutDataProcessorUUID;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)_startObservingMetrics;
- (void)connectionInvalidated;
- (void)dealloc;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (void)metricsCollector:(id)arg1 didCollectMetrics:(id)arg2;
- (id)remoteInterface;
- (void)remote_startTaskServerIfNeeded;
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
