
@interface SBTransientOverlayDismissAllToAppsWorkspaceTransaction : SBToAppsWorkspaceTransaction {
    SBAutoPIPWorkspaceTransaction * _autoPIPTransaction;
    bool  _beganDismissingTransientOverlays;
    bool  _isUsingSwitcherAnimation;
    <BSInvalidatable> * _pipWindowLevelOverrideAssertionInvalidatable;
    NSArray * _switcherTransitioningTransientOverlayViewControllers;
}

- (void).cxx_destruct;
- (void)_begin;
- (bool)_canBeInterrupted;
- (unsigned long long)_concurrentOverlayDismissalOptions;
- (void)_didComplete;
- (void)_handleDismissOverlaysCompletion;
- (void)_logForInterruptAttemptReason:(id)arg1;
- (void)_performDismissal;
- (unsigned long long)_serialOverlayPreDismissalOptions;
- (id)_setupAnimation;
- (bool)_shouldAnimateTransition;
- (bool)_shouldResignActiveForAnimation;
- (bool)_shouldUseSwitcherDismissalAnimationForTransientOverlayViewController:(id)arg1;
- (bool)canInterruptForTransitionRequest:(id)arg1;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1;

@end
