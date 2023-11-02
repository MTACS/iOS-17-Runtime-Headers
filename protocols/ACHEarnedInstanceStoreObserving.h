
@protocol ACHEarnedInstanceStoreObserving <NSObject>

@required

- (void)earnedInstanceStore:(ACHEarnedInstanceStore *)arg1 didAddNewEarnedInstances:(NSArray *)arg2;
- (void)earnedInstanceStore:(ACHEarnedInstanceStore *)arg1 didRemoveEarnedInstances:(NSArray *)arg2;
- (void)earnedInstanceStoreDidReceiveSyncNotification:(ACHEarnedInstanceStore *)arg1;

@optional

- (void)earnedInstanceStoreDidFinishInitialFetch:(ACHEarnedInstanceStore *)arg1;

@end
