
@interface CKSendAnimationWindow : UIAutoRotatingWindow {
    CKGradientReferenceView * _gradientReferenceView;
}

@property (nonatomic, retain) CKGradientReferenceView *gradientReferenceView;

- (void).cxx_destruct;
- (bool)_canAffectStatusBarAppearance;
- (id)gradientReferenceView;
- (id)initWithWindowScene:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setGradientReferenceView:(id)arg1;

@end
