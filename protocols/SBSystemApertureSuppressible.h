
@protocol SBSystemApertureSuppressible <NSObject>

@optional

- (bool)acceptsFullScreenTransitionFromSceneWithIdentifier:(NSString *)arg1 ofBundleId:(NSString *)arg2;
- (bool)isSuppressed;
- (bool)requiresSuppressionFromSystemAperture;
- (void)setSuppressed:(bool)arg1;
- (bool)shouldIgnoreSystemChromeSuppression;
- (bool)shouldSuppressElementWhileOnCoversheet;
- (bool)shouldSuppressElementWhileOtherElementsPresent;
- (bool)shouldSuppressElementWhileOverLiquidDetectionCriticalU;
- (bool)shouldSuppressElementWhilePresentingAppWithBundleId:(NSString *)arg1;
- (bool)shouldSuppressElementWhilePresentingNoAppsOrScenes;
- (bool)shouldSuppressElementWhilePresentingSceneWithIdentifier:(NSString *)arg1;

@end
