
@interface SBUIStartupToUserSetupAppZoomInAnimationController : SBUIMainScreenAnimationController <SBSceneViewPresentationConfiguring> {
    BSUIOrientationTransformWrapperView * _orientationWrapperView;
    BKSDisplayRenderOverlay * _persistentSnapshotOverlay;
    SBSceneView * _sceneView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanupAnimation;
- (id)_getTransitionWindow;
- (void)_prepareAnimation;
- (void)_setHidden:(bool)arg1;
- (bool)_shouldDismissBanner;
- (void)_startAnimation;
- (bool)_waitsForActivatingSceneContentAvailableIfNecessary;
- (id)animationSettings;
- (id)initWithTransitionContextProvider:(id)arg1;
- (id)initWithTransitionContextProvider:(id)arg1 overlay:(id)arg2;
- (id)sceneViewPresentationIdentifier:(id)arg1;
- (long long)sceneViewPresentationPriority:(id)arg1;

@end
