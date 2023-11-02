
@interface NFCSession : NSObject {
    NSXPCConnection * _connection;
    NSLock * _connectionLock;
    <NFCSessionCallbacks> * _delegate;
    id  _exportedObject;
    NSXPCInterface * _exportedObjectInterface;
    NSString * _machServiceName;
    NSXPCInterface * _remoteObjectInterface;
    NSObject<OS_dispatch_queue> * _xpcQueue;
}

- (void).cxx_destruct;
- (bool)_connectIfNeeded;
- (id)_connection;
- (id)_connectionLock;
- (id)_exportedObjectClassName;
- (void)_invalidate;
- (void)_setConnection:(id)arg1;
- (void)dealloc;
- (id)initWithMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObjectInterface:(id)arg3 exportedObject:(id)arg4 delegate:(id)arg5;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end
