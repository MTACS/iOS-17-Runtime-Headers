
@interface GTBufferedSendOperation_tools_diagnostics : NSObject {
    GTTransportMessage_tools_diagnostics * _message;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _replyBlock;
    GTTransportMessage_tools_diagnostics * _replyTo;
    unsigned long long  _timeout;
}

@property (nonatomic, retain) GTTransportMessage_tools_diagnostics *message;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) id /* block */ replyBlock;
@property (nonatomic, retain) GTTransportMessage_tools_diagnostics *replyTo;
@property (nonatomic) unsigned long long timeout;

- (void)dealloc;
- (id)message;
- (id)queue;
- (id /* block */)replyBlock;
- (id)replyTo;
- (void)setMessage:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setReplyBlock:(id /* block */)arg1;
- (void)setReplyTo:(id)arg1;
- (void)setTimeout:(unsigned long long)arg1;
- (unsigned long long)timeout;

@end
