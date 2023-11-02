
@interface SBHomeGestureRootSwitcherModifier : SBGestureRootSwitcherModifier {
    bool  _ensuresSelectedAppLayoutUsesAnchorPointSpacePinning;
    SBSwitcherModifier * _multitaskingModifier;
    bool  _resignsTransitionIntoAppSwitcher;
}

@property (nonatomic) bool ensuresSelectedAppLayoutUsesAnchorPointSpacePinning;
@property (nonatomic) bool resignsTransitionIntoAppSwitcher;

- (void).cxx_destruct;
- (id)_newMultitaskingModifier;
- (bool)ensuresSelectedAppLayoutUsesAnchorPointSpacePinning;
- (id)gestureChildModifierForGestureEvent:(id)arg1 activeTransitionModifier:(id)arg2;
- (long long)gestureType;
- (id)initWithStartingEnvironmentMode:(long long)arg1 multitaskingModifier:(id)arg2;
- (bool)resignsTransitionIntoAppSwitcher;
- (void)setEnsuresSelectedAppLayoutUsesAnchorPointSpacePinning:(bool)arg1;
- (void)setResignsTransitionIntoAppSwitcher:(bool)arg1;
- (bool)shouldPinLayoutRolesToSpace:(unsigned long long)arg1;
- (bool)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)arg1;
- (id)transitionChildModifierForMainTransitionEvent:(id)arg1 activeGestureModifier:(id)arg2;
- (bool)wantsAsynchronousSurfaceRetentionAssertion;

@end
