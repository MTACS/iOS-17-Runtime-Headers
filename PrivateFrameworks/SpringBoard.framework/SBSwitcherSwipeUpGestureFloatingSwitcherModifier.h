
@interface SBSwitcherSwipeUpGestureFloatingSwitcherModifier : SBGestureSwitcherModifier {
    SBDismissSiriSwitcherModifier * _dismissSiriModifier;
    SBGridSwipeUpGestureSwitcherModifier * _gridSwipeUpGestureModifier;
}

- (void).cxx_destruct;
- (double)contentViewScale;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (id)handleGestureEvent:(id)arg1;
- (id)initWithGestureID:(id)arg1;
- (id)responseForProposedChildResponse:(id)arg1 childModifier:(id)arg2 event:(id)arg3;
- (double)scaleForIndex:(unsigned long long)arg1;

@end
