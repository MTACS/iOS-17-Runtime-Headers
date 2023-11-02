
@protocol PXTabBarItemKeyCommandDelegate <NSObject>

@required

- (NSString *)localizedDiscoverabilityTitleForTabBarItem:(UITabBarItem *)arg1 atIndex:(unsigned long long)arg2;
- (bool)shouldExposeShortcutForTabBarItem:(UITabBarItem *)arg1 atIndex:(unsigned long long)arg2;

@end
