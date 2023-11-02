
@interface TSCardContainerController : UIViewController {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  cardItemStack;
    void cardViewLayoutOptions;
    void delegate;
    void dimmingAlpha;
    void dimmingColor;
    void dimmingView;
    void eventManager;
    void rootViewController;
    void transitionManager;
}

@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarStyle;
@property (nonatomic, readonly) bool shouldAutomaticallyForwardAppearanceMethods;

- (void).cxx_destruct;
- (bool)accessibilityPerformEscape;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)collapseCards:(id /* block */)arg1;
- (void)expandCards:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)popCards;
- (void)pushCardWithViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewLayoutMarginsDidChange;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
