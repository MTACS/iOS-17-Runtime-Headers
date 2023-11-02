
@protocol HAP2AccessoryServerCoordinator <NSObject>

@required

- (<HAP2AccessoryServerCoordinatorDelegate> *)delegate;
- (bool)isDiscovering;
- (void)setDelegate:(id <HAP2AccessoryServerCoordinatorDelegate>)arg1;
- (void)startDiscovering;
- (void)stopDiscovering;

@end
