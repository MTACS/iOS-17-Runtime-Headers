
@protocol WBSUnifiedBarAnalyticsProviding <NSObject>

@required

- (bool)backgroundColorInTabBarEnabled;
- (unsigned long long)numberOfTabsInCurrentTabBar;
- (bool)shouldReportUnifiedTabBarAnalytics;
- (bool)tabBarIsCurrentlyScrollable;
- (bool)tabsShowOnlyIcons;
- (long long)unifiedTabBarLayoutStyle;

@end
