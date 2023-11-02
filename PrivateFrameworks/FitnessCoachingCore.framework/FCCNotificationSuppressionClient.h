
@interface FCCNotificationSuppressionClient : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    FCCNotificationSuppressionStore * _store;
    FCCXPCClient * _xpcClient;
}

- (void).cxx_destruct;
- (void)_addNotificationSuppressionRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)_removeNotificationSuppressionRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)addNotificationSuppressionRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithQueue:(id)arg1 store:(id)arg2 xpcClient:(id)arg3;
- (bool)notificationsSuppressed;
- (void)removeNotificationSuppressionRequest:(id)arg1 completion:(id /* block */)arg2;

@end
