
@interface SBContinuousExposeDragAndDropGestureRootSwitcherModifier : SBGestureRootSwitcherModifier {
    SBAppLayout * _appLayout;
}

- (void).cxx_destruct;
- (id)gestureChildModifierForGestureEvent:(id)arg1 activeTransitionModifier:(id)arg2;
- (long long)gestureType;
- (id)handleTransitionEvent:(id)arg1;
- (id)initWithStartingEnvironmentMode:(long long)arg1 appLayout:(id)arg2;
- (id)transitionChildModifierForMainTransitionEvent:(id)arg1 activeGestureModifier:(id)arg2;

@end
