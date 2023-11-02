
@interface SBUIStartupFromOverlayAnimationController : SBUIMainScreenAnimationController <SBSceneViewPresentationConfiguring> {
    BSAnimationSettings * _animationSettings;
    BSUIOrientationTransformWrapperView * _orientationWrapperView;
    BKSDisplayRenderOverlay * _overlay;
    SBSceneView * _sceneView;
    bool  _waitsForAppActivation;
}

@property (nonatomic, retain) BSAnimationSettings *animationSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool waitsForAppActivation;

- (void).cxx_destruct;
- (void)_cleanupAnimation;
- (void)_prepareAnimation;
- (bool)_shouldDismissBanner;
- (void)_startAnimation;
- (bool)_waitsForActivatingSceneContentAvailableIfNecessary;
- (id)animationSettings;
- (id)initWithTransitionContextProvider:(id)arg1;
- (id)initWithTransitionContextProvider:(id)arg1 overlay:(id)arg2;
- (id)sceneViewPresentationIdentifier:(id)arg1;
- (long long)sceneViewPresentationPriority:(id)arg1;
- (void)setAnimationSettings:(id)arg1;
- (void)setWaitsForAppActivation:(bool)arg1;
- (bool)waitsForAppActivation;

@end
