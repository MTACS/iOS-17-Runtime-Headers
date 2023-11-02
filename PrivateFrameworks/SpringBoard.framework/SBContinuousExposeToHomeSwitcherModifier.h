
@interface SBContinuousExposeToHomeSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppSwitcherContinuousExposeSwitcherModifier * _continuousExposeModifier;
    long long  _direction;
}

- (void).cxx_destruct;
- (bool)_isEffectivelyHome;
- (id)_newContinuousExposeModifier;
- (struct CGPoint { double x1; double x2; })adjustedSpaceAccessoryViewAnchorPoint:(struct CGPoint { double x1; double x2; })arg1 forAppLayout:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustedSpaceAccessoryViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forAppLayout:(id)arg2;
- (struct CGPoint { double x1; double x2; })anchorPointForIndex:(unsigned long long)arg1;
- (long long)headerStyleForIndex:(unsigned long long)arg1;
- (long long)homeScreenBackdropBlurType;
- (id)initWithTransitionID:(id)arg1 direction:(long long)arg2 continuousExposeModifier:(id)arg3;
- (double)perspectiveAngleForAppLayout:(id)arg1;
- (long long)shadowStyleForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (bool)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)arg1;

@end
