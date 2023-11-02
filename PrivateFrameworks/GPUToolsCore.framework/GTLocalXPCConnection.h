
@interface GTLocalXPCConnection : NSObject <GTXPCConnection> {
    NSObject<OS_xpc_object> * _connection;
    NSMutableDictionary * _dispatchers;
    NSObject<OS_xpc_object> * _error;
    NSObject<OS_dispatch_queue> * _messageQueue;
    NSObject<OS_os_transaction> * _transaction;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *connection;
@property (nonatomic, retain) NSObject<OS_xpc_object> *error;

- (void).cxx_destruct;
- (void)activateWithMessageHandler:(id /* block */)arg1 andErrorHandler:(id /* block */)arg2;
- (void)cancel;
- (id)connection;
- (void)deregisterDispatcher:(unsigned long long)arg1;
- (void)dispatchMessage:(id)arg1;
- (id)error;
- (id)initWithTransactionScopedXPCConnection:(id)arg1 messageQueue:(id)arg2;
- (id)initWithXPCConnection:(id)arg1 messageQueue:(id)arg2;
- (unsigned long long)registerDispatcher:(id)arg1;
- (void)registerDispatcher:(id)arg1 forPort:(unsigned long long)arg2;
- (void)sendMessage:(id)arg1;
- (void)sendMessage:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)sendMessageAndWaitForDelivery:(id)arg1;
- (id)sendMessageWithReplySync:(id)arg1;
- (id)sendMessageWithReplySync:(id)arg1 error:(id*)arg2;
- (void)setError:(id)arg1;

@end
