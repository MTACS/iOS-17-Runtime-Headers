
@interface SBTransientOverlayDismissWorkspaceTransaction : SBMainWorkspaceTransaction

+ (bool)isValidForTransitionRequest:(id)arg1;

- (void)_begin;
- (void)_didComplete;
- (void)_sendActivationResultWithError:(id)arg1;

@end
