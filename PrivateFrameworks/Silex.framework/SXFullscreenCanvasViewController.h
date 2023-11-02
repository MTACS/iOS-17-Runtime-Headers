
@interface SXFullscreenCanvasViewController : UIViewController {
    <SXFullscreenCanvasViewControllerDelegate> * _delegate;
    bool  _isTransitioning;
    long long  _statusBarStyle;
}

@property (nonatomic) <SXFullscreenCanvasViewControllerDelegate> *delegate;
@property (nonatomic) bool isTransitioning;
@property (nonatomic) long long statusBarStyle;

- (void).cxx_destruct;
- (bool)canBecomeFirstResponder;
- (id)delegate;
- (void)dismiss;
- (bool)isTransitioning;
- (id)keyCommands;
- (long long)preferredStatusBarStyle;
- (long long)preferredStatusBarUpdateAnimation;
- (bool)prefersStatusBarHidden;
- (void)scrollToNext;
- (void)scrollToPrevious;
- (void)setDelegate:(id)arg1;
- (void)setIsTransitioning:(bool)arg1;
- (void)setStatusBarStyle:(long long)arg1;
- (long long)statusBarStyle;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
