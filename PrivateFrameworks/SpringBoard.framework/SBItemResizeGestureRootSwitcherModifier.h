
@interface SBItemResizeGestureRootSwitcherModifier : SBGestureRootSwitcherModifier {
    long long  _selectedLayoutRole;
}

@property (nonatomic, readonly) long long selectedLayoutRole;

- (id)appLayoutsToResignActive;
- (id)gestureChildModifierForGestureEvent:(id)arg1 activeTransitionModifier:(id)arg2;
- (long long)gestureType;
- (id)initWithStartingEnvironmentMode:(long long)arg1 selectedLayoutRole:(long long)arg2;
- (long long)selectedLayoutRole;
- (id)transitionChildModifierForMainTransitionEvent:(id)arg1 activeGestureModifier:(id)arg2;

@end
