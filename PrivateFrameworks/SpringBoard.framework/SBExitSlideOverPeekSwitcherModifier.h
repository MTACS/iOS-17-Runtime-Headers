
@interface SBExitSlideOverPeekSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout * _floatingAppLayout;
    long long  _floatingConfiguration;
}

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (id)initWithTransitionID:(id)arg1 floatingAppLayout:(id)arg2 floatingConfiguration:(long long)arg3;

@end
