
@interface SBSwitcherViewController : UIViewController {
    BSUIOrientationTransformWrapperView * _contentWrapperView;
    <SBSwitcherViewControllerDelegate> * _delegate;
}

@property (nonatomic) long long contentOrientation;
@property (nonatomic) <SBSwitcherViewControllerDelegate> *delegate;

- (void).cxx_destruct;
- (long long)_overrideInterfaceOrientationMechanics;
- (void)addContentView:(id)arg1;
- (long long)contentOrientation;
- (id)delegate;
- (void)setContentOrientation:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
