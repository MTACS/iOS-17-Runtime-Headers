
@interface SBForcePressGestureRootSwitcherModifier : SBGestureRootSwitcherModifier {
    SBSwitcherModifier * _multitaskingModifier;
}

- (void).cxx_destruct;
- (id)gestureChildModifierForGestureEvent:(id)arg1 activeTransitionModifier:(id)arg2;
- (long long)gestureType;
- (id)initWithStartingEnvironmentMode:(long long)arg1 multitaskingModifier:(id)arg2;
- (id)transitionChildModifierForMainTransitionEvent:(id)arg1 activeGestureModifier:(id)arg2;

@end
