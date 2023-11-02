
@interface VUITabBarController : UITabBarController <AMSUIMessageViewControllerDelegate, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate, UITabBarControllerDelegate, VUITVAppRootViewController, VUITabBarChildViewControllerInteraction, VUITabBarProtocol> {
    bool  _hasSetTabBarIndex;
    id /* block */  _longPressHandler;
    unsigned long long  _previousSelectedIndex;
    NSArray * _tabBarItems;
    <VUITabBarControllerUpdatingDelegate> * _updatingDelegate;
}

@property (nonatomic, readonly) UINavigationController *currentNavigationController;
@property (nonatomic, readonly) UIViewController *currentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasSetTabBarIndex;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ longPressHandler;
@property (nonatomic) unsigned long long previousSelectedIndex;
@property (nonatomic) unsigned long long selectedIndex;
@property (readonly) Class superclass;
@property (getter=isTabBarHidden, nonatomic) bool tabBarHidden;
@property (nonatomic, retain) NSArray *tabBarItems;
@property (nonatomic) <VUITabBarControllerUpdatingDelegate> *updatingDelegate;

+ (id)_tabBarImageForResource:(id)arg1;
+ (bool)shouldIgnoreLastSelectedTabIndex;

- (void).cxx_destruct;
- (void)_addAndPresentBubbleTipIfAny:(id)arg1;
- (void)_handleSelectedViewControllerDidChange;
- (void)_saveLastSelectedAndScrollToTop:(id)arg1 selectedIndex:(unsigned long long)arg2 previousSelectedIndex:(unsigned long long)arg3;
- (void)_setSelectedViewController:(id)arg1;
- (id)_tabBarChildViewControllerWithIdentifier:(id)arg1 documentRef:(id)arg2 isNonServerTab:(bool)arg3 title:(id)arg4 isSelectedTab:(bool)arg5 appContext:(id)arg6 iconResource:(id)arg7 contextData:(id)arg8 childItems:(id)arg9 uiConfigDict:(id)arg10;
- (void)_updateTabBarChildViewController:(id)arg1 withTitle:(id)arg2;
- (void)_updateTabbarChildViewController:(id)arg1 withTitle:(id)arg2 iconResource:(id)arg3;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (id)currentNavigationController;
- (id)currentViewController;
- (void)dealloc;
- (bool)hasSetTabBarIndex;
- (unsigned long long)indexForTabBarItemIdentifier:(id)arg1;
- (id)init;
- (bool)isTabBarHidden;
- (id /* block */)longPressHandler;
- (void)messageViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)messageViewController:(id)arg1 didSelectActionWithDialogResult:(id)arg2;
- (void)messageViewController:(id)arg1 didUpdateSize:(struct CGSize { double x1; double x2; })arg2;
- (unsigned long long)previousSelectedIndex;
- (void)removeAllChildViewControllers;
- (void)setHasSetTabBarIndex:(bool)arg1;
- (void)setLongPressHandler:(id /* block */)arg1;
- (void)setPreviousSelectedIndex:(unsigned long long)arg1;
- (void)setSelectedIndexForTabBarItemIdentifier:(id)arg1;
- (void)setTabBarHidden:(bool)arg1;
- (void)setTabBarItems:(id)arg1;
- (void)setUpdatingDelegate:(id)arg1;
- (void)setViewControllers:(id)arg1 animated:(bool)arg2;
- (void)setVuiSelectedIndex:(unsigned long long)arg1;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (unsigned long long)tabBarControllerSupportedInterfaceOrientations:(id)arg1;
- (id)tabBarItems;
- (void)updateWithTabBarItems:(id)arg1 setSelectedIdentifierFromDefaults:(bool)arg2 appContext:(id)arg3;
- (id)updatingDelegate;
- (id)viewControllerWithTabIdentifier:(id)arg1;
- (void)viewDidLoad;

@end
