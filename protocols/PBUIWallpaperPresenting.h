
@protocol PBUIWallpaperPresenting <NSObject>

@required

- (long long)activeVariant;
- (void)addObserver:(id <PBUIWallpaperObserver>)arg1 forVariant:(long long)arg2;
- (void)cancelInProcessAnimations;
- (struct { long long x1; long long x2; double x3; })currentHomescreenStyleTransitionState;
- (double)homescreenWallpaperScale;
- (double)lockscreenWallpaperScale;
- (double)minimumHomescreenWallpaperScale;
- (double)minimumLockscreenWallpaperScale;
- (void)removeObserver:(id <PBUIWallpaperObserver>)arg1 forVariant:(long long)arg2;
- (bool)removeWallpaperStyleForPriority:(long long)arg1 forVariant:(long long)arg2 withAnimationFactory:(BSUIAnimationFactory *)arg3;
- (<BSInvalidatable> *)requireWallpaperRasterizationWithReason:(NSString *)arg1;
- (<BSInvalidatable> *)requireWallpaperWithReason:(NSString *)arg1;
- (void)setActiveVariant:(long long)arg1;
- (void)setActiveVariant:(void *)arg1 withOutAnimationFactory:(void *)arg2 inAnimationFactory:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: long long, BSUIAnimationFactory *, BSUIAnimationFactory *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (<PBUIWallpaperAnimatedInvalidating> *)setHomescreenWallpaperScale:(double)arg1 withAnimationFactory:(BSUIAnimationFactory *)arg2;
- (<PBUIWallpaperAnimatedInvalidating> *)setLockscreenWallpaperScale:(double)arg1 withAnimationFactory:(BSUIAnimationFactory *)arg2;
- (void)setWallpaperPresentingDelegate:(id <PBUIWallpaperPresentingDelegate>)arg1;
- (bool)setWallpaperStyle:(long long)arg1 forPriority:(long long)arg2 forVariant:(long long)arg3 withAnimationFactory:(BSUIAnimationFactory *)arg4;
- (bool)setWallpaperStyleTransitionState:(struct { long long x1; long long x2; double x3; })arg1 forPriority:(long long)arg2 forVariant:(long long)arg3 withAnimationFactory:(BSUIAnimationFactory *)arg4;
- (<BSInvalidatable> *)suspendWallpaperAnimationForReason:(NSString *)arg1;
- (<PBUIWallpaperPresentingDelegate> *)wallpaperPresentingDelegate;

@optional

- (UIView<BSInvalidatable><PBUIWallpaperPositioning> *)createWallpaperFloatingViewForReason:(NSString *)arg1 ignoreReplica:(bool)arg2;
- (bool)homeScreenPosterMirrorsLock;
- (void)noteDidRotateFromInterfaceOrientation:(long long)arg1;
- (void)noteWillAnimateToInterfaceOrientation:(long long)arg1;
- (void)noteWillAnimateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (bool)posterHandlesWakeAnimation;
- (bool)posterHidesDimmingLayer;
- (NSSet *)scenesForBacklightSession;
- (NSSet *)scenesForInactiveEnvironmentSession;
- (void)setAssociatedPosterConfiguration:(PRSPosterConfiguration *)arg1 withAnimationSettings:(BSAnimationSettings *)arg2;
- (void)setConfiguration:(PRSPosterConfiguration *)arg1 withAnimationSettings:(BSAnimationSettings *)arg2;
- (<PBUIWallpaperAnimatedInvalidating> *)setWallpaperFloatingLayerContainerView:(UIView *)arg1 forReason:(NSString *)arg2 withAnimationFactory:(BSUIAnimationFactory *)arg3;
- (void)setWallpaperObscured:(bool)arg1;
- (unsigned long long)significantEventsCounter;
- (unsigned long long)significantEventsCounterForPosterWithIdentifier:(NSUUID *)arg1;
- (void)triggerPosterSignificantEvent;
- (void)triggerPosterTapEvent:(UIGestureRecognizer *)arg1;
- (void)triggerSceneUpdate;
- (void)updateWallpaperAnimationWithIconFlyInTension:(double)arg1 friction:(double)arg2;
- (void)updateWallpaperAnimationWithProgress:(double)arg1;
- (void)updateWallpaperAnimationWithWakeSourceIsSwipeToUnlock:(bool)arg1;
- (bool)userTapEventsRequested;

@end
