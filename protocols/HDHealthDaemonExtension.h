
@protocol HDHealthDaemonExtension <NSObject>

@optional

- (bool)daemonDidReceiveNotification:(const char *)arg1;
- (NSXPCListenerEndpoint *)listenerEndpointForClient:(HDXPCClient *)arg1 error:(id*)arg2;

@end
