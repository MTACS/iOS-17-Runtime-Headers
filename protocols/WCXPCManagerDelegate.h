
@protocol WCXPCManagerDelegate <WCXPCManagerSharedProtocol>

@required

- (NSString *)currentPairingID;
- (bool)supportsActiveDeviceSwitch;
- (void)xpcConnectionInterrupted;

@end
