
@protocol SBCoverSheetSlidingViewControllerDelegate <NSObject>

@required

- (void)coverSheetSlidingViewController:(void *)arg1 animateForGestureActive:(void *)arg2 withProgress:(void *)arg3 beginBlock:(void *)arg4 endBlock:(void *)arg5; // needs 5 arg types, found 13: SBCoverSheetSlidingViewController *, bool, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, void*
- (void)coverSheetSlidingViewController:(SBCoverSheetSlidingViewController *)arg1 animationTickedWithProgress:(double)arg2 velocity:(double)arg3 coverSheetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 gestureActive:(bool)arg5 forPresentationValue:(bool)arg6;
- (void)coverSheetSlidingViewController:(SBCoverSheetSlidingViewController *)arg1 committingToEndPresented:(bool)arg2;
- (void)coverSheetSlidingViewController:(SBCoverSheetSlidingViewController *)arg1 dismissGestureChangedWithProgress:(double)arg2;
- (void)coverSheetSlidingViewController:(SBCoverSheetSlidingViewController *)arg1 isTransitioning:(bool)arg2;
- (void)coverSheetSlidingViewController:(SBCoverSheetSlidingViewController *)arg1 prepareForDismissalTransitionForReversingTransition:(bool)arg2 forUserGesture:(bool)arg3;
- (void)coverSheetSlidingViewController:(SBCoverSheetSlidingViewController *)arg1 prepareForPresentationTransitionForUserGesture:(bool)arg2;
- (void)coverSheetSlidingViewControllerCleanupDismissalTransition:(SBCoverSheetSlidingViewController *)arg1;
- (void)coverSheetSlidingViewControllerCleanupInterstitialTransition:(SBCoverSheetSlidingViewController *)arg1;
- (void)coverSheetSlidingViewControllerCleanupPresentationTransition:(SBCoverSheetSlidingViewController *)arg1;
- (void)coverSheetSlidingViewControllerCleanupRubberBandedPresentationTransition:(SBCoverSheetSlidingViewController *)arg1;
- (bool)coverSheetSlidingViewControllerContentShouldAutoRotateWhenNotVisible:(SBCoverSheetSlidingViewController *)arg1;
- (void)coverSheetSlidingViewControllerDidEndTransition:(SBCoverSheetSlidingViewController *)arg1;
- (void)coverSheetSlidingViewControllerDidPassRubberBandThreshold:(SBCoverSheetSlidingViewController *)arg1;
- (void)coverSheetSlidingViewControllerPrepareForRubberBandedPresentationTransition:(SBCoverSheetSlidingViewController *)arg1;
- (void)coverSheetSlidingViewControllerReachabilityAnimationDidEnd:(SBCoverSheetSlidingViewController *)arg1;
- (void)coverSheetSlidingViewControllerReachabilityAnimationWillBegin:(SBCoverSheetSlidingViewController *)arg1;
- (bool)coverSheetSlidingViewControllerShouldAllowDismissal:(SBCoverSheetSlidingViewController *)arg1;
- (void)coverSheetSlidingViewControllerUserPresentGestureBegan:(SBCoverSheetSlidingViewController *)arg1;
- (bool)hasContentUnderCoverSheetSlidingViewController:(SBCoverSheetSlidingViewController *)arg1;

@end
