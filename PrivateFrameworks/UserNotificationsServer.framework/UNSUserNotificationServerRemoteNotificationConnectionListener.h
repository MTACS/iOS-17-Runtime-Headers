
@interface UNSUserNotificationServerRemoteNotificationConnectionListener : NSObject <NSXPCListenerDelegate, PKUserNotificationServerRemoteNotificationXPCServer> {
    NSMapTable * _bundleIdentifiersByConnection;
    NSMutableDictionary * _connectionsByBundleIdentifier;
    NSXPCListener * _listener;
    NSObject<OS_dispatch_queue> * _queue;
    UNCRemoteNotificationServer * _remoteNotificationService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_allowsRemoteNotificationsForBundleIdentifier:(id)arg1;
- (id)_currentConnection;
- (void)_invalidateTokenForRemoteNotificationsForBundleIdentifier:(id)arg1;
- (void)_queue_addConnection:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)_queue_observerConnectionsForBundleIdentifier:(id)arg1;
- (void)_queue_removeConnection:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_removeConnectionForAllBundleIdentifiers:(id)arg1;
- (void)_removeConnectionForAllBundleIdentifiers:(id)arg1;
- (void)_requestTokenForRemoteNotificationsForBundleIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)dealloc;
- (void)didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)getAllowsRemoteNotificationsForBundleIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)initWithRemoteNotificationService:(id)arg1;
- (void)invalidateTokenForRemoteNotificationsForBundleIdentifier:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)requestTokenForRemoteNotificationsForBundleIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)resume;

@end
