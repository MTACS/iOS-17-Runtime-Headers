
@protocol AFClockTimerSnapshotMutating <NSObject>

@required

- (void)setDate:(NSDate *)arg1;
- (void)setGeneration:(unsigned long long)arg1;
- (void)setNotifiedFiringTimerIDs:(NSOrderedSet *)arg1;
- (void)setTimersByID:(NSDictionary *)arg1;

@end
