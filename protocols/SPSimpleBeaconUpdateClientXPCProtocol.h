
@protocol SPSimpleBeaconUpdateClientXPCProtocol <NSObject>

@required

- (void)receivedSimpleBeaconRemovals:(NSArray *)arg1;
- (void)receivedSimpleBeaconUpdates:(NSArray *)arg1;

@end
