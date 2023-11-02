
@protocol SUUIJSTabBar <JSExport>

@required

- (SUUIJSTabBarItem *)selectedTab;
- (void)setSelectedTab:(SUUIJSTabBarItem *)arg1;
- (NSArray *)tabs;
- (SUUIJSTabBarItem *)transientTab;

@end
