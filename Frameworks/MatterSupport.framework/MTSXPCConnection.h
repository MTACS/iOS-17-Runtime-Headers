
@interface MTSXPCConnection : HMFObject <MTSXPCConnection> {
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSXPCInterface *exportedInterface;
@property (retain) id exportedObject;
@property (readonly) unsigned long long hash;
@property (copy) id /* block */ interruptionHandler;
@property (copy) id /* block */ invalidationHandler;
@property (readonly) int processIdentifier;
@property (readonly) HMFProcessInfo *processInfo;
@property (retain) NSXPCInterface *remoteObjectInterface;
@property (readonly) id remoteObjectProxy;
@property (readonly) Class superclass;
@property (readonly) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (void)activate;
- (id)attributeDescriptions;
- (id)exportedInterface;
- (id)exportedObject;
- (id)initWithXPCConnection:(id)arg1;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (int)processIdentifier;
- (id)processInfo;
- (id)remoteObjectInterface;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)resume;
- (void)setExportedInterface:(id)arg1;
- (void)setExportedObject:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setRemoteObjectInterface:(id)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)valueForEntitlement:(id)arg1;
- (id)xpcConnection;

@end
