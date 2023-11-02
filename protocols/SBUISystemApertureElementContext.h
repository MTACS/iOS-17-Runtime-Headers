
@protocol SBUISystemApertureElementContext <NSObject>

@required

- (void)elementDidDismissMenu;
- (void)elementWillPresentMenu;
- (bool)isBeingRemoved;
- (bool)isFallbackContext;
- (<SBUISystemApertureAutomaticallyInvalidatable> *)requestAlertingAssertion;
- (void)requestNegativeResponseAnimation;
- (void)requestTransitionToMaximumSupportedLayoutMode;
- (void)requestTransitionToPreferredLayoutMode;
- (void)setElementNeedsLayoutUpdateWithOptions:(void *)arg1 coordinatedAnimations:(void *)arg2; // needs 2 arg types, found 6: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setElementNeedsUpdate;
- (void)setElementNeedsUpdateWithCoordinatedAnimations:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (SBUISystemApertureElementTransitionContext *)transitionContext;

@end
