
@interface SBDeckContinuityToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout * _appLayout;
    SBSwitcherModifier * _fullscreenModifier;
}

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_initialFrameForContinuityAppLayout;
- (bool)_isInsertingIndex:(unsigned long long)arg1;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cornerRadiiForIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (id)initWithTransitionID:(id)arg1 appLayout:(id)arg2 deckModifier:(id)arg3 fullscreenModifier:(id)arg4;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (double)scaleForIndex:(unsigned long long)arg1;
- (double)titleAndIconOpacityForIndex:(unsigned long long)arg1;
- (double)titleOpacityForIndex:(unsigned long long)arg1;
- (id)transitionWillBegin;
- (id)visibleAppLayouts;

@end
