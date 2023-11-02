
@protocol GTXPCDispatcher

@required

- (void)dispatchMessage:(NSObject<OS_xpc_object> *)arg1 replyConnection:(id <GTXPCConnection>)arg2;

@end
