
@protocol RPPrivateDiscoveryXPCClientInterface

@required

- (void)xpcPrivateDiscoveryEndpointChanged:(RPEndpoint *)arg1;
- (void)xpcPrivateDiscoveryEndpointFound:(RPEndpoint *)arg1;
- (void)xpcPrivateDiscoveryEndpointLost:(RPEndpoint *)arg1;

@end
