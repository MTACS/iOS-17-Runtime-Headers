
@interface ChatKit.AppCardContainerViewController : UIViewController <CKAppCardViewControllerProtocol, _UIRemoteViewControllerContaining> {
    void cachedCompactDetentHeight;
    void initialPresentationStyle;
    void popoverPresentationLocation;
    void presentationDelegate;
    void remoteViewController;
    void sendDelegate;
    void shouldOverrideExceptionsOnDismissal;
    void touchTrackingGesture;
}

@property (nonatomic, readonly) _UIRemoteViewController *_containedRemoteViewController;
@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (void).cxx_destruct;
- (id)_containedRemoteViewController;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(bool*)arg2;
- (void)checkForTouchInRemoteProcessIfNecessaryWithCompletion:(id /* block */)arg1;
- (void)closeButtonPressed;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)setShowingDarkEffect:(bool)arg1 isInDarkMode:(bool)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
