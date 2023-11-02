
@interface PKUserNotificationsRemoteNotificationServiceConnection : NSObject <PKUserNotificationServerRemoteNotificationXPCClient> {
    NSString * _bundleIdentifier;
    NSObject<OS_dispatch_queue> * _callOutQueue;
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _registries;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callOutQueue;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSMutableSet *registries;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_invalidate;
- (id)_queue_ensureConnection;
- (void)_queue_interruptedConnection;
- (void)_queue_invalidatedConnection;
- (void)_queue_remoteUserNotificationPayloadReceived:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_queue_remoteUserNotificationsRegistrationSucceededWithDeviceToken:(id)arg1;
- (bool)allowsRemoteNotifications;
- (id)bundleIdentifier;
- (id)callOutQueue;
- (id)connection;
- (void)didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)queue;
- (void)registerPushRegistry:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)registries;
- (void)remoteUserNotificationPayloadReceived:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setBundleIdentifier:(id)arg1;
- (void)setCallOutQueue:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRegistries:(id)arg1;
- (void)unregisterPushRegistry:(id)arg1;

@end
