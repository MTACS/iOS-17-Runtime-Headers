
@interface TeaUI.CardSplitViewController : UISplitViewController <UISplitViewControllerDelegate> {
    void commands;
    void eventManager;
    void preservedItems;
    void primaryCardContainerController;
    void splitViewFocus;
}

@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarStyle;
@property (nonatomic, readonly) NSArray *keyCommands;
@property (nonatomic, copy) NSArray *viewControllers;

- (void).cxx_destruct;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)dismissalTransitionDidEndWithNotification:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (id)keyCommands;
- (void)loadView;
- (void)presentationTransitionDidEndWithNotification:(id)arg1;
- (void)setViewControllers:(id)arg1;
- (bool)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3;
- (id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2;
- (bool)splitViewController:(id)arg1 showDetailViewController:(id)arg2 sender:(id)arg3;
- (bool)splitViewController:(id)arg1 showViewController:(id)arg2 sender:(id)arg3;
- (void)splitViewController:(id)arg1 willChangeToDisplayMode:(long long)arg2;
- (void)toggleResponderPane;
- (void)toggleSideBarVisibility;
- (void)traitCollectionDidChange:(id)arg1;
- (id)viewControllers;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
