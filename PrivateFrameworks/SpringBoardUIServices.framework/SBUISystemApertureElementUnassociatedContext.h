
@interface SBUISystemApertureElementUnassociatedContext : NSObject <SBUISystemApertureElementContext> {
    SBUISystemApertureElementTransitionContext * transitionContext;
}

@property (getter=isBeingRemoved, nonatomic, readonly) bool beingRemoved;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFallbackContext, nonatomic, readonly) bool fallbackContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SBUISystemApertureElementTransitionContext *transitionContext;

+ (id)unassociatedContext;

- (void).cxx_destruct;
- (void)_logErrorForSelectorIfNeeded:(SEL)arg1;
- (void)elementDidDismissMenu;
- (void)elementWillPresentMenu;
- (bool)isBeingRemoved;
- (bool)isFallbackContext;
- (id)requestAlertingAssertion;
- (void)requestNegativeResponseAnimation;
- (void)requestTransitionToMaximumSupportedLayoutMode;
- (void)requestTransitionToPreferredLayoutMode;
- (void)setElementNeedsLayoutUpdateWithOptions:(unsigned long long)arg1 coordinatedAnimations:(id /* block */)arg2;
- (void)setElementNeedsUpdate;
- (void)setElementNeedsUpdateWithCoordinatedAnimations:(id /* block */)arg1;
- (id)transitionContext;

@end
