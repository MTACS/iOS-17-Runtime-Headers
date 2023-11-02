
@interface DMXPCConnection : NSObject {
    NSObject<OS_xpc_object> * _connection;
    id /* block */  _interruptionHandler;
    id /* block */  _invalidationHandler;
    id /* block */  _messageHandler;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_queue> * _replyQueue;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *connection;
@property (copy) id /* block */ interruptionHandler;
@property (copy) id /* block */ invalidationHandler;
@property (copy) id /* block */ messageHandler;

- (void).cxx_destruct;
- (void)_handleMessage:(id)arg1;
- (id)connection;
- (void)handleMessage:(id)arg1;
- (bool)hasEntitlement:(id)arg1;
- (id)initWithConnection:(id)arg1;
- (id)initWithServiceName:(id)arg1;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id /* block */)messageHandler;
- (void)resume;
- (void)sendMessage:(id)arg1 replyHandler:(id /* block */)arg2;
- (id)sendMessageSync:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setMessageHandler:(id /* block */)arg1;
- (void)targetForegroundUserSessionIfNecessary;

@end
