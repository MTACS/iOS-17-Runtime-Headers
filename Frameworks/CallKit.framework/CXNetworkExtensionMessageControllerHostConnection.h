
@interface CXNetworkExtensionMessageControllerHostConnection : NSObject <CXNetworkExtensionMessageControllerHostProtocol> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _accessorLock;
    NSString * _applicationIdentifier;
    NSSet * _capabilities;
    NSXPCConnection * _connection;
    <CXNetworkExtensionMessageControllerHostConnectionDelegate> * _delegate;
}

@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } accessorLock;
@property (nonatomic, readonly, copy) NSString *applicationIdentifier;
@property (nonatomic, readonly, copy) NSSet *capabilities;
@property (nonatomic, readonly) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CXNetworkExtensionMessageControllerHostConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct os_unfair_lock_s { unsigned int x1; })accessorLock;
- (id)applicationIdentifier;
- (id)capabilities;
- (id)connection;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)initWithConnection:(id)arg1;
- (void)invalidate;
- (void)sendNetworkExtensionMessage:(id)arg1 forBundleIdentifier:(id)arg2 reply:(id /* block */)arg3;
- (void)sendNetworkExtensionPushToTalkMessage:(id)arg1 forBundleIdentifier:(id)arg2 reply:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;

@end
