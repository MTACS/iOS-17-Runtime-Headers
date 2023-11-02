
@interface CXNetworkExtensionMessageControllerHost : NSObject <CXNetworkExtensionMessageControllerHostConnectionDelegate, NSXPCListenerDelegate> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _accessorLock;
    NSMutableSet * _connections;
    NSMapTable * _delegateToQueue;
    NSXPCListener * _xpcListener;
}

@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } accessorLock;
@property (nonatomic, readonly) NSMutableSet *connections;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSMapTable *delegateToQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSXPCListener *xpcListener;

- (void).cxx_destruct;
- (struct os_unfair_lock_s { unsigned int x1; })accessorLock;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (id)connections;
- (id)delegateToQueue;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)networkExtensionMessageControllerHostConnection:(id)arg1 didReceiveIncomingMessage:(id)arg2 forBundleIdentifier:(id)arg3;
- (void)networkExtensionMessageControllerHostConnection:(id)arg1 didReceiveIncomingPushToTalkMessage:(id)arg2 forBundleIdentifier:(id)arg3;
- (void)networkExtensionMessageControllerHostConnectionInvalidated:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (id)xpcListener;

@end
