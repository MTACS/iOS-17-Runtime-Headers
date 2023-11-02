
@interface ARServerConnection : NSObject <NSXPCProxyCreating> {
    NSXPCConnection * _connection;
    id /* block */  _connectionCreationBlock;
    <ARServerConnectionDelegate> * _delegate;
    NSXPCInterface * _exportedInterface;
    ARWeakReference * _exportedObjectWeakReference;
    NSXPCListenerEndpoint * _listenerEndpoint;
    NSXPCInterface * _remoteObjectInterface;
}

@property (nonatomic, readonly) NSXPCConnection *connection;
@property (nonatomic) <ARServerConnectionDelegate> *delegate;
@property (nonatomic, retain) NSXPCInterface *exportedInterface;
@property (nonatomic) id exportedObject;
@property (nonatomic, retain) NSXPCListenerEndpoint *listenerEndpoint;
@property (nonatomic, retain) NSXPCInterface *remoteObjectInterface;

- (void).cxx_destruct;
- (id)connection;
- (void)dealloc;
- (id)delegate;
- (id)exportedInterface;
- (id)exportedObject;
- (id)initWithListenerEndpoint:(id)arg1;
- (id)initWithServiceName:(id)arg1;
- (id)initWithServiceName:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithServiceName:(id)arg1 options:(unsigned long long)arg2 queue:(id)arg3;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)listenerEndpoint;
- (id)remoteObjectInterface;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)serverConnectionInterrupted;
- (void)serverConnectionInvalidated;
- (void)setDelegate:(id)arg1;
- (void)setExportedInterface:(id)arg1;
- (void)setExportedObject:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setListenerEndpoint:(id)arg1;
- (void)setRemoteObjectInterface:(id)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end
