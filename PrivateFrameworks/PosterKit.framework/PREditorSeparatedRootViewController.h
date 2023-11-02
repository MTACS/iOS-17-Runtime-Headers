
@interface PREditorSeparatedRootViewController : PREditorRootViewController {
    UIView * _backgroundForegroundContainerViewsZStackView;
    UIView * _floatingContainerViewsZStackView;
    UIView * _looksDividerView;
    UIScrollView * _timeContainerScrollView;
    NSMutableDictionary * _viewsForLook;
}

@property (nonatomic, retain) UIView *backgroundForegroundContainerViewsZStackView;
@property (nonatomic, retain) UIView *floatingContainerViewsZStackView;
@property (nonatomic, retain) UIView *looksDividerView;
@property (nonatomic, retain) UIScrollView *timeContainerScrollView;

- (void).cxx_destruct;
- (void)_enumerateContainerViewsWithBlock:(id /* block */)arg1;
- (void)_updateContainerViewClipping:(bool)arg1;
- (void)_updateContainerViewFrames;
- (void)_updateCounterRotationLayout;
- (void)_updateLooksDividerViewForTransitionToSize:(struct CGSize { double x1; double x2; })arg1 startingTransition:(bool)arg2;
- (long long)_windowInterfaceOrientation;
- (id)backgroundForegroundContainerViewsZStackView;
- (id)currentLookViews;
- (id)floatingContainerViewsZStackView;
- (void)loadView;
- (void)looksDidChange;
- (id)looksDividerView;
- (void)looksWillChange;
- (void)setBackgroundForegroundContainerViewsZStackView:(id)arg1;
- (void)setFloatingContainerViewsZStackView:(id)arg1;
- (void)setLooksDividerView:(id)arg1;
- (void)setTimeContainerScrollView:(id)arg1;
- (id)timeContainerScrollView;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)viewsForLook:(id)arg1;

@end
