
@interface MapsSync.MapsSyncStoreController : NSObject {
    void _analyzerSubscriptions;
    void _barrierQueue;
    void _callbackQueue;
    void _delegate;
    void _store;
    void _subscriptionLock;
}

+ (id)initForAPIv1WithNotifyForChanges:(id)arg1 delegate:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)contextDidSaveWithNotification:(id)arg1;
- (void)dealloc;
- (void)handleRemoteChange;
- (id)init;
- (id)initWithConfig:(id)arg1 notifyForChanges:(id)arg2 callbackQueue:(id)arg3 delegate:(id)arg4;
- (id)initWithNotifyForChanges:(id)arg1 delegate:(id)arg2;
- (id)initWithPrimarySession:(id)arg1 cacheSession:(id)arg2 notifyForChanges:(id)arg3 callbackQueue:(id)arg4 delegate:(id)arg5 error:(id*)arg6;

@end
