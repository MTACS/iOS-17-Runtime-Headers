
@interface SiriPresentationSpringBoardMainScreenViewController : SiriPresentationViewController {
    bool  _shareHomeGesture;
    bool  _shouldDismissForSwipesOutsideContent;
    bool  _shouldDismissForTapOutsideContent;
    bool  _shouldDismissForTapsOutsideContent;
    bool  _shouldPassTapsThrough;
    bool  _shouldPassTouchesThroughToSpringBoard;
    bool  _tapsOutsideContentDismissAssistant;
}

@property (nonatomic, readonly) bool shareHomeGesture;
@property (nonatomic, readonly) bool shouldDismissForSwipesOutsideContent;
@property (nonatomic, readonly) bool shouldPassTapsThrough;
@property (nonatomic, readonly) bool shouldPassTouchesThroughToSpringBoard;
@property (nonatomic) <SiriPresentationSpringBoardMainScreenViewControllerDelegate> *siriPresentationControllerDelegate;
@property (nonatomic, readonly) bool tapsOutsideContentDismissAssistant;

- (bool)_canShowWhileLocked;
- (id)init;
- (id)initWithIdentifier:(long long)arg1;
- (id)initWithIdentifier:(long long)arg1 hostedPresentationFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)loadView;
- (void)requestPasscodeUnlockWithCompletion:(id /* block */)arg1;
- (void)requestStatusBarVisible:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)resetGestureBehaviors;
- (void)setDockFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFluidDismissalState:(id)arg1;
- (void)setShareHomeGesture:(bool)arg1;
- (void)setShouldDismissForSwipesOutsideContent:(bool)arg1;
- (void)setShouldDismissForTapOutsideContent:(bool)arg1;
- (void)setShouldDismissForTapsOutsideContent:(bool)arg1;
- (void)setShouldPassTouchesThroughToSpringBoard:(bool)arg1;
- (void)setShowsStatusBar:(bool)arg1;
- (void)setSystemApertureFrames:(id)arg1;
- (bool)shareHomeGesture;
- (bool)shouldDismissForSwipesOutsideContent;
- (bool)shouldDismissForTapOutsideContent;
- (bool)shouldDismissForTapsOutsideContent;
- (bool)shouldPassTapsThrough;
- (bool)shouldPassTouchesThroughToSpringBoard;
- (bool)showAppsBehindSiri;
- (bool)tapsOutsideContentDismissAssistant;
- (void)updateHomeGestureSharingForSiriSetup:(bool)arg1;

@end
