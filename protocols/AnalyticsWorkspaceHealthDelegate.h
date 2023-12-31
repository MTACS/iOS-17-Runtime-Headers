
@protocol AnalyticsWorkspaceHealthDelegate <NSObject>

@optional

- (void)deleteDatabaseCompleted:(bool)arg1 error:(NSError *)arg2;
- (void)deleteDatabaseStarted;
- (void)destroyPersistentStoreCompleted:(bool)arg1 error:(NSError *)arg2;
- (void)destroyPersistentStoreStarted;
- (void)integrityCheckCompleted:(bool)arg1 error:(NSError *)arg2;
- (void)integrityCheckStarted;

@end
