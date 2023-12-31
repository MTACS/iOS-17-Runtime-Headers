
@interface MSXPCConnection : NSXPCConnection {
    EFPromise * _connectionPromise;
    NSXPCInterface * _exportedInterface;
    id  _exportedObject;
    id /* block */  _interruptionHandler;
    id /* block */  _invalidationHandler;
    _Atomic bool  _locallyInvalidated;
    NSLock * _lock;
    Protocol * _protocol;
    NSObject<OS_dispatch_queue> * _queue;
    NSXPCInterface * _remoteObjectInterface;
    long long  _resumeCount;
    bool  _shouldLaunchMobileMail;
}

@property (nonatomic, readonly, retain) Protocol *protocol;
@property (nonatomic) bool shouldLaunchMobileMail;

- (void).cxx_destruct;
- (id)_connection;
- (id)_connectionForPromise:(id)arg1;
- (void)_finishPromise:(id)arg1 withConnection:(id)arg2 error:(id)arg3;
- (void)_invalidatePromise:(id)arg1;
- (void)_invokeInterruptionHandlerForPromise:(id)arg1;
- (id /* block */)_nts_wrappedInterruptionHandler;
- (void)_queue_invokeInvalidationHandler;
- (void)_sendInvocation:(id)arg1 remoteInterface:(id)arg2 remoteProxy:(id)arg3 errorHandler:(id /* block */)arg4;
- (int)auditSessionIdentifier;
- (void)dealloc;
- (id)description;
- (unsigned int)effectiveGroupIdentifier;
- (unsigned int)effectiveUserIdentifier;
- (id)exportedInterface;
- (id)exportedObject;
- (id)initWithProtocol:(id)arg1;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (int)processIdentifier;
- (id)protocol;
- (id)remoteObjectInterface;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)resume;
- (void)setExportedInterface:(id)arg1;
- (void)setExportedObject:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setRemoteObjectInterface:(id)arg1;
- (void)setShouldLaunchMobileMail:(bool)arg1;
- (bool)shouldLaunchMobileMail;
- (void)suspend;

@end
