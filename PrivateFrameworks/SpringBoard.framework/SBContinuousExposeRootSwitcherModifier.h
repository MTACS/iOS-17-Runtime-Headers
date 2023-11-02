
@interface SBContinuousExposeRootSwitcherModifier : SBFullScreenFluidSwitcherRootSwitcherModifier {
    SBAppLayout * _currentAppLayout;
    SBAppLayout * _effectiveAppLayoutOnStage;
    SBSwitcherModifier * _initialFloorModifierForWindowDrag;
    bool  _isStripTonguePresented;
}

- (void).cxx_destruct;
- (long long)_effectiveEnvironmentMode;
- (bool)_isActivatingAppLayoutUnoccludedForEvent:(id)arg1;
- (id)appLayoutOnStage;
- (struct SBSwitcherContinuousExposeStripTongueAttributes { unsigned long long x1; unsigned long long x2; })continuousExposeStripTongueAttributes;
- (id)floorModifierForGestureEvent:(id)arg1;
- (id)floorModifierForTransitionEvent:(id)arg1;
- (id)focusedAppModifierForUpdateFocusedAppLayoutEvent:(id)arg1;
- (id)gestureModifierForGestureEvent:(id)arg1;
- (id)handleContinuousExposeIdentifiersChangedEvent:(id)arg1;
- (id)handleContinuousExposeStripEdgeProtectTongueEvent:(id)arg1;
- (id)handleEvent:(id)arg1;
- (id)handleTransitionEvent:(id)arg1;
- (id)highlightModifierForHighlightEvent:(id)arg1;
- (id)insertionModifierForInsertionEvent:(id)arg1;
- (id)lowEndHardwareModifier;
- (id)multitaskingModifierForEvent:(id)arg1;
- (id)reduceMotionModifierForReduceMotionChangedEvent:(id)arg1;
- (id)removalModifierForRemovalEvent:(id)arg1;
- (bool)shouldScaleContentToFillBoundsAtIndex:(unsigned long long)arg1;
- (bool)shouldUseNonuniformSnapshotScalingForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (bool)shouldUseWallpaperGradientTreatment;
- (id)swipeToKillModifierForSwipeToKillEvent:(id)arg1;
- (long long)switcherModifierLevelForTransitionEvent:(id)arg1;
- (id)transitionModifierForMainTransitionEvent:(id)arg1;
- (id)userScrollingModifierForScrollEvent:(id)arg1;

@end
