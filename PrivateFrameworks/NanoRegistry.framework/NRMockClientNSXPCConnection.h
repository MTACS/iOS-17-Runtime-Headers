
@interface NRMockClientNSXPCConnection : NSObject <NRNSXPCConnectionProtocol> {
    NSXPCInterface * _exportedInterface;
    id  _exportedObject;
    id /* block */  _interruptionHandler;
    bool  _invalidated;
    id /* block */  _invalidationHandler;
    NSString * _name;
    NSObject<OS_dispatch_queue> * _queue;
    id  _remoteObjectProxy;
    NRMockServerNSXPCConnection * _serverConnection;
    id  _synchronousRemoteObjectProxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSXPCInterface *exportedInterface;
@property (nonatomic, retain) id exportedObject;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, readonly) bool invalidated;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, readonly) int processIdentifier;
@property (nonatomic, readonly, retain) NSString *processName;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSXPCInterface *remoteObjectInterface;
@property (nonatomic, readonly, retain) id remoteObjectProxy;
@property (nonatomic, readonly) NRMockServerNSXPCConnection *serverConnection;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidate;
- (void)_setQueue:(id)arg1;
- (id)exportedInterface;
- (id)exportedObject;
- (id)initWithMachServiceName:(id)arg1 options:(unsigned long long)arg2;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (bool)invalidated;
- (id /* block */)invalidationHandler;
- (int)processIdentifier;
- (id)processName;
- (id)queue;
- (id)remoteObjectInterface;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyAsync:(bool)arg1;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)resume;
- (void)runCompletionBlock:(id /* block */)arg1;
- (id)serverConnection;
- (void)setExportedInterface:(id)arg1;
- (void)setExportedObject:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setRemoteObjectInterface:(id)arg1;
- (void)suspend;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)valueForEntitlement:(id)arg1;

@end
