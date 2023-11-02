
@interface AVFullScreenViewController : UIViewController {
    AVFullScreenViewController * _associatedFullScreenViewController;
    UIView * _contentView;
    UIViewController<AVFullScreenViewControllerDelegate> * _delegate;
    AVFullScreenViewController * _sourceFullScreenViewController;
}

@property (nonatomic) AVFullScreenViewController *associatedFullScreenViewController;
@property (nonatomic) UIView *contentView;
@property (nonatomic) UIViewController<AVFullScreenViewControllerDelegate> *delegate;
@property (nonatomic) AVFullScreenViewController *sourceFullScreenViewController;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)associatedFullScreenViewController;
- (void)attachContentView;
- (bool)avkit_isEffectivelyFullScreen;
- (bool)canBecomeFirstResponder;
- (id)contentView;
- (id)delegate;
- (id)keyCommands;
- (void)loadView;
- (bool)modalPresentationCapturesStatusBarAppearance;
- (long long)preferredInterfaceOrientationForPresentation;
- (long long)preferredStatusBarStyle;
- (long long)preferredWhitePointAdaptivityStyle;
- (bool)prefersHomeIndicatorAutoHidden;
- (bool)prefersStatusBarHidden;
- (void)setAssociatedFullScreenViewController:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSourceFullScreenViewController:(id)arg1;
- (bool)shouldAutorotate;
- (id)sourceFullScreenViewController;
- (unsigned long long)supportedInterfaceOrientations;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
