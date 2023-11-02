
@interface SBMoveGestureRootFloatingSwitcherModifier : SBGestureRootSwitcherModifier {
    long long  _currentFloatingConfiguration;
    long long  _interfaceOrientation;
}

@property (nonatomic) long long currentFloatingConfiguration;
@property (nonatomic) long long interfaceOrientation;

- (long long)currentFloatingConfiguration;
- (id)gestureChildModifierForGestureEvent:(id)arg1 activeTransitionModifier:(id)arg2;
- (long long)gestureType;
- (id)handleTransitionEvent:(id)arg1;
- (id)initWithInitialFloatingConfiguration:(long long)arg1 interfaceOrientation:(long long)arg2;
- (long long)interfaceOrientation;
- (void)setCurrentFloatingConfiguration:(long long)arg1;
- (void)setInterfaceOrientation:(long long)arg1;
- (bool)shouldPerformCrossfadeForReduceMotion;
- (id)transitionChildModifierForMainTransitionEvent:(id)arg1 activeGestureModifier:(id)arg2;

@end
