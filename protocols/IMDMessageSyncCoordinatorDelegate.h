
@protocol IMDMessageSyncCoordinatorDelegate <NSObject>

@required

- (void)syncCoordinatorFinishedFetchingRecordsOfType:(long long)arg1 name:(NSString *)arg2 identifier:(NSUUID *)arg3 count:(long long)arg4 error:(NSError *)arg5;
- (void)syncCoordinatorFinishedSyncWithName:(NSString *)arg1 identifier:(NSUUID *)arg2 error:(NSError *)arg3;
- (void)syncCoordinatorStartedSyncWithName:(NSString *)arg1 identifier:(NSUUID *)arg2;
- (void)syncCoordinatorWaitingForImportToFinishWithName:(NSString *)arg1 identifier:(NSUUID *)arg2;

@end
