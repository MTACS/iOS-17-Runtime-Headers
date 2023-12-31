
@protocol PSYSyncCoordinatorDelegate <NSObject>

@optional

- (void)supportsMigrationSync;
- (void)syncCoordinator:(PSYSyncCoordinator *)arg1 beginSyncSession:(PSYServiceSyncSession *)arg2;
- (void)syncCoordinator:(PSYSyncCoordinator *)arg1 didInvalidateSyncSession:(PSYServiceSyncSession *)arg2;
- (void)syncCoordinatorDidChangeSyncRestriction:(PSYSyncCoordinator *)arg1;
- (void)syncCoordinatorDidReceiveStartSyncCommand:(PSYSyncCoordinator *)arg1;

@end
