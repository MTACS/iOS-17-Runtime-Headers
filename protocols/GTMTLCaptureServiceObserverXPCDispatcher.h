
@protocol GTMTLCaptureServiceObserverXPCDispatcher <GTXPCDispatcher>

@required

- (void)notifyCaptureObjectsChanged_:(NSObject<OS_xpc_object> *)arg1 replyConnection:(id <GTXPCConnection>)arg2;
- (void)notifyCaptureProgress_:(NSObject<OS_xpc_object> *)arg1 replyConnection:(id <GTXPCConnection>)arg2;
- (void)notifyCaptureRequest_:(NSObject<OS_xpc_object> *)arg1 replyConnection:(id <GTXPCConnection>)arg2;
- (void)notifyUnsupportedFenum_:(NSObject<OS_xpc_object> *)arg1 replyConnection:(id <GTXPCConnection>)arg2;

@end
