
@interface SBMedusaWindowDragGestureRootSwitcherModifier : SBGestureRootSwitcherModifier {
    SBAppLayout * _currentFloatingAppLayout;
    long long  _currentFloatingConfiguration;
    SBAppLayout * _currentMainAppLayout;
    struct CGPoint { 
        double x; 
        double y; 
    }  _gestureVelocity;
    SBAppLayout * _selectedLeafAppLayout;
}

- (void).cxx_destruct;
- (id)appLayoutsToEnsureExistForMainTransitionEvent:(id)arg1;
- (id)gestureChildModifierForGestureEvent:(id)arg1 activeTransitionModifier:(id)arg2;
- (long long)gestureType;
- (id)handleGestureEvent:(id)arg1;
- (id)handleTransitionEvent:(id)arg1;
- (id)initWithSelectedLeafAppLayout:(id)arg1 currentMainAppLayout:(id)arg2 currentFloatingAppLayout:(id)arg3 currentFloatingConfiguration:(long long)arg4;
- (id)transitionChildModifierForMainTransitionEvent:(id)arg1 activeGestureModifier:(id)arg2;

@end
