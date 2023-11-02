
@interface SBContinuousExposePeekTransitionModifier : SBTransitionSwitcherModifier {
    unsigned long long  _direction;
    SBAppLayout * _fromAppLayout;
    SBFullScreenContinuousExposeSwitcherModifier * _fromFullScreenContinuousExposeModifier;
    SBAppLayout * _toAppLayout;
    SBFullScreenContinuousExposeSwitcherModifier * _toFullScreenContinuousExposeModifier;
}

@property (nonatomic, readonly) unsigned long long direction;
@property (nonatomic, readonly) SBAppLayout *fromAppLayout;
@property (nonatomic, readonly) SBAppLayout *toAppLayout;

- (void).cxx_destruct;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (double)blurDelayForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (unsigned long long)direction;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)fromAppLayout;
- (id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3 direction:(unsigned long long)arg4;
- (bool)isLayoutRoleMatchMovedToScene:(long long)arg1 inAppLayout:(id)arg2;
- (double)scaleForIndex:(unsigned long long)arg1;
- (double)scaleForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (id)toAppLayout;
- (id)topMostLayoutElements;
- (id)transitionWillBegin;
- (id)visibleAppLayouts;

@end
