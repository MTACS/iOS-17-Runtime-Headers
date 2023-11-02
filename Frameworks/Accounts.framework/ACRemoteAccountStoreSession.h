
@interface ACRemoteAccountStoreSession : NSObject <NSXPCProxyCreating> {
    ACAccountStoreClientSideListener * _clientSideListener;
    NSXPCConnection * _connection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _connectionLock;
    NSString * _effectiveBundleID;
    NSXPCListenerEndpoint * _listenerEndpoint;
    bool  _notificationsEnabled;
}

@property (nonatomic, copy) NSString *effectiveBundleID;
@property (nonatomic, readonly) NSXPCListenerEndpoint *listenerEndpoint;
@property (nonatomic) bool notificationsEnabled;

- (void).cxx_destruct;
- (id)_connection;
- (void)_locked_configureRemoteAccountStoreWithConnection:(id)arg1;
- (void)_locked_connection:(id)arg1 setEffectiveBundleID:(id)arg2;
- (void)_locked_connection:(id)arg1 setNotificationsEnabled:(bool)arg2;
- (void)_setConnectionInterrupted;
- (void)_setConnectionInvalidated;
- (void)dealloc;
- (id)effectiveBundleID;
- (id)init;
- (id)initWithListenerEndpoint:(id)arg1 delegate:(id)arg2;
- (id)listenerEndpoint;
- (bool)notificationsEnabled;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)setEffectiveBundleID:(id)arg1;
- (void)setNotificationsEnabled:(bool)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end
