
@interface BSXPCMessage : NSObject {
    int  _invalidated;
    NSObject<OS_xpc_object> * _message;
    int  _replied;
    id /* block */  _replyHandler;
    NSObject<OS_dispatch_queue> * _replyQueue;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *payload;

+ (id)message:(long long)arg1 withPacker:(id /* block */)arg2;
+ (id)message:(long long)arg1 withPacker:(id /* block */)arg2 replyHandler:(id /* block */)arg3 replyQueue:(id)arg4;
+ (const char *)messageTypeKey;
+ (id)messageWithPacker:(id /* block */)arg1;
+ (id)messageWithPacker:(id /* block */)arg1 replyHandler:(id /* block */)arg2 replyQueue:(id)arg3;
+ (id)messageWithPayload:(id)arg1;
+ (void)sendMessage:(long long)arg1 toConnection:(id)arg2 withMessagePacker:(id /* block */)arg3;
+ (void)sendMessage:(long long)arg1 toConnection:(id)arg2 withMessagePacker:(id /* block */)arg3 replyHandler:(id /* block */)arg4 replyQueue:(id)arg5;
+ (void)sendMessageWithPacker:(id /* block */)arg1 toConnection:(id)arg2;
+ (void)sendMessageWithPacker:(id /* block */)arg1 toConnection:(id)arg2 replyHandler:(id /* block */)arg3 replyQueue:(id)arg4;

- (void).cxx_destruct;
- (id)description;
- (void)forcefullyInvokeReplyHandler:(id)arg1;
- (id)initWithMessage:(long long)arg1 packer:(id /* block */)arg2 replyHandler:(id /* block */)arg3 replyQueue:(id)arg4;
- (id)payload;
- (id)sendSynchronouslyToConnection:(id)arg1 error:(id*)arg2;
- (bool)sendToConnection:(id)arg1;
- (bool)sendToConnection:(id)arg1 replyQueue:(id)arg2 replyHandler:(id /* block */)arg3;

@end
