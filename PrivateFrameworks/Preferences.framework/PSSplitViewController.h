
@interface PSSplitViewController : UISplitViewController {
    PSRootController * _containerNavigationController;
    <PSSplitViewControllerNavigationDelegate> * _navigationDelegate;
}

@property (nonatomic, retain) PSRootController *containerNavigationController;
@property (nonatomic) <PSSplitViewControllerNavigationDelegate> *navigationDelegate;

- (void).cxx_destruct;
- (id)categoryController;
- (id)childViewControllerForStatusBarStyle;
- (id)containerNavigationController;
- (id)navigationDelegate;
- (void)popRecursivelyToRootController;
- (void)setContainerNavigationController:(id)arg1;
- (void)setNavigationDelegate:(id)arg1;
- (void)setViewControllers:(id)arg1;
- (void)setupControllerForToolbar:(id)arg1;
- (void)showInitialViewController:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;

@end
