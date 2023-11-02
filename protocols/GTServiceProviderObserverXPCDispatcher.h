
@protocol GTServiceProviderObserverXPCDispatcher <GTXPCDispatcher>

@required

- (void)notifyServiceListChanged_:(NSObject<OS_xpc_object> *)arg1 replyConnection:(id <GTXPCConnection>)arg2;

@end
