
@interface PDSXPCConnector : NSObject <PDSRemoteVendor> {
    <PDSXPCConnection> * _XPCConnection;
    NSString * _clientID;
    NSError * _connectionError;
    <PDSXPCConnectionVendor> * _connectionVendor;
    <PDSXPCHandshake><NSXPCProxyCreating> * _handshakeProxy;
    <PDSXPCInterfaceVendor> * _interfaceVendor;
    <PDSRemoteInternal><NSXPCProxyCreating> * _internalRemoteObject;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <PDSRemote><NSXPCProxyCreating> * _remoteObject;
    <PDSRemoteInternal> * _syncInternalRemoteObject;
    <PDSRemote> * _syncRemoteObject;
}

@property (nonatomic, retain) <PDSXPCConnection> *XPCConnection;
@property (nonatomic, retain) NSString *clientID;
@property (nonatomic, retain) NSError *connectionError;
@property (nonatomic, retain) <PDSXPCConnectionVendor> *connectionVendor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <PDSXPCHandshake><NSXPCProxyCreating> *handshakeProxy;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <PDSXPCInterfaceVendor> *interfaceVendor;
@property (nonatomic, retain) <PDSRemoteInternal><NSXPCProxyCreating> *internalRemoteObject;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, retain) <PDSRemote><NSXPCProxyCreating> *remoteObject;
@property (readonly) Class superclass;
@property (nonatomic, retain) <PDSRemoteInternal> *syncInternalRemoteObject;
@property (nonatomic, retain) <PDSRemote> *syncRemoteObject;

- (void).cxx_destruct;
- (id)XPCConnection;
- (id)_genericProxyWithError:(id*)arg1 remoteBlock:(id /* block */)arg2;
- (id)_genericSyncProxyWithErrorHandler:(id /* block */)arg1 localStorage:(id*)arg2 remoteBlock:(id /* block */)arg3;
- (id)_lockedPerformConnectWithBlock:(id /* block */)arg1;
- (id)_lockedRemoteInternalObject;
- (id)_lockedRemoteObject;
- (id)_lockedXPCConnection;
- (id)clientID;
- (id)connectionError;
- (id)connectionVendor;
- (id)handshakeProxy;
- (id)initWithClientID:(id)arg1;
- (id)initWithClientID:(id)arg1 interfaceVendor:(id)arg2 connectionVendor:(id)arg3;
- (id)interfaceVendor;
- (id)internalRemoteObject;
- (id)internalRemoteObjectProxyWithError:(id*)arg1;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (id)remoteObject;
- (id)remoteObjectProxyWithError:(id*)arg1;
- (void)setClientID:(id)arg1;
- (void)setConnectionError:(id)arg1;
- (void)setConnectionVendor:(id)arg1;
- (void)setHandshakeProxy:(id)arg1;
- (void)setInterfaceVendor:(id)arg1;
- (void)setInternalRemoteObject:(id)arg1;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setRemoteObject:(id)arg1;
- (void)setSyncInternalRemoteObject:(id)arg1;
- (void)setSyncRemoteObject:(id)arg1;
- (void)setXPCConnection:(id)arg1;
- (id)syncInternalRemoteObject;
- (id)syncRemoteObject;
- (id)synchronousInternalRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (bool)validateConnectionWithError:(id*)arg1;

@end
