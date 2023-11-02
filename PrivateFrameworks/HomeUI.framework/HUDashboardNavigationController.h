
@interface HUDashboardNavigationController : UINavigationController <HUDashboardFilterBarDelegate, HUDashboardNavigationBarDelegate, HUEditActionDelegate, HUVendsDashboardNavigator> {
    UINavigationBar * _displayedNavigationBar;
    HUDashboardFilterBarController * _filterBarController;
}

@property (nonatomic, readonly) <HUDashboardNavigator> *dashboardNavigator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UINavigationBar *displayedNavigationBar;
@property (nonatomic, readonly) NSString *editActionTitle;
@property (nonatomic, readonly) NSString *editActionTitleLocalizationKey;
@property (nonatomic, readonly) HUDashboardFilterBarController *filterBarController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsEditing;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_customAnimationForHomeVCToDetailVC:(id)arg1 detailVCWallpaper:(id)arg2;
- (void)_customAnimationForPoppingBackToHomeVCWithHomeVCWallpaper:(id)arg1;
- (id)_editActionDelegate;
- (id)_loadWallpaperForViewController:(id)arg1;
- (bool)_shouldDisableAnimationForViewController:(id)arg1;
- (id)_targetNavigationBarForUISplitViewControllerSidebarButton;
- (id)childViewControllerForStatusBarStyle;
- (void)dashboardFilterBarController:(id)arg1 didUpdatePreferredHeight:(double)arg2;
- (id)dashboardNavigator;
- (id)displayedNavigationBar;
- (id)editActionTitle;
- (id)editActionTitleLocalizationKey;
- (void)endEditing;
- (id)filterBarController;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (void)navigationBar:(id)arg1 didChangeBackgroundVisibility:(bool)arg2;
- (void)navigationBar:(id)arg1 didPushItem:(id)arg2;
- (bool)navigationBar:(id)arg1 shouldPopItem:(id)arg2;
- (bool)navigationBar:(id)arg1 shouldPushItem:(id)arg2;
- (bool)popToBottomNavigationControllerWithCustomAnimation;
- (long long)preferredStatusBarStyle;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (void)sendContextMenuMetricsWithTitleLocalizationKey:(id)arg1;
- (void)setDisplayedNavigationBar:(id)arg1;
- (id)splitViewController;
- (void)startEditing;
- (bool)supportsEditing;
- (void)viewLayoutMarginsDidChange;

@end
