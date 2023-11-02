
@interface MTXPCConnectionProvider : NSObject {
    bool  _alive;
    <NAScheduler> * _callbackScheduler;
    NSXPCConnection * _connection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _connectionLock;
    id /* block */  _errorHandler;
    MTXPCConnectionInfo * _info;
    NSDate * _lastLifecycleNotification;
    id /* block */  _reconnectHandler;
}

@property (nonatomic, retain) <NAScheduler> *callbackScheduler;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } connectionLock;
@property (nonatomic, copy) id /* block */ errorHandler;
@property (nonatomic, retain) MTXPCConnectionInfo *info;
@property (nonatomic, retain) NSDate *lastLifecycleNotification;
@property (nonatomic, copy) id /* block */ reconnectHandler;

+ (id)providerWithConnectionInfo:(id)arg1 errorHandler:(id /* block */)arg2;
+ (id)providerWithConnectionInfo:(id)arg1 reconnectHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)_asyncRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)_connectionRebuildingIfNecessary;
- (void)_didInterruptConnection;
- (void)_didInvalidateConnection;
- (id)_remoteObjectProxyWithXPCConnectionProvider:(id /* block */)arg1 remoteObjectProxyProvider:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (id)_retryConnection;
- (void)_retryConnectionWithRecover:(bool)arg1;
- (id)_syncRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)callbackScheduler;
- (id)connection;
- (struct os_unfair_lock_s { unsigned int x1; })connectionLock;
- (void)dealloc;
- (id)description;
- (void)didReceiveLifecycleNotification;
- (id /* block */)errorHandler;
- (id)info;
- (id)initWithConnectionInfo:(id)arg1 errorHandler:(id /* block */)arg2 reconnectHandler:(id /* block */)arg3;
- (void)invalidate;
- (id)lastLifecycleNotification;
- (void)performRemoteBlock:(id /* block */)arg1;
- (void)performRemoteBlock:(id /* block */)arg1 withErrorHandler:(id /* block */)arg2;
- (void)performRemoteBlock:(id /* block */)arg1 withErrorHandler:(id /* block */)arg2 isSynchronous:(bool)arg3;
- (id /* block */)reconnectHandler;
- (void)setCallbackScheduler:(id)arg1;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setInfo:(id)arg1;
- (void)setLastLifecycleNotification:(id)arg1;
- (void)setReconnectHandler:(id /* block */)arg1;

@end
