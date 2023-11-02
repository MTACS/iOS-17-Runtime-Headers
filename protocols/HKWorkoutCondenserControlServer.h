
@protocol HKWorkoutCondenserControlServer

@required

- (void)remote_condensableWorkoutsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKCodableCondensedWorkoutCollection *, NSError *, void*
- (void)remote_condenseWorkoutWithUUID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_condenseWorkoutsForReason:(void *)arg1 workoutBatchLimit:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: long long, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_condensedWorkoutsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKCodableCondensedWorkoutCollection *, NSError *, void*

@end
