
@protocol HDCloudSyncManagerTaskQueueDelegate

@required

- (long long)compareTask:(HDCloudSyncManagerTask *)arg1 withTask:(HDCloudSyncManagerTask *)arg2 queue:(HDCloudSyncManagerTaskQueue *)arg3;

@end
