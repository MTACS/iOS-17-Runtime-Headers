
@protocol XPCServiceListenerDelegate <NSObject>

@required

- (void)XPCServiceListener:(XPCServiceListener *)arg1 didReceiveNewConnection:(XPCServiceConnection *)arg2;

@optional

- (bool)XPCServiceListener:(XPCServiceListener *)arg1 shouldAcceptNewConnection:(NSObject<OS_xpc_object> *)arg2;

@end