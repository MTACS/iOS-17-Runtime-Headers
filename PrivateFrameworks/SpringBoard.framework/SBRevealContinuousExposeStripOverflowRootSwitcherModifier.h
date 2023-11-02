
@interface SBRevealContinuousExposeStripOverflowRootSwitcherModifier : SBGestureRootSwitcherModifier {
    SBAppLayout * _initialAppLayout;
}

@property (nonatomic, readonly) SBAppLayout *initialAppLayout;

- (void).cxx_destruct;
- (id)gestureChildModifierForGestureEvent:(id)arg1 activeTransitionModifier:(id)arg2;
- (long long)gestureType;
- (id)initWithInitialAppLayout:(id)arg1;
- (id)initialAppLayout;
- (id)transitionChildModifierForMainTransitionEvent:(id)arg1 activeGestureModifier:(id)arg2;

@end
