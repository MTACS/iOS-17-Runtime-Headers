
@protocol HKPersistableWorkoutEvent

@required

- (NSDateInterval *)dateInterval;
- (NSError *)error;
- (id)initWithWorkoutEventType:(long long)arg1 sessionUUID:(NSUUID *)arg2 dateInterval:(NSDateInterval *)arg3 metadata:(NSDictionary *)arg4 error:(NSError *)arg5;
- (NSDictionary *)metadata;
- (NSUUID *)sessionUUID;
- (long long)workoutEventType;

@end
