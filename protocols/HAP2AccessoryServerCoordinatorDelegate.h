
@protocol HAP2AccessoryServerCoordinatorDelegate <NSObject>

@required

- (void)coordinator:(id <HAP2AccessoryServerCoordinator>)arg1 didCreatePairedAccessoryServer:(id <HAP2PairedAccessoryServer>)arg2;
- (void)coordinator:(id <HAP2AccessoryServerCoordinator>)arg1 didCreateUnpairedAccessoryServer:(id <HAP2UnpairedAccessoryServer>)arg2;

@optional

- (void)coordinator:(id <HAP2AccessoryServerCoordinator>)arg1 didLoseAccessory:(HAP2AccessoryServerDiscoveryAccessoryInfo *)arg2 error:(NSError *)arg3;
- (void)coordinator:(id <HAP2AccessoryServerCoordinator>)arg1 didStartDiscoveringWithError:(NSError *)arg2;
- (void)coordinator:(id <HAP2AccessoryServerCoordinator>)arg1 didStopDiscoveringWithError:(NSError *)arg2;

@end
