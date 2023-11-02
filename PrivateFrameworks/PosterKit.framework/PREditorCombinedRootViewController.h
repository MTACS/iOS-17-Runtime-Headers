
@interface PREditorCombinedRootViewController : PREditorRootViewController {
    <PREditingLookViewProviding> * _views;
}

@property (nonatomic, retain) <PREditingLookViewProviding> *views;

- (void).cxx_destruct;
- (void)_updateCounterRotationLayout;
- (void)_updateScrollViewClipping:(bool)arg1;
- (long long)_windowInterfaceOrientation;
- (void)loadView;
- (void)setViews:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)views;

@end
