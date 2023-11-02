
@protocol HKCloudSyncControlClientInterface <NSObject>

@required

- (void)clientRemote_syncRequestDidCompleteWithSuccess:(bool)arg1 error:(NSError *)arg2;

@end
