
@interface SBGestureRootSwitcherModifier : SBSwitcherModifier {
    long long  _currentEnvironmentMode;
    SBSwitcherModifier * _gestureModifierBeforeHandlingEvent;
    SBAppLayout * _selectedAppLayout;
    SBSwitcherModifier * _transitionModifierBeforeHandlingEvent;
}

@property (nonatomic, readonly) bool canTransitionWithoutGestureModifier;
@property (nonatomic, readonly) long long currentEnvironmentMode;
@property (nonatomic, readonly) SBSwitcherModifier *gestureModifier;
@property (nonatomic, readonly) SBAppLayout *selectedAppLayout;
@property (nonatomic, readonly) SBSwitcherModifier *transitionModifier;

- (void).cxx_destruct;
- (bool)canTransitionWithoutGestureModifier;
- (bool)completesWhenChildrenComplete;
- (long long)currentEnvironmentMode;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)gestureChildModifierForGestureEvent:(id)arg1 activeTransitionModifier:(id)arg2;
- (id)gestureModifier;
- (long long)gestureType;
- (id)handleEvent:(id)arg1;
- (id)handleGestureEvent:(id)arg1;
- (id)handleRemovalEvent:(id)arg1;
- (id)handleTransitionEvent:(id)arg1;
- (id)initWithStartingEnvironmentMode:(long long)arg1;
- (id)selectedAppLayout;
- (id)transitionChildModifierForMainTransitionEvent:(id)arg1 activeGestureModifier:(id)arg2;
- (id)transitionModifier;

@end
