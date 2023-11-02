
@interface HDWorkoutObserverServer : HDStandardTaskServer <HDCurrentWorkoutObserver, HDWorkoutDataAccumulatorObserver, _HKWorkoutObserverServerInterface> {
    HDWorkoutSessionServer * _currentWorkout;
    NSLock * _lock;
    bool  _registered;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)connectionInvalidated;
- (void)dealloc;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (id)remoteInterface;
- (void)remote_startTaskServerIfNeeded;
- (void)remote_waitForAutomaticWorkoutRecoveryWithCompletion:(id /* block */)arg1;
- (void)workoutDataAccumulator:(id)arg1 didUpdateEvents:(id)arg2;
- (void)workoutDataAccumulator:(id)arg1 didUpdateStartDate:(id)arg2;
- (void)workoutManager:(id)arg1 currentWorkout:(id)arg2 didChangeToState:(long long)arg3;
- (void)workoutManager:(id)arg1 currentWorkout:(id)arg2 didUpdateDataAccumulator:(id)arg3;
- (void)workoutManager:(id)arg1 didUpdateCurrentWorkout:(id)arg2;

@end
