
@protocol CXNetworkExtensionMessageControllerHostConnectionDelegate <NSObject>

@required

- (void)networkExtensionMessageControllerHostConnection:(CXNetworkExtensionMessageControllerHostConnection *)arg1 didReceiveIncomingMessage:(NSDictionary *)arg2 forBundleIdentifier:(NSString *)arg3;
- (void)networkExtensionMessageControllerHostConnection:(CXNetworkExtensionMessageControllerHostConnection *)arg1 didReceiveIncomingPushToTalkMessage:(NSDictionary *)arg2 forBundleIdentifier:(NSString *)arg3;
- (void)networkExtensionMessageControllerHostConnectionInvalidated:(CXNetworkExtensionMessageControllerHostConnection *)arg1;

@end
