
@interface WAQueuedInvocation : NSObject {
    NSInvocation * _invocation;
    id /* block */  _reply;
}

@property (nonatomic, retain) NSInvocation *invocation;
@property (nonatomic, copy) id /* block */ reply;

- (void).cxx_destruct;
- (id)invocation;
- (id /* block */)reply;
- (void)setInvocation:(id)arg1;
- (void)setReply:(id /* block */)arg1;

@end
