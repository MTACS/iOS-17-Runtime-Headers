
@protocol SKUIJSTabBar <JSExport>

@required

- (SKUIJSTabBarItem *)selectedTab;
- (void)setSelectedTab:(SKUIJSTabBarItem *)arg1;
- (NSArray *)tabs;
- (SKUIJSTabBarItem *)transientTab;

@end
