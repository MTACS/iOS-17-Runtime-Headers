
@protocol HDCloudSyncManagerObserver

@required

- (void)cloudSyncManager:(HDCloudSyncManager *)arg1 didUpdateDataUploadRequestStatus:(long long)arg2 startDate:(NSDate *)arg3 endDate:(NSDate *)arg4;
- (void)cloudSyncManager:(HDCloudSyncManager *)arg1 didUpdateErrorRequiringUserAction:(NSError *)arg2;
- (void)cloudSyncManager:(HDCloudSyncManager *)arg1 didUpdateLastLitePushDate:(NSDate *)arg2;
- (void)cloudSyncManager:(HDCloudSyncManager *)arg1 didUpdateLastPullDate:(NSDate *)arg2;
- (void)cloudSyncManager:(HDCloudSyncManager *)arg1 didUpdateLastPulledUpdateDate:(NSDate *)arg2;
- (void)cloudSyncManager:(HDCloudSyncManager *)arg1 didUpdateLastPushDate:(NSDate *)arg2;
- (void)cloudSyncManager:(HDCloudSyncManager *)arg1 didUpdateRestoreCompletionDate:(NSDate *)arg2;
- (void)cloudSyncManager:(HDCloudSyncManager *)arg1 didUpdateSyncEnabled:(bool)arg2;

@end
