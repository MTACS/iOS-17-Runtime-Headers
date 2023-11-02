
@interface AXIPCDelayedMessage : NSObject {
    id /* block */  _completion;
    AXIPCMessage * _message;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) AXIPCMessage *message;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)initWithMessage:(id)arg1 completion:(id /* block */)arg2;
- (id)message;
- (void)setCompletion:(id /* block */)arg1;
- (void)setMessage:(id)arg1;

@end
