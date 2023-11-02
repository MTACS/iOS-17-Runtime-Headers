
@interface ACHAwardsWorkoutServer : HDStandardTaskServer <ACHAwardsWorkoutServerInterface> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSObject<OS_dispatch_queue> * _queue;
    ACHWorkoutUtility * _workoutUtility;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, retain) ACHWorkoutUtility *workoutUtility;

+ (id)taskIdentifier;

- (void).cxx_destruct;
- (id)_protectedDataAvailabilityError;
- (id)clientQueue;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (id)queue;
- (id)remoteInterface;
- (void)remote_bestDistanceForFirstPartyWorkoutsWithType:(unsigned long long)arg1 endingBeforeDate:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_bestEnergyBurnedForFirstPartyWorkoutsWithType:(unsigned long long)arg1 endingBeforeDate:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_mindfulMinutesForForDateInterval:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_numberOfFirstPartyWorkoutsWithDuration:(double)arg1 containedInInterval:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_numberOfFirstPartyWorkoutsWithDuration:(double)arg1 type:(unsigned long long)arg2 andLocation:(unsigned long long)arg3 containedInInterval:(id)arg4 completion:(id /* block */)arg5;
- (void)remote_numberOfFirstPartyWorkoutsWithDuration:(double)arg1 type:(unsigned long long)arg2 endingOnOrBeforeDate:(id)arg3 completion:(id /* block */)arg4;
- (void)remote_numberOfWorkoutsWithDuration:(double)arg1 containedInInterval:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_workoutsInDateInterval:(id)arg1 completion:(id /* block */)arg2;
- (void)setClientQueue:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setWorkoutUtility:(id)arg1;
- (id)workoutUtility;

@end
