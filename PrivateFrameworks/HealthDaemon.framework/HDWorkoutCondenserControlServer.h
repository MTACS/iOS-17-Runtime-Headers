
@interface HDWorkoutCondenserControlServer : HDStandardTaskServer <HKWorkoutCondenserControlServer>

+ (id)requiredEntitlements;
+ (id)taskIdentifier;

- (id)exportedInterface;
- (id)remoteInterface;
- (void)remote_condensableWorkoutsWithCompletion:(id /* block */)arg1;
- (void)remote_condenseWorkoutWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_condenseWorkoutsForReason:(long long)arg1 workoutBatchLimit:(long long)arg2 completion:(id /* block */)arg3;
- (void)remote_condensedWorkoutsWithCompletion:(id /* block */)arg1;

@end
