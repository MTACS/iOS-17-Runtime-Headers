
@interface UIKBHandwritingCandidateView : UIKBCandidateView

+ (double)shadowYForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 shadowHeight:(double)arg2;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 keyplane:(id)arg2 key:(id)arg3;
- (void)updateCandidateKey;
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;

@end
