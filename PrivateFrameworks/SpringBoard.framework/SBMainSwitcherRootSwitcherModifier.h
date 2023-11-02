
@interface SBMainSwitcherRootSwitcherModifier : SBFluidSwitcherRootSwitcherModifier {
    SBAppLayout * _appLayout;
    long long  _environmentMode;
    SBAppLayout * _floatingAppLayout;
    struct CGSize { 
        double width; 
        double height; 
    }  _floatingCardSize;
    long long  _floatingConfiguration;
    bool  _floatingSwitcherVisible;
    struct CGSize { 
        double width; 
        double height; 
    }  _fullScreenCardSize;
    bool  _isInPeekState;
}

- (void).cxx_destruct;
- (bool)_correctFloorModifierToHandleEvent;
- (id)_createNewDefaultFloorModifier;
- (void)_ensureModifier:(id)arg1 startsInFinalStateOfEvent:(id)arg2;
- (id)_newMultitaskingModifierForEnvironmentMode:(long long)arg1;
- (void)_setCardSizesWithEvent:(id)arg1;
- (id)adjustedAppLayoutsForAppLayouts:(id)arg1;
- (id)floorModifierForGestureEvent:(id)arg1;
- (id)floorModifierForTransitionEvent:(id)arg1;
- (id)focusedAppModifierForUpdateFocusedAppLayoutEvent:(id)arg1;
- (id)gestureModifierForGestureEvent:(id)arg1;
- (id)handleGestureEvent:(id)arg1;
- (id)handleTransitionEvent:(id)arg1;
- (id)highlightModifierForHighlightEvent:(id)arg1;
- (id)init;
- (id)insertionModifierForInsertionEvent:(id)arg1;
- (id)multitaskingModifierForEvent:(id)arg1;
- (id)reduceMotionModifierForReduceMotionChangedEvent:(id)arg1;
- (id)removalModifierForRemovalEvent:(id)arg1;
- (id)responseForProposedChildResponse:(id)arg1 childModifier:(id)arg2 event:(id)arg3;
- (id)shelfModifierForTransitionEvent:(id)arg1;
- (id)swipeToKillModifierForSwipeToKillEvent:(id)arg1;
- (id)transitionModifierForMainTransitionEvent:(id)arg1;
- (id)userScrollingModifierForScrollEvent:(id)arg1;

@end
