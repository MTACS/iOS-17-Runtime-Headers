
@protocol GTMTLDiagnosticsServiceObserverXPCDispatcher <GTXPCDispatcher>

@required

- (void)notifyCommandBufferIssue_:(NSObject<OS_xpc_object> *)arg1 replyConnection:(id <GTXPCConnection>)arg2;
- (void)notifyDiagnosticsIssue_:(NSObject<OS_xpc_object> *)arg1 replyConnection:(id <GTXPCConnection>)arg2;

@end
