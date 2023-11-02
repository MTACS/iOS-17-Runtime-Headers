
@interface HDWorkoutBuilderSampleQueryServer : HDQueryServer <HDDatabaseProtectedDataObserver, HDTaskServerObserver, HDWorkoutBuilderServerSampleObserer> {
    bool  _deliverQuantities;
    bool  _hasDeliveredInitialResults;
    bool  _hasFinishedHistoricalFetch;
    bool  _hasNotifiedFinishedHistoricalFetch;
    NSUUID * _workoutBuilderIdentifier;
    HDWorkoutBuilderServer * _workoutBuilderServer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)queryClass;
+ (id)requiredEntitlements;
+ (bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)_queue_start;
- (bool)_shouldExecuteWhenProtectedDataIsUnavailable;
- (bool)_shouldObserveDatabaseProtectedDataAvailability;
- (bool)_shouldObserveOnPause;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (void)didCreateTaskServer:(id)arg1;
- (void)didInvalidateTaskServer:(id)arg1;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (void)workoutBuilderServer:(id)arg1 addedQuantities:(id)arg2;
- (void)workoutBuilderServer:(id)arg1 addedSamples:(id)arg2;

@end
