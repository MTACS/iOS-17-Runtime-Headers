
@interface SFQueueingServiceViewControllerProxy : NSProxy {
    <SFQueueingServiceViewControllerProxyDelegate> * _delegate;
    Protocol * _protocol;
    NSMutableArray * _queuedInvocations;
    id  _target;
}

@property (nonatomic) <SFQueueingServiceViewControllerProxyDelegate> *delegate;
@property (nonatomic, retain) id target;

- (void).cxx_destruct;
- (id)delegate;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithProtocol:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
