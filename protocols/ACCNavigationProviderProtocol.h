
@protocol ACCNavigationProviderProtocol <NSObject>

@required

- (void)navigation:(ACCNavigationProvider *)arg1 accessoryAttached:(ACCNavigationAccessory *)arg2;
- (void)navigation:(ACCNavigationProvider *)arg1 accessoryDetached:(ACCNavigationAccessory *)arg2;
- (void)navigation:(ACCNavigationProvider *)arg1 startRouteGuidance:(ACCNavigationAccessory *)arg2 componentList:(NSArray *)arg3;
- (void)navigation:(ACCNavigationProvider *)arg1 stopRouteGuidance:(ACCNavigationAccessory *)arg2 componentList:(NSArray *)arg3;

@end
