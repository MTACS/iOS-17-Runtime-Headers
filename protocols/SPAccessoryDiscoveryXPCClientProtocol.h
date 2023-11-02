
@protocol SPAccessoryDiscoveryXPCClientProtocol <NSObject>

@required

- (void)accessoryDiscoveryError:(NSError *)arg1;
- (void)discoveredAccessory:(SPDiscoveredAccessory *)arg1;
- (void)lostAccessory:(SPDiscoveredAccessory *)arg1;

@end
