
@interface SBHomeGestureToStashedFloatingSwitcherModifier : SBTransitionSwitcherModifier {
    long long  _floatingConfiguration;
    SBAppLayout * _fromAppLayout;
}

- (void).cxx_destruct;
- (double)_tongueScale;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerViewBounds;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cornerRadiiForIndex:(unsigned long long)arg1;
- (id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toFloatingConfiguration:(long long)arg3;
- (double)scaleForIndex:(unsigned long long)arg1;
- (unsigned long long)slideOverTongueDirection;
- (unsigned long long)slideOverTongueState;

@end
