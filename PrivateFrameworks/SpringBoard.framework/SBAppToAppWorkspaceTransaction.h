
@interface SBAppToAppWorkspaceTransaction : SBToAppsWorkspaceTransaction {
    SBUIAnimationController * _animation;
    SBAutoPIPWorkspaceTransaction * _autoPIPTransaction;
    unsigned long long  _autoPIPTransitionOrder;
    NSObject<OS_dispatch_group> * _pipDuringSwitchTransitionTasksGroup;
    bool  _preventWhitePointAdaptationStrengthUpdateOnComplete;
}

@property (nonatomic) bool preventWhitePointAdaptationStrengthUpdateOnComplete;

- (void).cxx_destruct;
- (void)_animationDidRevealApplication;
- (void)_animationWillBegin:(bool)arg1;
- (void)_begin;
- (void)_beginTransition;
- (bool)_canBeInterrupted;
- (void)_cleanUpAfterAnimation;
- (void)_clearAnimation;
- (unsigned long long)_concurrentOverlayDismissalOptions;
- (void)_didComplete;
- (void)_handleApplicationDidNotChange:(id)arg1;
- (void)_handleApplicationUpdateScenesTransactionFailed:(id)arg1;
- (bool)_hasPostAnimationTasks;
- (bool)_hasPreAnimationTasks;
- (void)_performPostAnimationTasksWithCompletion:(id /* block */)arg1;
- (void)_performPreAnimationTasksWithCompletion:(id /* block */)arg1;
- (unsigned long long)_serialOverlayPreDismissalOptions;
- (id)_setupAnimation;
- (id)_setupAnimationFrom:(id)arg1 to:(id)arg2;
- (bool)_shouldResignActiveForAnimation;
- (bool)_transitionWasCancelled;
- (bool)canInterruptForTransitionRequest:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)initWithTransitionRequest:(id)arg1;
- (bool)preventWhitePointAdaptationStrengthUpdateOnComplete;
- (void)setPreventWhitePointAdaptationStrengthUpdateOnComplete:(bool)arg1;
- (bool)shouldAnimateOrientationChangeOnCompletion;
- (bool)shouldPerformToAppStateCleanupOnCompletion;

@end
