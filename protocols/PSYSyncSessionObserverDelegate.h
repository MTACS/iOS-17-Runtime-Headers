
@protocol PSYSyncSessionObserverDelegate <NSObject>

@required

- (void)syncSessionObserver:(PSYSyncSessionObserver *)arg1 didInvalidateSyncSession:(PSYSyncSession *)arg2;
- (void)syncSessionObserver:(PSYSyncSessionObserver *)arg1 didReceiveUpdate:(PSYSyncSessionUpdate *)arg2;
- (void)syncSessionObserver:(PSYSyncSessionObserver *)arg1 receivedSyncSession:(PSYSyncSession *)arg2;

@optional

- (void)supportsMigrationSync;

@end
