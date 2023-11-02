
@interface PXCPLSyncActivity : PXObservable {
    bool  _isSyncing;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSProgress * _syncProgress;
    unsigned long long  _syncProgressState;
    id  _syncProgressSubscriber;
}

@property (nonatomic, readonly) bool isSyncing;

- (void).cxx_destruct;
- (void)_queue_subscribeToSyncProgress;
- (void)_setSyncProgress:(id)arg1;
- (void)_setSyncProgressState:(unsigned long long)arg1;
- (void)_unsubscribeFromSyncProgress;
- (void)_updateIsSyncing;
- (void)_updateSyncProgressState;
- (void)dealloc;
- (id)description;
- (id)init;
- (bool)isSyncing;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setIsSyncing:(bool)arg1;

@end
