
@protocol PSYInitialSyncStateObserverDelegate <NSObject>

@optional

- (void)initialSyncStateObserver:(PSYInitialSyncStateObserver *)arg1 initialSyncDidCompleteForPairingIdentifier:(NSUUID *)arg2;
- (void)initialSyncStateObserver:(PSYInitialSyncStateObserver *)arg1 syncDidCompleteForPairingIdentifier:(NSUUID *)arg2;
- (void)initialSyncStateObserver:(PSYInitialSyncStateObserver *)arg1 syncDidResetForPairingIdentifier:(NSUUID *)arg2;
- (void)initialSyncStateObserverClientCanRetryFailedRequests:(PSYInitialSyncStateObserver *)arg1;

@end
