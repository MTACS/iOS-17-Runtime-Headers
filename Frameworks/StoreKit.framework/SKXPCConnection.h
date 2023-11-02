
@interface SKXPCConnection : NSObject {
    NSObject<OS_xpc_object> * _connection;
    id /* block */  _disconnectBlock;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _messageBlock;
}

@property (copy) id /* block */ disconnectBlock;
@property (copy) id /* block */ messageBlock;

- (void).cxx_destruct;
- (id)_initSKXPCConnection;
- (void)_reloadEventHandler;
- (id)createXPCEndpoint;
- (id /* block */)disconnectBlock;
- (id)init;
- (id)initWithServiceName:(id)arg1;
- (id)initWithXPCConnection:(id)arg1;
- (id /* block */)messageBlock;
- (void)sendMessage:(id)arg1;
- (void)sendMessage:(id)arg1 withReply:(id /* block */)arg2;
- (void)sendSynchronousMessage:(id)arg1 withReply:(id /* block */)arg2;
- (void)setDisconnectBlock:(id /* block */)arg1;
- (void)setMessageBlock:(id /* block */)arg1;

@end
