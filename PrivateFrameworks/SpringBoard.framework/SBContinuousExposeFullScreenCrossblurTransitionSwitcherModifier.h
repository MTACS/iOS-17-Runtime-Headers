
@interface SBContinuousExposeFullScreenCrossblurTransitionSwitcherModifier : SBTransitionSwitcherModifier {
    long long  _animationPhase;
    SBAppLayout * _fromAppLayout;
    NSString * _timerReason;
    SBAppLayout * _toAppLayout;
    struct UIRectCornerRadii { 
        double topLeft; 
        double bottomLeft; 
        double bottomRight; 
        double topRight; 
    }  _toAppLayoutInitialCornerRadius;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _toAppLayoutInitialFrame;
    double  _toAppLayoutInitialScale;
}

- (void).cxx_destruct;
- (id)_updateLayoutWithAnimationUpdateMode:(long long)arg1 appendResponse:(id)arg2;
- (struct CGPoint { double x1; double x2; })anchorPointForIndex:(unsigned long long)arg1;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cornerRadiiForIndex:(unsigned long long)arg1;
- (void)didMoveToParentModifier:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (id)handleTimerEvent:(id)arg1;
- (id)initWithTransitionID:(id)arg1 toAppLayout:(id)arg2 fromAppLayout:(id)arg3;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (double)perspectiveAngleForAppLayout:(id)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (bool)shouldAllowGroupOpacityForAppLayout:(id)arg1;
- (double)titleAndIconOpacityForIndex:(unsigned long long)arg1;
- (id)transitionWillUpdate;

@end
