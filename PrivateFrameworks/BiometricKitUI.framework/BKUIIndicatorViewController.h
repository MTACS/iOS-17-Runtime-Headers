
@interface BKUIIndicatorViewController : UIViewController {
    LAUIPhysicalButtonView * _physicalButtonView;
    bool  _shouldShow;
}

@property (nonatomic, retain) LAUIPhysicalButtonView *physicalButtonView;
@property (nonatomic) bool shouldShow;

- (void).cxx_destruct;
- (void)_updateUI;
- (id)init;
- (id)physicalButtonView;
- (bool)prefersStatusBarHidden;
- (void)setPhysicalButtonView:(id)arg1;
- (void)setShouldShow:(bool)arg1;
- (bool)shouldShow;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
