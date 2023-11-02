
@interface VideosUI.RootSplitViewController : UISplitViewController <AMSUIMessageViewControllerDelegate, UIPopoverPresentationControllerDelegate, UISplitViewControllerDelegate, UISplitViewControllerDelegatePrivate, VUIRootSplitViewController, VUITVAppNavigationControllerObserver, VUITVAppRootViewController> {
    void $__lazy_storage_$_sideBarController;
    void $__lazy_storage_$_splitTabBarController;
    void accountMessageViewController;
    void accountMessageViewModel;
    void appContext;
    void controllerMap;
    void defaultSectionManager;
    void hasDroppedOnTab;
    void hasHandledFirstSelectionFromLaunch;
    void hasSelectedSidebarOnce;
    void isSidebarDisabled;
    void lastSelectedIdentifier;
    void lastSelectedIdentifierInSectionMap;
    void libraryManager;
    void libraryOnly;
    void libraryTitle;
    void memoryPressureNotificationSource;
    void mode;
    void needsModeEvaluationOnDidAppear;
    void presentedTipViewController;
    void previousIndex;
    void rootControllerConfig;
    void secondaryColumnHostingController;
    void selectedIndex;
    void sideBarOnlyItemIdentifiers;
    void sideBarSections;
    void sidebarOpeningInProgress;
    void stagedLibrarySidebarItems;
    void stagedMode;
    void tabBarItems;
    void tipPlacementId;
    void tipPlacementSideBarItemIdentifier;
    void tipPlacementTabBarItemIndex;
    void tvTitle;
    void userHasHiddenSidebar;
    void viewIsVisible;
    void waitingForPresentationDismissal;
}

@property (nonatomic, readonly) UINavigationController *currentNavigationController;
@property (nonatomic, readonly) UIViewController *currentViewController;
@property (nonatomic) long long preferredDisplayMode;

- (void).cxx_destruct;
- (void)_splitViewController:(id)arg1 didChangeFromDisplayMode:(long long)arg2 toDisplayMode:(long long)arg3;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (bool)controllerExistsForIdentifier:(id)arg1;
- (id)controllerForIdentifier:(id)arg1;
- (id)currentNavigationController;
- (id)currentViewController;
- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (bool)isTabbarMode;
- (void)messageViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)messageViewController:(id)arg1 didSelectActionWithDialogResult:(id)arg2;
- (void)messageViewController:(id)arg1 didUpdateSize:(struct CGSize { double x1; double x2; })arg2;
- (void)numberOfChildControllersDidChangeFor:(id)arg1 from:(long long)arg2 to:(long long)arg3;
- (long long)preferredDisplayMode;
- (void)setPreferredDisplayMode:(long long)arg1;
- (void)setSelectedIndexForIdentifier:(id)arg1 withDeeplinkURL:(id)arg2;
- (void)splitViewController:(id)arg1 willChangeToDisplayMode:(long long)arg2;
- (void)updateWithBarItems:(id)arg1 setSelectedIdentifierFromDefaults:(bool)arg2 appContext:(id)arg3;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willEnterForeground:(id)arg1;

@end
