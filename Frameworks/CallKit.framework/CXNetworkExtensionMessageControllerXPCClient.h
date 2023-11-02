
@interface CXNetworkExtensionMessageControllerXPCClient : NSObject <CXNetworkExtensionMessageControllerDataSource> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _accessorLock;
    NSXPCConnection * _connection;
}

@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } accessorLock;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct os_unfair_lock_s { unsigned int x1; })accessorLock;
- (id)connection;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)sendNetworkExtensionMessage:(id)arg1 forBundleIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)sendNetworkExtensionPushToTalkMessage:(id)arg1 forBundleIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)setConnection:(id)arg1;

@end
