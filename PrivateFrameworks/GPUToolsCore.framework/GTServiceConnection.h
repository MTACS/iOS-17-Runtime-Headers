
@interface GTServiceConnection : NSObject <GTXPCConnection> {
    <GTXPCConnection> * _connection;
    NSString * _deviceUDID;
    unsigned long long  _servicePort;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *connection;
@property (readonly) NSString *deviceUDID;
@property (nonatomic, retain) NSObject<OS_xpc_object> *error;

- (void).cxx_destruct;
- (void)_setRoutingPropertiesForMessage:(id)arg1;
- (void)_setRoutingPropertiesForMessage:(id)arg1 withReplyStreamId:(unsigned long long)arg2;
- (void)activateWithMessageHandler:(id /* block */)arg1 andErrorHandler:(id /* block */)arg2;
- (void)cancel;
- (id)connection;
- (void)deregisterDispatcher:(unsigned long long)arg1;
- (id)deviceUDID;
- (void)dispatchMessage:(id)arg1;
- (id)error;
- (id)initWithConnection:(id)arg1 device:(id)arg2 port:(unsigned long long)arg3;
- (unsigned long long)registerDispatcher:(id)arg1;
- (void)registerDispatcher:(id)arg1 forPort:(unsigned long long)arg2;
- (void)sendMessage:(id)arg1;
- (void)sendMessage:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)sendMessage:(id)arg1 withReplyStreamId:(unsigned long long)arg2;
- (void)sendMessage:(id)arg1 withReplyStreamId:(unsigned long long)arg2 replyHandler:(id /* block */)arg3;
- (void)sendMessageAndWaitForDelivery:(id)arg1;
- (id)sendMessageWithReplySync:(id)arg1 error:(id*)arg2;
- (id)sendMessageWithReplySync:(id)arg1 replyStreamId:(unsigned long long)arg2 error:(id*)arg3;
- (void)setError:(id)arg1;

@end
