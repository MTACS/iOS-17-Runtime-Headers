
@interface PKCompactNavigationWrapperViewController : PKWrapperViewController {
    bool  _hasExplicitTargetNavigationHeight;
    double  _navigationBarHeight;
    bool  _needsInitialLayout;
    PKCompactNavigationContainedNavigationController * _parentNavigationController;
    double  _targetNavigationHeight;
}

@property (nonatomic, readonly) bool hasExplicitTargetNavigationHeight;
@property (nonatomic, readonly) bool needsInitialLayout;
@property (nonatomic) double targetNavigationHeight;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(bool*)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_wrappedViewControllerFrameForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 navigationBarHeight:(double)arg2;
- (void)didMoveToParentViewController:(id)arg1;
- (bool)hasExplicitTargetNavigationHeight;
- (id)initWithWrappedViewController:(id)arg1 parentNavigationController:(id)arg2;
- (id)initWithWrappedViewController:(id)arg1 type:(long long)arg2;
- (void)loadView;
- (bool)needsInitialLayout;
- (void)setTargetNavigationHeight:(double)arg1;
- (double)targetNavigationHeight;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;

@end
