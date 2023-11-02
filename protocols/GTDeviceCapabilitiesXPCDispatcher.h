
@protocol GTDeviceCapabilitiesXPCDispatcher <GTXPCDispatcher>

@required

- (void)daemonDeviceCapabilities:(NSObject<OS_xpc_object> *)arg1 replyConnection:(id <GTXPCConnection>)arg2;
- (void)gpuToolsVersionQuery:(NSObject<OS_xpc_object> *)arg1 replyConnection:(id <GTXPCConnection>)arg2;
- (void)inferiorEnvironment_:(NSObject<OS_xpc_object> *)arg1 replyConnection:(id <GTXPCConnection>)arg2;

@end
