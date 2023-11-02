
@protocol SPUnknownDiscoveryXPCClientProtocol <NSObject>

@required

- (void)discoveredUnknownAccessory:(SPUnknownBeacon *)arg1;
- (void)lostUnknownAccessory:(SPUnknownBeacon *)arg1;
- (void)unknownAccessoryDiscoveryError:(NSError *)arg1;
- (void)unknownAccessoryDiscoveryFinished;

@end
