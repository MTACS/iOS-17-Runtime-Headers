
@protocol _IKJSTabBar <IKJSTabBar, JSExport>

@required

- (IKJSTabBarItem *)selectedTab;
- (void)setSelectedTab:(IKJSTabBarItem *)arg1;
- (void)setTabs:(NSArray *)arg1;
- (NSArray *)tabs;

@end
