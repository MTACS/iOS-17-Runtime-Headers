
@protocol HUConfiguratorDelegate <NSObject>

@required

- (void)configuratorDidFinish:(HUConfigurator *)arg1;
- (void)configuratorDidUpdateViewController:(HUConfigurator *)arg1;

@end
