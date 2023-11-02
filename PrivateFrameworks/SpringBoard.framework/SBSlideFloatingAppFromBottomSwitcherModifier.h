
@interface SBSlideFloatingAppFromBottomSwitcherModifier : SBTransitionSwitcherModifier <BSDescriptionProviding> {
    SBAppLayout * _fromFloatingAppLayout;
    SBAppLayout * _toFloatingAppLayout;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (double)dimmingAlphaForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (id)initWithTransitionID:(id)arg1 fromFloatingAppLayout:(id)arg2 toFloatingAppLayout:(id)arg3;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (double)scaleForIndex:(unsigned long long)arg1;
- (id)transitionWillBegin;
- (id)visibleAppLayouts;

@end
