
@interface SSXPCConnection : NSObject {
    NSObject<OS_xpc_object> * _connection;
    id /* block */  _disconnectBlock;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _messageBlock;
    NSObject<OS_dispatch_queue> * _replyQueue;
}

@property (copy) id /* block */ disconnectBlock;
@property (copy) id /* block */ messageBlock;

- (id)_initSSXPCConnection;
- (void)_reloadEventHandler;
- (id)copyReplyQueue;
- (id)createXPCEndpoint;
- (void)dealloc;
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
- (void)setReplyQueue:(id)arg1;

@end
