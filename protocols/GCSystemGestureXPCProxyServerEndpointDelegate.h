
@protocol GCSystemGestureXPCProxyServerEndpointDelegate

@required

- (void)systemGestureXPCProxyServerEndpoint:(GCSystemGestureXPCProxyServerEndpoint *)arg1 disableSystemGestureForInput:(NSString *)arg2;
- (void)systemGestureXPCProxyServerEndpoint:(GCSystemGestureXPCProxyServerEndpoint *)arg1 enableSystemGestureForInput:(NSString *)arg2;

@end
