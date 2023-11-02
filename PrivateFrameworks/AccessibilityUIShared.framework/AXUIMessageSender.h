
@interface AXUIMessageSender : NSObject {
    <AXUIMessageSenderDelegate> * _delegate;
    NSMutableArray * _messageQueue;
    AXAccessQueue * _messageSchedulingSerializationQueue;
    bool  _sendingMessage;
}

@property (nonatomic) <AXUIMessageSenderDelegate> *delegate;
@property (nonatomic, retain) NSMutableArray *messageQueue;
@property (nonatomic, retain) AXAccessQueue *messageSchedulingSerializationQueue;
@property (getter=isSendingMessage, nonatomic) bool sendingMessage;

- (void).cxx_destruct;
- (void)_didFinishSendingXPCMessage:(id)arg1 replyCustomData:(void*)arg2;
- (void)_performBlock:(id /* block */)arg1 inAccessQueue:(id)arg2 treatAsWritingBlock:(bool)arg3;
- (void)_sendLaunchAngelMessage:(id)arg1 context:(void*)arg2 remainingAttempts:(unsigned long long)arg3 previousError:(id)arg4 completion:(id /* block */)arg5;
- (void)_sendXPCMessage:(id)arg1 context:(void*)arg2 remainingAttempts:(unsigned long long)arg3 previousError:(id)arg4 completion:(id /* block */)arg5;
- (id)delegate;
- (id)init;
- (bool)isSendingMessage;
- (id)messageQueue;
- (id)messageSchedulingSerializationQueue;
- (void)sendAsynchronousMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 context:(void*)arg3 targetAccessQueue:(id)arg4 completionRequiresWritingBlock:(bool)arg5 completion:(id /* block */)arg6;
- (id)sendSynchronousMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 context:(void*)arg3 error:(id*)arg4;
- (void)setDelegate:(id)arg1;
- (void)setMessageQueue:(id)arg1;
- (void)setMessageSchedulingSerializationQueue:(id)arg1;
- (void)setSendingMessage:(bool)arg1;

@end
