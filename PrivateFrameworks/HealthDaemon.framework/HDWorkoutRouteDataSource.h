
@interface HDWorkoutRouteDataSource : HDStandardTaskServer <HDLocationEventDelegate, HDWorkoutDataSource, HDWorkoutSessionObserver, HKDataFlowLinkProcessor, HKWorkoutRouteDataSourceServerInterface> {
    HKQuantity * _currentElevation;
    HKUnit * _elevationUnit;
    HKQuantity * _latestAltitude;
    HDLocationDataCollector * _locationDataCollector;
    NSObject<OS_dispatch_queue> * _queue;
    HDWorkoutSessionServer * _sessionServer;
    HKDataFlowLink * _workoutDataFlowLink;
    NSUUID * _workoutUUID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (readonly) HKDataFlowLink *workoutDataFlowLink;
@property (readonly, copy) NSUUID *workoutDataProcessorUUID;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;

- (void).cxx_destruct;
- (id)_queue_createLocationDataCollectorWithConfiguration:(id)arg1 workoutUUID:(id)arg2;
- (void)_queue_setupLocationDataCollector;
- (id)_unitTest_locationDataCollector;
- (void)altitudeUpdated:(double)arg1;
- (void)connectionInvalidated;
- (id)description;
- (void)elevationUpdated:(unsigned long long)arg1;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (id)queue;
- (id)remoteInterface;
- (void)remote_setupWithSessionIdentifier:(id)arg1;
- (void)workoutDataDestination:(id)arg1 didBeginActivity:(id)arg2;
- (void)workoutDataDestination:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)workoutDataDestination:(id)arg1 didEndActivity:(id)arg2;
- (void)workoutDataDestination:(id)arg1 didInsertEvent:(id)arg2;
- (void)workoutDataDestination:(id)arg1 didUpdateConfiguration:(id)arg2;
- (void)workoutDataDestination:(id)arg1 requestsDataFrom:(id)arg2 to:(id)arg3;
- (void)workoutDataDestination:(id)arg1 requestsFinalDataFrom:(id)arg2 to:(id)arg3 completion:(id /* block */)arg4;
- (id)workoutDataFlowLink;
- (id)workoutDataProcessorUUID;
- (void)workoutRouteUpdated:(id)arg1;
- (void)workoutSession:(id)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3 date:(id)arg4;
- (void)workoutSession:(id)arg1 didFailWithError:(id)arg2;
- (void)workoutSession:(id)arg1 didGenerateEvent:(id)arg2;

@end
