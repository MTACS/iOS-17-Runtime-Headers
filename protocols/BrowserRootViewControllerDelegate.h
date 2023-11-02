
@protocol BrowserRootViewControllerDelegate <NSObject>

@required

- (double)browserViewController:(BrowserRootViewController *)arg1 adjustedBottomContentInset:(double)arg2;
- (double)browserViewController:(BrowserRootViewController *)arg1 adjustedBottomObscuredInset:(double)arg2;
- (double)browserViewController:(BrowserRootViewController *)arg1 adjustedTopObscuredInsetForBanners:(double)arg2;
- (void)browserViewController:(BrowserRootViewController *)arg1 didCreateNavigationBar:(NavigationBar *)arg2;
- (void)browserViewController:(BrowserRootViewController *)arg1 didCreateToolbar:(BrowserToolbar *)arg2;
- (void)browserViewController:(BrowserRootViewController *)arg1 didCreateUnifiedBar:(UnifiedBar *)arg2;
- (long long)browserViewController:(BrowserRootViewController *)arg1 toolbarPlacementForViewSize:(struct CGSize { double x1; double x2; })arg2;
- (double)browserViewControllerAdditionalContentHeightForBanners:(BrowserRootViewController *)arg1;
- (void)browserViewControllerDidChangeToolbarPlacement:(BrowserRootViewController *)arg1;
- (void)browserViewControllerDidLayOutSubviews:(BrowserRootViewController *)arg1;
- (bool)browserViewControllerInterfaceFillsScreen:(BrowserRootViewController *)arg1;
- (bool)browserViewControllerShouldFreezeWebViewUpdatesForSizeTransition:(BrowserRootViewController *)arg1;
- (bool)browserViewControllerShouldTemporarilyHideBottomToolbar:(BrowserRootViewController *)arg1;

@optional

- (void)browserViewController:(BrowserRootViewController *)arg1 didChangeShowingSidebar:(bool)arg2;
- (void)browserViewController:(BrowserRootViewController *)arg1 didChangeSidebarStyle:(long long)arg2;
- (void)browserViewController:(BrowserRootViewController *)arg1 didUpdateBannerTheme:(SFBannerTheme *)arg2;
- (long long)browserViewController:(BrowserRootViewController *)arg1 sidebarStyleForViewSize:(struct CGSize { double x1; double x2; })arg2;
- (void)browserViewController:(BrowserRootViewController *)arg1 traitCollectionDidChange:(UITraitCollection *)arg2;
- (void)browserViewControllerDidChangeBarInsets:(BrowserRootViewController *)arg1;
- (void)browserViewControllerDidChangeMaximumObscuredInsets:(BrowserRootViewController *)arg1;
- (ContinuousReadingViewController *)continuousReadingViewControllerForBrowserViewController:(BrowserRootViewController *)arg1;

@end
