
@protocol ACHAwardsWorkoutServerInterface <NSObject>

@required

- (void)remote_bestDistanceForFirstPartyWorkoutsWithType:(void *)arg1 endingBeforeDate:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: unsigned long long, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKQuantity *, NSError *, void*
- (void)remote_bestEnergyBurnedForFirstPartyWorkoutsWithType:(void *)arg1 endingBeforeDate:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: unsigned long long, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKQuantity *, NSError *, void*
- (void)remote_mindfulMinutesForForDateInterval:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSDateInterval *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKQuantity *, NSError *, void*
- (void)remote_numberOfFirstPartyWorkoutsWithDuration:(void *)arg1 containedInInterval:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: double, NSDateInterval *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (void)remote_numberOfFirstPartyWorkoutsWithDuration:(void *)arg1 type:(void *)arg2 andLocation:(void *)arg3 containedInInterval:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: double, unsigned long long, unsigned long long, NSDateInterval *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (void)remote_numberOfFirstPartyWorkoutsWithDuration:(void *)arg1 type:(void *)arg2 endingOnOrBeforeDate:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: double, unsigned long long, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (void)remote_numberOfWorkoutsWithDuration:(void *)arg1 containedInInterval:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: double, NSDateInterval *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (void)remote_workoutsInDateInterval:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSDateInterval *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
