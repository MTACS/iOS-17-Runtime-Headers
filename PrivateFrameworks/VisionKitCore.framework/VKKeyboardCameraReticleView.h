
@interface VKKeyboardCameraReticleView : UIView {
    bool  _hasSetReticleRect;
    CEKSubjectIndicatorView * _reticleView;
    UIView * _spotlightView;
}

@property (nonatomic) double invertedShadowAlpha;
@property (nonatomic) double reticleAlpha;
@property (nonatomic) double spotlightBlurRadius;

+ (void)animate:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)collapseReticleRect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)invertedShadowAlpha;
- (void)layoutSubviews;
- (double)reticleAlpha;
- (void)setInvertedShadowAlpha:(double)arg1;
- (void)setReticleAlpha:(double)arg1;
- (void)setReticleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 angle:(double)arg2;
- (void)setSpotlightBlurRadius:(double)arg1;
- (double)spotlightBlurRadius;

@end
