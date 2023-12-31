
@protocol UITabBarDelegate <NSObject>

@optional

- (void)tabBar:(UITabBar *)arg1 didBeginCustomizingItems:(NSArray *)arg2;
- (void)tabBar:(UITabBar *)arg1 didEndCustomizingItems:(NSArray *)arg2 changed:(bool)arg3;
- (void)tabBar:(UITabBar *)arg1 didSelectItem:(UITabBarItem *)arg2;
- (void)tabBar:(UITabBar *)arg1 willBeginCustomizingItems:(NSArray *)arg2;
- (void)tabBar:(UITabBar *)arg1 willEndCustomizingItems:(NSArray *)arg2 changed:(bool)arg3;

@end
