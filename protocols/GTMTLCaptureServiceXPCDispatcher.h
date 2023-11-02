
@protocol GTMTLCaptureServiceXPCDispatcher <GTXPCDispatcher>

@required

- (void)deregisterObserver_:(NSObject<OS_xpc_object> *)arg1 replyConnection:(id <GTXPCConnection>)arg2;
- (void)nextRequestID:(NSObject<OS_xpc_object> *)arg1 replyConnection:(id <GTXPCConnection>)arg2;
- (void)query_:(NSObject<OS_xpc_object> *)arg1 replyConnection:(id <GTXPCConnection>)arg2;
- (void)registerObserver_:(NSObject<OS_xpc_object> *)arg1 replyConnection:(id <GTXPCConnection>)arg2;
- (void)startWithDescriptor_completionHandler_:(NSObject<OS_xpc_object> *)arg1 replyConnection:(id <GTXPCConnection>)arg2;
- (void)stop:(NSObject<OS_xpc_object> *)arg1 replyConnection:(id <GTXPCConnection>)arg2;
- (void)update_:(NSObject<OS_xpc_object> *)arg1 replyConnection:(id <GTXPCConnection>)arg2;

@end
