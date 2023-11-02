
@interface SBHomeGestureRootFloatingSwitcherModifier : SBGestureRootSwitcherModifier {
    long long  _floatingConfiguration;
    SBSwitcherModifier * _multitaskingModifier;
}

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameWithScaleAppliedForIndex:(unsigned long long)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)gestureChildModifierForGestureEvent:(id)arg1 activeTransitionModifier:(id)arg2;
- (long long)gestureType;
- (id)initWithMultitaskingModifier:(id)arg1 floatingConfiguration:(long long)arg2;
- (id)transitionChildModifierForMainTransitionEvent:(id)arg1 activeGestureModifier:(id)arg2;

@end
