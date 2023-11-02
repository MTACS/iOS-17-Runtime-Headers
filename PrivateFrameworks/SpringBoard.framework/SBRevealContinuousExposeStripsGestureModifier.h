
@interface SBRevealContinuousExposeStripsGestureModifier : SBGestureSwitcherModifier {
    SBAppLayout * _initialAppLayout;
    double  _progress;
}

@property (nonatomic, readonly) SBAppLayout *initialAppLayout;

- (void).cxx_destruct;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (double)continuousExposeStripProgress;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cornerRadiiForIndex:(unsigned long long)arg1;
- (id)handleGestureEvent:(id)arg1;
- (id)handleTransitionEvent:(id)arg1;
- (id)initWithGestureID:(id)arg1 initialAppLayout:(id)arg2;
- (id)initialAppLayout;
- (double)shadowOpacityForLayoutRole:(long long)arg1 atIndex:(unsigned long long)arg2;

@end
