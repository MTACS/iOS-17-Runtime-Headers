
@interface SBDragAndDropGestureRootSwitcherModifier : SBGestureRootSwitcherModifier {
    bool  _floatingSwitcherVisible;
    SBAppLayout * _fullScreenAppLayout;
}

- (void).cxx_destruct;
- (id)gestureChildModifierForGestureEvent:(id)arg1 activeTransitionModifier:(id)arg2;
- (long long)gestureType;
- (id)handleSwitcherDropEvent:(id)arg1;
- (id)handleTransitionEvent:(id)arg1;
- (id)initWithStartingEnvironmentMode:(long long)arg1 floatingSwitcherVisible:(bool)arg2 fullScreenAppLayout:(id)arg3;
- (id)transitionChildModifierForMainTransitionEvent:(id)arg1 activeGestureModifier:(id)arg2;

@end
