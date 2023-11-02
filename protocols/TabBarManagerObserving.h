
@protocol TabBarManagerObserving <NSObject>

@optional

- (void)tabBarManager:(TabBarManager *)arg1 didCreateTabBar:(UnifiedTabBar *)arg2;
- (void)tabBarManagerDidUpdateDisplayMode:(TabBarManager *)arg1;

@end
