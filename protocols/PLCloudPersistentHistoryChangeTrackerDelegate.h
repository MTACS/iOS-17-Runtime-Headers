
@protocol PLCloudPersistentHistoryChangeTrackerDelegate <NSObject>

@required

- (void)cloudChangeTrackerDidReceiveChangesWithTransaction:(PLXPCTransaction *)arg1;
- (id)readCloudTrackerTokenObject;
- (void)saveCloudTrackerTokenObject:(NSData *)arg1;

@end
