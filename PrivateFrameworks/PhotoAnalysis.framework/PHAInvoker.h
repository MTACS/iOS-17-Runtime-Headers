
@interface PHAInvoker : NSObject <NSXPCConnectionDelegate> {
    <PHAInvokerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(bool)arg3;
- (void)handleInvocation:(id)arg1 withTarget:(id)arg2 service:(id)arg3;
- (id)initWithDelegate:(id)arg1;

@end
