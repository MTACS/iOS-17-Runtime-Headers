
@protocol SFUnifiedTabBarItemTitleThemeProviding <NSObject>

@optional

- (SFUnifiedTabBarItemTitleContainerViewTheme *)activeTabTitleTheme;
- (SFUnifiedTabBarItemTitleContainerViewTheme *)tabTitleTheme;
- (SFUnifiedTabBarItemTitleContainerViewTheme *)titleTheme;

@end
