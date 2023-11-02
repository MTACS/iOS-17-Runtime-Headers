
@interface SBPeekToOffscreenSwitcherModifier : SBTransitionSwitcherModifier {
    long long  _peekConfiguration;
    SBAppLayout * _peekingAppLayout;
    long long  _spaceConfiguration;
}

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (id)initWithTransitionID:(id)arg1 peekingAppLayout:(id)arg2 peekConfiguration:(long long)arg3 spaceConfiguration:(long long)arg4;
- (bool)isSwitcherWindowVisible;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setState:(long long)arg1;

@end
