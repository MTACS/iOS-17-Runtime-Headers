
@interface SBPIPRestoreToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout * _fromAppLayout;
    bool  _shouldClippingTakeShadowIntoAccount;
    bool  _shouldForceDefaultAnchorPointForTransition;
    SBAppLayout * _toAppLayout;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _toAppLayoutBoundingBox;
    long long  _toLayoutRole;
}

@property (nonatomic) bool shouldClippingTakeShadowIntoAccount;
@property (nonatomic) bool shouldForceDefaultAnchorPointForTransition;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_insetFrameForDiffuseShadowRadius:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_isFromAppLayoutIndex:(unsigned long long)arg1;
- (bool)_isToAppLayout:(id)arg1;
- (bool)_isToAppLayoutIndex:(unsigned long long)arg1;
- (bool)_isToOrFromAppLayout:(id)arg1;
- (bool)_isToOrFromAppLayoutIndex:(unsigned long long)arg1;
- (struct CGPoint { double x1; double x2; })adjustedSpaceAccessoryViewAnchorPoint:(struct CGPoint { double x1; double x2; })arg1 forAppLayout:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustedSpaceAccessoryViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forAppLayout:(id)arg2;
- (struct CGPoint { double x1; double x2; })anchorPointForIndex:(unsigned long long)arg1;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clippingFrameForIndex:(unsigned long long)arg1 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clippingFrameForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (bool)clipsToBoundsAtIndex:(unsigned long long)arg1;
- (bool)completesWhenChildrenComplete;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cornerRadiiForIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (id)initWithTransitionID:(id)arg1 transitionModifier:(id)arg2 fromAppLayout:(id)arg3 toAppLayout:(id)arg4 toLayoutRole:(long long)arg5;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (double)perspectiveAngleForAppLayout:(id)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (void)setShouldClippingTakeShadowIntoAccount:(bool)arg1;
- (void)setShouldForceDefaultAnchorPointForTransition:(bool)arg1;
- (bool)shouldClippingTakeShadowIntoAccount;
- (bool)shouldForceDefaultAnchorPointForTransition;
- (bool)shouldPinLayoutRolesToSpace:(unsigned long long)arg1;
- (bool)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)arg1;
- (id)transitionWillBegin;
- (id)visibleAppLayouts;
- (id)visibleHomeAffordanceLayoutElements;

@end
