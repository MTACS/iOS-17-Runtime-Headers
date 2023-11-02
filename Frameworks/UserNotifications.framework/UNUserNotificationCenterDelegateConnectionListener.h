
@interface UNUserNotificationCenterDelegateConnectionListener : NSObject <NSXPCListenerDelegate, UNUserNotificationCenterDelegateServiceProtocol> {
    NSObject<OS_dispatch_queue> * _callOutQueue;
    NSMutableDictionary * _delegateByBundleIdentifier;
    NSMutableDictionary * _listenerByBundleIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_queue_didChangeSettings:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_didOpenApplicationForResponse:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_didReceiveNotificationResponse:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)_queue_ensureListenerForBundleIdentifier:(id)arg1;
- (void)_queue_invalidateListenerForBundleIdentifier:(id)arg1;
- (void)_queue_setDelegate:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)didChangeSettings:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)didOpenApplicationForResponse:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)didReceiveNotificationResponse:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setDelegate:(id)arg1 forBundleIdentifier:(id)arg2;

@end
