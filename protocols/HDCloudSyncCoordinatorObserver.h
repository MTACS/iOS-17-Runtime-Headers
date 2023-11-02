
@protocol HDCloudSyncCoordinatorObserver

@required

- (void)cloudSyncCoordinator:(HDCloudSyncCoordinator *)arg1 syncRequestDidCompleteWithSuccess:(bool)arg2 error:(NSError *)arg3;

@end
