
@interface SBRotateScenesWorkspaceTransaction : SBAppToAppWorkspaceTransaction

- (unsigned long long)_concurrentOverlayDismissalOptions;
- (unsigned long long)_serialOverlayPreDismissalOptions;
- (bool)_shouldResignActiveForAnimation;

@end
