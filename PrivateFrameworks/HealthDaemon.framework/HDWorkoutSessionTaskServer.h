
@interface HDWorkoutSessionTaskServer : HDStandardTaskServer <HDWorkoutDataDestination, HDWorkoutDataSource, HDWorkoutSessionObserver, HKDataFlowLinkProcessor, HKWorkoutSessionServerInterface> {
    <HDWorkoutDataAccumulator> * _accumulator;
    HDWorkoutBuilderEntity * _builderEntity;
    HKSource * _clientSource;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HDWorkoutSessionServer * _sessionServer;
    HKWorkoutSessionTaskConfiguration * _taskConfiguration;
    HKDataFlowLink * _workoutDataFlowLink;
}

@property (nonatomic, readonly, copy) HKSource *clientSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool requiresCoreLocationAssertion;
@property (nonatomic, readonly) long long sessionType;
@property (nonatomic, readonly) bool shouldStopPreviousSession;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supports3rdPartyAOT;
@property (nonatomic, readonly) bool supportsAppRelaunchForRecovery;
@property (nonatomic, readonly) <HDWorkoutDataAccumulator> *workoutDataAccumulator;
@property (readonly) unsigned long long workoutDataDestinationState;
@property (readonly) HKDataFlowLink *workoutDataFlowLink;
@property (readonly, copy) NSUUID *workoutDataProcessorUUID;

+ (Class)configurationClass;
+ (id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 error:(id*)arg5;
+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)addMetadata:(id)arg1 dataSource:(id)arg2;
- (void)addOtherSamples:(id)arg1 dataSource:(id)arg2;
- (void)addQuantities:(id)arg1 dataSource:(id)arg2;
- (void)addWorkoutEvents:(id)arg1 dataSource:(id)arg2;
- (id)clientSource;
- (void)connectionConfigured;
- (void)connectionInvalidated;
- (void)didBeginActivity:(id)arg1 dataSource:(id)arg2;
- (void)didDisconnectFromRemoteWithError:(id)arg1;
- (void)didEndActivity:(id)arg1 dataSource:(id)arg2;
- (void)didReceiveDataFromRemoteWorkoutSession:(id)arg1 completion:(id /* block */)arg2;
- (void)didSuggestActivity:(id)arg1 dataSource:(id)arg2;
- (void)didSyncCurrentActivity:(id)arg1;
- (void)didSyncStateEvent:(long long)arg1 date:(id)arg2;
- (void)didSyncTransitionToNewState:(long long)arg1 date:(id)arg2;
- (id)exportedInterface;
- (void)observeWorkoutSessionServer:(id)arg1;
- (id)remoteInterface;
- (void)remoteSessionDidRecover;
- (void)remote_beginNewActivityWithConfiguration:(id)arg1 date:(id)arg2 metadata:(id)arg3 completion:(id /* block */)arg4;
- (void)remote_enableAutomaticDetectionForActivityConfigurations:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_endCurrentActivityOnDate:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_recoverWithCompletion:(id /* block */)arg1;
- (void)remote_sendDataToRemoteWorkoutSession:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_setTargetState:(long long)arg1 date:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_setupMirroredSessionWithHandler:(id /* block */)arg1;
- (void)remote_setupTaskServerWithCompletion:(id /* block */)arg1;
- (void)remote_startMirroringToCompanionDeviceWithCompletion:(id /* block */)arg1;
- (void)remote_stopMirroringToCompanionDeviceWithCompletion:(id /* block */)arg1;
- (void)remote_syncSessionEvent:(long long)arg1 date:(id)arg2;
- (bool)requiresCoreLocationAssertion;
- (long long)sessionType;
- (void)setAssociatedWorkoutBuilderEntity:(id)arg1;
- (void)setWorkoutDataAccumulator:(id)arg1;
- (bool)shouldStopPreviousSession;
- (bool)supports3rdPartyAOT;
- (bool)supportsAppRelaunchForRecovery;
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
- (void)workoutSession:(id)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3 date:(id)arg4;
- (void)workoutSession:(id)arg1 didFailWithError:(id)arg2;
- (void)workoutSession:(id)arg1 didGenerateEvent:(id)arg2;

@end
