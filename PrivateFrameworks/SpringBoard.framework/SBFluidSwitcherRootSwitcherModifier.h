
@interface SBFluidSwitcherRootSwitcherModifier : SBSwitcherModifier {
    bool  _hasPerformedInitialSetup;
}

- (id)_handleEvent:(id)arg1;
- (id)_highlightModifierKeyForAppLayout:(id)arg1;
- (id)_reduceMotionModifier;
- (void)_setup;
- (id)_swipeToKillModifierKeyForAppLayout:(id)arg1;
- (void)_updateFloorModifierWithGestureEvent:(id)arg1;
- (void)_updateFloorModifierWithProposedFloorModifier:(id)arg1;
- (void)_updateFloorModifierWithTransitionEvent:(id)arg1;
- (void)_updateLowEndHardwareModifier;
- (void)_updateMultitaskingModifierWithEvent:(id)arg1;
- (void)_updateReduceMotionModifierWithReduceMotionChangedEvent:(id)arg1;
- (void)_updateTransientlyVisibleSlideOverTongueModifierWithEvent:(id)arg1;
- (void)didMoveToParentModifier:(id)arg1;
- (id)floorModifier;
- (id)floorModifierForGestureEvent:(id)arg1;
- (id)floorModifierForTransitionEvent:(id)arg1;
- (id)focusedAppModifierForUpdateFocusedAppLayoutEvent:(id)arg1;
- (id)gestureModifierForGestureEvent:(id)arg1;
- (id)handleEvent:(id)arg1;
- (id)handleGestureEvent:(id)arg1;
- (id)handleHighlightEvent:(id)arg1;
- (id)handleInsertionEvent:(id)arg1;
- (id)handleReduceMotionChangedEvent:(id)arg1;
- (id)handleRemovalEvent:(id)arg1;
- (id)handleScrollEvent:(id)arg1;
- (id)handleSwipeToKillEvent:(id)arg1;
- (id)handleTransitionEvent:(id)arg1;
- (id)handleUpdateFocusedAppLayoutEvent:(id)arg1;
- (id)highlightModifierForHighlightEvent:(id)arg1;
- (id)insertionModifierForInsertionEvent:(id)arg1;
- (id)lowEndHardwareModifier;
- (id)multitaskingModifier;
- (id)multitaskingModifierForEvent:(id)arg1;
- (id)reduceMotionModifierForReduceMotionChangedEvent:(id)arg1;
- (id)removalModifierForRemovalEvent:(id)arg1;
- (id)responseForProposedChildResponse:(id)arg1 childModifier:(id)arg2 event:(id)arg3;
- (void)setDelegate:(id)arg1;
- (id)shelfModifierForTransitionEvent:(id)arg1;
- (id)swipeToKillModifierForSwipeToKillEvent:(id)arg1;
- (long long)switcherModifierLevelForTransitionEvent:(id)arg1;
- (id)transientlyVisibleSlideOverTongueModifier;
- (id)transientlyVisibleSlideOverTongueModifierForEvent:(id)arg1;
- (id)transitionModifierForInlineTransitionEvent:(id)arg1;
- (id)transitionModifierForMainTransitionEvent:(id)arg1;
- (id)userScrollingModifierForScrollEvent:(id)arg1;
- (void)verifyInternalIntegrityAfterHandlingEvent:(id)arg1;

@end
