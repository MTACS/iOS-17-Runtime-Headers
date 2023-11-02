
@interface SBUIStartupToHomescreenAnimationController : SBUIMainScreenAnimationController {
    BKSDisplayRenderOverlay * _persistentSnapshotOverlay;
}

- (void).cxx_destruct;
- (double)_animationDelay;
- (void)_cleanupAnimation;
- (void)_prepareAnimation;
- (bool)_shouldDismissBanner;
- (void)_startAnimation;
- (id)animationSettings;
- (id)initWithTransitionContextProvider:(id)arg1;
- (id)initWithTransitionContextProvider:(id)arg1 overlay:(id)arg2;

@end
