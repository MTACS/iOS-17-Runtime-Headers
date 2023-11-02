
@interface UserNotificationsCore.NotificationServiceListener : NSObject <NSXPCListenerDelegate> {
    void queue;
    void queue_bundleIdentifiersByObservingConnection;
    void queue_connections;
    void queue_listener;
    void queue_observerTransaction;
    void queue_observingConnectionsByBundleIdentifier;
}

- (void).cxx_destruct;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
