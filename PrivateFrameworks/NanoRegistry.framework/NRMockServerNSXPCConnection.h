
@interface NRMockServerNSXPCConnection : NSObject <NRNSXPCConnectionProtocol> {
    NRMockClientNSXPCConnection * _clientConnection;
    NSXPCInterface * _exportedInterface;
    id  _exportedObject;
    id /* block */  _interruptionHandler;
    bool  _invalidated;
    id /* block */  _invalidationHandler;
    NRMockNSXPCListener * _listener;
    NSObject<OS_dispatch_queue> * _queue;
    id  _remoteObjectProxy;
    id  _synchronousRemoteObjectProxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSXPCInterface *exportedInterface;
@property (nonatomic, retain) id exportedObject;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, readonly) int processIdentifier;
@property (nonatomic, readonly, retain) NSString *processName;
@property (nonatomic, retain) NSXPCInterface *remoteObjectInterface;
@property (nonatomic, readonly, retain) id remoteObjectProxy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setQueue:(id)arg1;
- (void)dealloc;
- (id)exportedInterface;
- (id)exportedObject;
- (id)initWithListener:(id)arg1 clientConnection:(id)arg2;
- (id)initWithMachServiceName:(id)arg1 options:(unsigned long long)arg2;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (int)processIdentifier;
- (id)processName;
- (id)remoteObjectInterface;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyAsync:(bool)arg1;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)resume;
- (void)runCompletionBlock:(id /* block */)arg1;
- (void)setExportedInterface:(id)arg1;
- (void)setExportedObject:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setRemoteObjectInterface:(id)arg1;
- (void)suspend;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)valueForEntitlement:(id)arg1;

@end
