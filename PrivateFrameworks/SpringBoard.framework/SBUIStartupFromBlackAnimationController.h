
@interface SBUIStartupFromBlackAnimationController : SBUIMainScreenAnimationController <SBSceneViewPresentationConfiguring> {
    BSAnimationSettings * _animationSettings;
    UIView * _blackView;
    UIView * _internalContainerView;
    BSUIOrientationTransformWrapperView * _orientationWrapperView;
    SBDeviceApplicationSceneView * _sceneView;
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
- (id)_getTransitionWindow;
- (void)_prepareAnimation;
- (void)_setHidden:(bool)arg1;
- (bool)_shouldDismissBanner;
- (void)_showBlackView;
- (void)_startAnimation;
- (bool)_waitsForActivatingSceneContentAvailableIfNecessary;
- (id)animationSettings;
- (id)initWithTransitionContextProvider:(id)arg1;
- (id)sceneViewPresentationIdentifier:(id)arg1;
- (long long)sceneViewPresentationPriority:(id)arg1;
- (void)setAnimationSettings:(id)arg1;
- (void)setWaitsForAppActivation:(bool)arg1;
- (bool)waitsForAppActivation;

@end
