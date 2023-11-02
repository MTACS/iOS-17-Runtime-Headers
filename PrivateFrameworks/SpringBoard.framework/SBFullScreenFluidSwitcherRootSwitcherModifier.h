
@interface SBFullScreenFluidSwitcherRootSwitcherModifier : SBFluidSwitcherRootSwitcherModifier

- (Class)_defaultMultitaskingModifierClass;
- (long long)_effectiveEnvironmentMode;
- (id)_entityRemovalModifierForMainTransitionEvent:(id)arg1;
- (id)_newMultitaskingModifier;
- (id)appLayoutsToEnsureExistForMainTransitionEvent:(id)arg1;
- (id)floorModifierForGestureEvent:(id)arg1;
- (id)floorModifierForTransitionEvent:(id)arg1;
- (id)gestureModifierForGestureEvent:(id)arg1;
- (id)insertionModifierForInsertionEvent:(id)arg1;
- (id)lowEndHardwareModifier;
- (id)multitaskingModifierForEvent:(id)arg1;
- (id)reduceMotionModifierForReduceMotionChangedEvent:(id)arg1;
- (id)removalModifierForRemovalEvent:(id)arg1;
- (id)shelfModifierForTransitionEvent:(id)arg1;
- (bool)shouldUseBackgroundWallpaperTreatmentForIndex:(unsigned long long)arg1;
- (id)swipeToKillModifierForSwipeToKillEvent:(id)arg1;
- (id)transitionModifierForMainTransitionEvent:(id)arg1;
- (id)userScrollingModifierForScrollEvent:(id)arg1;

@end
