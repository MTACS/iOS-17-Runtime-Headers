
@protocol PSYSyncSessionObserverInterface <NSObject>

@required

- (oneway void)invalidateSyncSession:(PSYSyncSession *)arg1;
- (oneway void)syncSessionWillStart:(PSYSyncSession *)arg1;
- (oneway void)updateSyncSession:(PSYSyncSession *)arg1;

@end
