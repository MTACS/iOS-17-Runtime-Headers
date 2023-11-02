
@protocol AFClockAlarmSnapshotMutating <NSObject>

@required

- (void)setAlarmsByID:(NSDictionary *)arg1;
- (void)setDate:(NSDate *)arg1;
- (void)setGeneration:(unsigned long long)arg1;
- (void)setNotifiedFiringAlarmIDs:(NSOrderedSet *)arg1;

@end
