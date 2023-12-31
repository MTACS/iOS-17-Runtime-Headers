
@interface SBCoverSheetPrimarySlidingViewController : SBCoverSheetSlidingViewController <SBGrabberTongueDelegate, SBReachabilityObserver> {
    SBCoverSheetBlurView * _behindCoverSheetBlurView;
    double  _defaultPresentGestureEdgeRegionSize;
    <SBCoverSheetGrabberDelegate> * _grabberDelegate;
    SBGrabberTongue * _grabberTongue;
    bool  _hasCommittedCurrentTransition;
    <PBUIWallpaperAnimatedInvalidating> * _homescreenWallpaperScaleAssertion;
    <PBUIWallpaperAnimatedInvalidating> * _lockscreenWallpaperScaleAssertion;
    SBCoverSheetPanelBackgroundContainerView * _panelBackgroundContainerView;
    SBCoverSheetBlurView * _panelCoverSheetBlurView;
    SBWallpaperEffectView * _panelFadeOutWallpaperEffectView;
    SBWallpaperEffectView * _panelWallpaperEffectView;
    SBFTouchPassThroughView * _parallaxClippingView;
    SBCoverSheetParallaxContainerView * _parallaxContainerView;
    double  _presentationProgressAtCommit;
    SBFTouchPassThroughView * _unlockedContentOverlayView;
}

@property (nonatomic, retain) SBCoverSheetBlurView *behindCoverSheetBlurView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double defaultPresentGestureEdgeRegionSize;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIGestureRecognizer *edgePullGestureRecognizer;
@property (nonatomic) <SBCoverSheetGrabberDelegate> *grabberDelegate;
@property (nonatomic, retain) SBGrabberTongue *grabberTongue;
@property (nonatomic) bool hasCommittedCurrentTransition;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <PBUIWallpaperAnimatedInvalidating> *homescreenWallpaperScaleAssertion;
@property (nonatomic, retain) <PBUIWallpaperAnimatedInvalidating> *lockscreenWallpaperScaleAssertion;
@property (nonatomic, retain) SBCoverSheetPanelBackgroundContainerView *panelBackgroundContainerView;
@property (nonatomic, retain) SBCoverSheetBlurView *panelCoverSheetBlurView;
@property (nonatomic, retain) SBWallpaperEffectView *panelFadeOutWallpaperEffectView;
@property (nonatomic, retain) SBWallpaperEffectView *panelWallpaperEffectView;
@property (nonatomic, retain) SBFTouchPassThroughView *parallaxClippingView;
@property (nonatomic, retain) SBCoverSheetParallaxContainerView *parallaxContainerView;
@property (nonatomic) double presentationProgressAtCommit;
@property (readonly) Class superclass;
@property (nonatomic, retain) SBFTouchPassThroughView *unlockedContentOverlayView;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_animationTickedWithProgress:(double)arg1 velocity:(double)arg2 forPresentationValue:(bool)arg3;
- (void)_beginTransitionFromAppeared:(bool)arg1;
- (bool)_canShowWhileLocked;
- (id)_childViewControllerForAlwaysOnTimelines;
- (void)_commitTransitionToAppeared:(bool)arg1 animated:(bool)arg2;
- (void)_controlCenterWindowSceneDidConnect:(id)arg1;
- (void)_createFadeOutWallpaperEffectViewIfNeeded;
- (void)_createPanelWallpaperEffectViewIfNeeded;
- (void)_endTransitionToAppeared:(bool)arg1;
- (bool)_maglevActive;
- (unsigned long long)_panelOptions;
- (void)_positionSubviewsForContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forPresentationValue:(bool)arg2;
- (void)_setupPanelPartsIfNecessary;
- (bool)_shouldShowGrabberOnFirstSwipe;
- (void)_transitionToViewControllerAppearState:(int)arg1 ifNeeded:(bool)arg2 forUserGesture:(bool)arg3;
- (void)_updateBackgroundIfNecessary;
- (void)_updateFadeOutWallpaperEffectView;
- (void)_updatePanelWallpaperEffectView;
- (void)_updateWallpaperScaled:(bool)arg1 animated:(bool)arg2;
- (void)_updateWindowVisibility;
- (id)behindCoverSheetBlurView;
- (id)customGestureRecognizerForGrabberTongue:(id)arg1;
- (void)dealloc;
- (double)defaultPresentGestureEdgeRegionSize;
- (id)edgePullGestureRecognizer;
- (void)getRotationContentSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; double x6; int x7; }*)arg1 forWindow:(id)arg2;
- (id)grabberDelegate;
- (id)grabberTongue;
- (bool)grabberTongue:(id)arg1 shouldShowTongueOnFirstSwipeWithEdgeLocation:(double)arg2;
- (void)grabberTongueBeganPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3 andGesture:(id)arg4;
- (void)grabberTongueCanceledPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3 andGesture:(id)arg4;
- (void)grabberTongueDidDismiss:(id)arg1;
- (void)grabberTongueEndedPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3 andGesture:(id)arg4;
- (bool)grabberTongueOrPullEnabled:(id)arg1 forGestureRecognizer:(id)arg2;
- (void)grabberTongueUpdatedPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3 andGesture:(id)arg4;
- (void)grabberTongueWillPresent:(id)arg1;
- (void)handleDidEndReachabilityAnimation;
- (void)handleReachabilityModeActivated;
- (void)handleReachabilityModeDeactivated;
- (void)handleWillBeginReachabilityAnimation;
- (bool)hasCommittedCurrentTransition;
- (id)homescreenWallpaperScaleAssertion;
- (void)loadView;
- (id)lockscreenWallpaperScaleAssertion;
- (id)panelBackgroundContainerView;
- (id)panelCoverSheetBlurView;
- (id)panelFadeOutWallpaperEffectView;
- (id)panelWallpaperEffectView;
- (id)parallaxClippingView;
- (id)parallaxContainerView;
- (double)presentationProgressAtCommit;
- (void)setBehindCoverSheetBlurView:(id)arg1;
- (void)setDefaultPresentGestureEdgeRegionSize:(double)arg1;
- (void)setGrabberDelegate:(id)arg1;
- (void)setGrabberTongue:(id)arg1;
- (void)setHasCommittedCurrentTransition:(bool)arg1;
- (void)setHomescreenWallpaperScaleAssertion:(id)arg1;
- (void)setLockscreenWallpaperScaleAssertion:(id)arg1;
- (void)setPanelBackgroundContainerView:(id)arg1;
- (void)setPanelCoverSheetBlurView:(id)arg1;
- (void)setPanelFadeOutWallpaperEffectView:(id)arg1;
- (void)setPanelWallpaperEffectView:(id)arg1;
- (void)setParallaxClippingView:(id)arg1;
- (void)setParallaxContainerView:(id)arg1;
- (void)setPresentationProgressAtCommit:(double)arg1;
- (void)setTransitionSettings:(id)arg1;
- (void)setUnlockedContentOverlayView:(id)arg1;
- (bool)shouldAutorotate;
- (id)unlockedContentOverlayView;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
