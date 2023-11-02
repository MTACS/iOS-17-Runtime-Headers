
@protocol GTRemoteDeviceBrowserObserverXPCDispatcher <GTXPCDispatcher>

@required

- (void)notifyDeviceListChanged_:(NSObject<OS_xpc_object> *)arg1 replyConnection:(id <GTXPCConnection>)arg2;

@end
