
@interface SBSceneOrientationFollowingWindowRootViewController : UIViewController {
    SBIsolatedSceneOrientationFollowingWrapperViewController * _hostingViewController;
    UIView * _overlayContentView;
}

@property (nonatomic) SBIsolatedSceneOrientationFollowingWrapperViewController *hostingViewController;
@property (nonatomic, retain) UIView *overlayContentView;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(bool*)arg2;
- (id)hostingViewController;
- (id)initWithHostingViewController:(id)arg1;
- (id)overlayContentView;
- (void)setHostingViewController:(id)arg1;
- (void)setOverlayContentView:(id)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillLayoutSubviews;

@end
