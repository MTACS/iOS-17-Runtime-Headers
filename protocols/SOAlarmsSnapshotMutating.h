
@protocol SOAlarmsSnapshotMutating <NSObject>

@required

- (void)setAlarmsByID:(NSDictionary *)arg1;
- (void)setDate:(NSDate *)arg1;
- (void)setDismissedAlarmIDs:(NSOrderedSet *)arg1;
- (void)setFiringAlarmIDs:(NSOrderedSet *)arg1;

@end
