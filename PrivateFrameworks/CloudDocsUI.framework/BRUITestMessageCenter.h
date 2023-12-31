
@interface BRUITestMessageCenter : NSObject {
    bool  _isSender;
    NSMutableDictionary * _messageHandlers;
    NSObject<OS_dispatch_queue> * _messageQueue;
    NSMutableDictionary * _pendingReplies;
    bool  _started;
}

+ (id)defaultCenter;

- (void).cxx_destruct;
- (id)_init;
- (void)_sendMessageNamed:(id)arg1 userInfo:(id)arg2 isReply:(bool)arg3 messageUUID:(id)arg4 reply:(id /* block */)arg5;
- (void)didReceiveMessage:(id)arg1;
- (id)init;
- (void)sendMessageNamed:(id)arg1 userInfo:(id)arg2 reply:(id /* block */)arg3;
- (void)setHandler:(id)arg1 forMessageNamed:(id)arg2;
- (void)startReceiver;
- (void)startSender;
- (void)stop;

@end
