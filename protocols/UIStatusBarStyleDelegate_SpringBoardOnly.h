
@protocol UIStatusBarStyleDelegate_SpringBoardOnly <UIStatusBarStyleDelegate>

@optional

- (long long)overriddenRequestedStyleFromStyle:(long long)arg1;
- (unsigned long long)statusBar:(UIStatusBar_Base *)arg1 effectiveStyleOverridesForRequestedStyle:(long long)arg2 overrides:(unsigned long long)arg3;
- (bool)statusBarShouldDisableRegionActions:(UIStatusBar_Base *)arg1;

@end
