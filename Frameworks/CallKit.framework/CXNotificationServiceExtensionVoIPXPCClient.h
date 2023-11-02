
@interface CXNotificationServiceExtensionVoIPXPCClient : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _accessorLock;
    NSXPCConnection * _connection;
}

@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } accessorLock;
@property (nonatomic, retain) NSXPCConnection *connection;

- (void).cxx_destruct;
- (struct os_unfair_lock_s { unsigned int x1; })accessorLock;
- (id)connection;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)requestApplicationLaunchForIncomingCall:(id)arg1 completion:(id /* block */)arg2;
- (bool)requestDidArriveFromExtensionPoint;
- (void)setConnection:(id)arg1;
- (bool)taskHasEntitlement:(id)arg1;

@end
