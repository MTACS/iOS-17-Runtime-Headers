
@interface SBFolderPresentingViewController : SBNestingViewController <SBFolderControllerBackgroundViewDelegate> {
    unsigned long long  _backgroundEffect;
    <UIViewControllerAnimatedTransitioning> * _currentFolderAnimator;
    <SBFolderPresentingViewControllerDelegate> * _folderPresentationDelegate;
}

@property (nonatomic) unsigned long long backgroundEffect;
@property (nonatomic, retain) <UIViewControllerAnimatedTransitioning> *currentFolderAnimator;
@property (nonatomic) <SBFolderPresentingViewControllerDelegate> *folderPresentationDelegate;
@property (nonatomic, readonly) SBFolderController *presentedFolderController;
@property (nonatomic, readonly) SBFolderContainerView *view;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (unsigned long long)backgroundEffect;
- (id)currentFolderAnimator;
- (void)dismissPresentedFolderControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)folderPresentationDelegate;
- (void)loadView;
- (double)minimumHomeScreenScaleForFolderControllerBackgroundView:(id)arg1;
- (id)nestingViewController:(id)arg1 animationControllerForOperation:(long long)arg2 onViewController:(id)arg3 animated:(bool)arg4;
- (id)nestingViewController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)nestingViewController:(id)arg1 sourceViewForPresentingViewController:(id)arg2;
- (void)nestingViewController:(id)arg1 willPerformOperation:(long long)arg2 onViewController:(id)arg3 withTransitionCoordinator:(id)arg4;
- (void)presentFolderController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)presentedFolderController;
- (void)setBackgroundEffect:(unsigned long long)arg1;
- (void)setCurrentFolderAnimator:(id)arg1;
- (void)setFolderPresentationDelegate:(id)arg1;
- (id)view;

@end
