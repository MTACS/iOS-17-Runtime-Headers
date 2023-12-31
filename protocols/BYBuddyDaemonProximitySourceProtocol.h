
@protocol BYBuddyDaemonProximitySourceProtocol <NSObject>

@required

- (void)backupCompletedWithError:(NSError *)arg1;
- (void)backupProgress:(double)arg1 estimatedTimeRemaining:(long long)arg2;
- (void)finishedWithError:(NSError *)arg1;
- (void)syncCompletedWithErrors:(NSArray *)arg1;
- (void)syncProgress:(double)arg1;

@end
