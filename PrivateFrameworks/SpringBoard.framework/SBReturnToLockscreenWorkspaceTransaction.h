
@interface SBReturnToLockscreenWorkspaceTransaction : SBActivateAppUnderLockScreenWorkspaceTransaction {
    bool  _animatedAppDeactivation;
    SBApplicationSceneEntity * _fromAppSceneEntity;
    bool  _workspaceAlreadyResumed;
}

- (void).cxx_destruct;
- (void)_animationDidFinish;
- (void)_animationWillBegin:(bool)arg1;
- (void)_didComplete;
- (unsigned long long)_serialOverlayPreDismissalOptions;
- (id)_setupAnimation;
- (id)debugDescription;
- (id)initWithTransitionRequest:(id)arg1 toLockScreenEnvironment:(id)arg2;

@end
