
@protocol _RWIRelayConnectionToApplicationDelegate <NSObject>

@required

- (void)xpcConnection:(_RWIRelayConnectionToApplication *)arg1 receivedMessage:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
- (void)xpcConnectionFailed:(_RWIRelayConnectionToApplication *)arg1;

@optional

- (void)xpcConnection:(_RWIRelayConnectionToApplication *)arg1 unhandledMessage:(NSObject<OS_xpc_object> *)arg2;

@end
