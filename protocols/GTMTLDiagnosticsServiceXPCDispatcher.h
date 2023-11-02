
@protocol GTMTLDiagnosticsServiceXPCDispatcher <GTXPCDispatcher>

@required

- (void)deregisterObserver_:(NSObject<OS_xpc_object> *)arg1 replyConnection:(id <GTXPCConnection>)arg2;
- (void)raiseRuntimeIssue_:(NSObject<OS_xpc_object> *)arg1 replyConnection:(id <GTXPCConnection>)arg2;
- (void)registerObserver_:(NSObject<OS_xpc_object> *)arg1 replyConnection:(id <GTXPCConnection>)arg2;

@end
