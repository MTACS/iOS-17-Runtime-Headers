
@interface SBTransientOverlayDismissToAppsWorkspaceTransaction : SBMainWorkspaceTransaction

+ (bool)isValidForTransitionRequest:(id)arg1;

- (void)_begin;
- (bool)_canBeInterrupted;
- (void)_didComplete;
- (void)_sendActivationResultWithError:(id)arg1;
- (bool)canInterruptForTransitionRequest:(id)arg1;

@end
