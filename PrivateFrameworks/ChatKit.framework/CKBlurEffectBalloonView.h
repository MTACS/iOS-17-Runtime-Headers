
@interface CKBlurEffectBalloonView : CKImageBalloonView {
    UIVisualEffectView * _blurEffectView;
    UIView * _commSafetyBadgeView;
}

@property (nonatomic, retain) UIVisualEffectView *blurEffectView;
@property (nonatomic, retain) UIView *commSafetyBadgeView;

- (void).cxx_destruct;
- (id)blurEffectView;
- (id)commSafetyBadgeView;
- (id)description;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setBlurEffectView:(id)arg1;
- (void)setCommSafetyBadgeView:(id)arg1;

@end
