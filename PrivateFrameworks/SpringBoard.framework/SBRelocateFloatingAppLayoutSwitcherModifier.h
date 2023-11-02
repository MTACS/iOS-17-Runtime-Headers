
@interface SBRelocateFloatingAppLayoutSwitcherModifier : SBTransitionSwitcherModifier {
    long long  _direction;
    SBAppLayout * _floatingAppLayout;
    long long  _floatingConfiguration;
    SBSwitcherModifier * _mixedGridModifier;
    bool  _moveFloatingAppToLeadingSide;
}

- (void).cxx_destruct;
- (bool)_comingFromSwitcherWithLeadingFloatingApp;
- (bool)_goingToSwitcherWithLeadingFloatingApp;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (id)handleTimerEvent:(id)arg1;
- (id)initWithTransitionID:(id)arg1 floatingAppLayout:(id)arg2 floatingConfiguration:(long long)arg3 direction:(long long)arg4 mixedGridModifier:(id)arg5;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (double)scaleForIndex:(unsigned long long)arg1;
- (id)transitionDidEnd;
- (id)transitionWillBegin;
- (id)transitionWillUpdate;

@end
