
@interface HDGymKitWorkoutSessionController : NSObject <HDFitnessMachineSessionObserver, HDWorkoutSessionController, HDWorkoutSessionStateController> {
    bool  _acceptsDataAccumulators;
    <HDWorkoutDataAccumulator> * _currentAccumulator;
    HDDefaultWorkoutSessionController * _defaultSessionController;
    NSUUID * _fitnessMachineSessionUUID;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    <HDWorkoutSessionStateController> * _sessionStateController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HDWorkoutDataAccumulator> *workoutDataAccumulator;

+ (id)recoveryIdentifier;
+ (void)willFinishSessionWithRecoveryData:(id)arg1 profile:(id)arg2;

- (void).cxx_destruct;
- (void)autoPauseWithDate:(id)arg1;
- (void)autoResumeWithDate:(id)arg1;
- (void)beginNewActivity:(id)arg1;
- (void)didBeginNewActivity:(id)arg1;
- (void)didDetectActivityChange:(id)arg1;
- (void)didEndCurrentActivity:(id)arg1;
- (bool)enableAutomaticDetectionForActivityConfigurations:(id)arg1;
- (void)endCurrentActivity:(id)arg1;
- (void)endHeartRateRecovery;
- (bool)endWithError:(id*)arg1;
- (void)finish;
- (void)finishAggregationWithDate:(id)arg1;
- (void)fitnessMachineSessionUUID:(id)arg1 updatedRecoveryConfiguration:(id)arg2;
- (void)generateConfigurationUpdate:(id)arg1;
- (void)generateError:(id)arg1;
- (void)generateEvent:(id)arg1;
- (void)generateMetadata:(id)arg1;
- (void)hktest_setStateTransitionCompletionHandler:(id /* block */)arg1;
- (id)initWithProfile:(id)arg1 sessionConfiguration:(id)arg2 sessionStateController:(id)arg3 recoveryState:(id)arg4;
- (bool)pauseWithError:(id*)arg1;
- (bool)prepareWithError:(id*)arg1;
- (bool)resumeWithError:(id*)arg1;
- (bool)startActivityWithDate:(id)arg1 error:(id*)arg2;
- (bool)stopActivityWithDate:(id)arg1 error:(id*)arg2;
- (bool)storeSessionControllerState:(id)arg1 forRecoveryIdentifier:(id)arg2 error:(id*)arg3;
- (void)unitTest_setCMWorkoutManager:(id)arg1;
- (id)workoutDataAccumulator;
- (void)workoutSessionServer:(id)arg1 accumulatorDidChange:(id)arg2;
- (void)workoutSessionServer:(id)arg1 didChangeConfiguration:(id)arg2;
- (void)workoutSessionServer:(id)arg1 didTransitionFromState:(long long)arg2 toState:(long long)arg3 date:(id)arg4;

@end
