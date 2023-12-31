
@protocol AVTSyncSchedulingAuthority

@required

- (void)didReceivePushNotification;
- (void)didResetSync;
- (void)exportDidCompleteSuccessfully;
- (bool)exportRequired;
- (void)importDidCompleteSuccessfully;
- (bool)importRequired;
- (void)madeLocalChanges;

@end
