
@interface SBCardDropSwitcherModifier : SBSwitcherModifier {
    SBSwitcherDropRegionContext * _dropContext;
    SBAppLayout * _evictedAppLayout;
    SBAppLayout * _finalAppLayout;
    bool  _handledMainTransitionEvent;
    bool  _isFinalAppLayoutBlurred;
    unsigned long long  _phase;
    struct CGPoint { 
        double x; 
        double y; 
    }  _referenceCardOffsetFromPageBoundary;
    SBAppLayout * _remainingAppLayout;
    bool  _shouldExpectMainTransitionEvent;
    bool  _waitingForHeaderFadeIn;
    bool  _waitingForReflowAnimation;
}

- (void).cxx_destruct;
- (bool)_appLayoutContainsModifiedAppLayout:(id)arg1;
- (void)_completeIfNeeded;
- (void)_recomputeBlurStateWithCompletion:(id /* block */)arg1;
- (id)animatablePropertyIdentifiers;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (struct SBSwitcherAsyncRenderingAttributes { bool x1; bool x2; })asyncRenderingAttributesForAppLayout:(id)arg1;
- (unsigned long long)blurTargetPreferenceForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (struct CGPoint { double x1; double x2; })contentOffsetForIndex:(unsigned long long)arg1 alignment:(long long)arg2;
- (id)handleAnimatablePropertyChangedEvent:(id)arg1;
- (id)handleBlurProgressEvent:(id)arg1;
- (id)handleSceneReadyEvent:(id)arg1;
- (id)handleSwitcherDropEvent:(id)arg1;
- (id)handleTimerEvent:(id)arg1;
- (id)handleTransitionEvent:(id)arg1;
- (id)initWithDropContext:(id)arg1;
- (bool)isLayoutRoleBlurred:(long long)arg1 inAppLayout:(id)arg2;
- (bool)isLayoutRoleDraggable:(long long)arg1 inAppLayout:(id)arg2;
- (bool)isLayoutRoleMatchMovedToScene:(long long)arg1 inAppLayout:(id)arg2;
- (bool)isScrollEnabled;
- (double)modelValueForAnimatableProperty:(id)arg1 currentValue:(double)arg2 creating:(bool)arg3;
- (id)settingsForAnimatableProperty:(id)arg1;
- (bool)shouldAccessoryDrawShadowForAppLayout:(id)arg1;
- (bool)shouldPerformCrossfadeForReduceMotion;
- (bool)shouldScaleContentToFillBoundsAtIndex:(unsigned long long)arg1;
- (bool)shouldScaleOverlayToFillBoundsAtIndex:(unsigned long long)arg1;
- (bool)shouldShowBackdropViewAtIndex:(unsigned long long)arg1;
- (bool)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)arg1;
- (double)titleAndIconOpacityForIndex:(unsigned long long)arg1;
- (id)topMostLayoutElements;
- (long long)updateModeForAnimatableProperty:(id)arg1;

@end
