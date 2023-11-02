
@interface IRServerConnection : NSObject {
    NSXPCConnection * _connection;
    id  _exportedObject;
    NSObject<OS_dispatch_queue> * _queue;
    NSUUID * _sessionID;
}

@property (readonly) id exportedObject;
@property (copy) id /* block */ interruptionHandler;
@property (copy) id /* block */ invalidationHandler;
@property (readonly) NSUUID *sessionID;

- (void).cxx_destruct;
- (void)dealloc;
- (id)exportedObject;
- (id)initWithSessionID:(id)arg1 queue:(id)arg2 exportedObject:(id)arg3;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)remoteObjectProxy;
- (void)resume;
- (id)sessionID;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;

@end
