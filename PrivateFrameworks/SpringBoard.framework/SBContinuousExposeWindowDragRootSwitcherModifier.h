
@interface SBContinuousExposeWindowDragRootSwitcherModifier : SBGestureRootSwitcherModifier {
    SBAppLayout * _initialAppLayout;
}

@property (nonatomic, readonly) SBAppLayout *initialAppLayout;

- (void).cxx_destruct;
- (id)appLayoutsToEnsureExistForMainTransitionEvent:(id)arg1;
- (id)appLayoutsToResignActive;
- (id)debugPotentialChildModifiers;
- (id)gestureChildModifierForGestureEvent:(id)arg1 activeTransitionModifier:(id)arg2;
- (long long)gestureType;
- (id)handleGestureEvent:(id)arg1;
- (id)handleSceneReadyEvent:(id)arg1;
- (id)handleTransitionEvent:(id)arg1;
- (id)initWithStartingEnvironmentMode:(long long)arg1 initialAppLayout:(id)arg2;
- (id)initialAppLayout;
- (id)keyboardSuppressionMode;
- (id)transitionChildModifierForMainTransitionEvent:(id)arg1 activeGestureModifier:(id)arg2;

@end
