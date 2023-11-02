
@interface SUUITabBarController : UITabBarController <SUUIMoreNavigationControllerDelegate> {
    SUUIFloatingOverlayView * _floatingOverlayView;
    UIViewController * _floatingOverlayViewController;
    long long  _forcedUserInterfaceStyle;
    bool  _sizeTransitionInProgress;
}

@property (nonatomic, readonly) bool containsTransientViewControllerOnly;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool sizeTransitionInProgress;
@property (readonly) Class superclass;

+ (Class)_moreNavigationControllerClass;

- (void).cxx_destruct;
- (void)_layoutFloatingOverlayView;
- (void)_setSelectedViewController:(id)arg1;
- (void)cancelTransientViewController:(id)arg1;
- (bool)containsTransientViewControllerOnly;
- (id)floatingOverlayViewController;
- (long long)forcedUserInterfaceStyle;
- (id)init;
- (id)moreNavigationController;
- (void)moreNavigationController:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (long long)preferredUserInterfaceStyle;
- (void)setFloatingOverlayViewController:(id)arg1 animated:(bool)arg2;
- (void)setForcedUserInterfaceStyle:(long long)arg1;
- (void)setSizeTransitionInProgress:(bool)arg1;
- (void)setTransientViewController:(id)arg1 animated:(bool)arg2;
- (bool)sizeTransitionInProgress;
- (id)traitCollection;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
