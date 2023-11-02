
@interface HULayeredVisualEffectView : UIView {
    HULayeredBackgroundEffect * _backgroundEffect;
    double  _backgroundEffectAlpha;
    UIVisualEffectView * _backgroundEffectView;
    UIView * _backgroundFillView;
    HULayeredContentEffect * _contentEffect;
    double  _contentEffectAlpha;
    UIVisualEffectView * _contentEffectView;
    double  _cornerRadius;
}

@property (nonatomic, retain) HULayeredBackgroundEffect *backgroundEffect;
@property (nonatomic) double backgroundEffectAlpha;
@property (nonatomic, retain) UIVisualEffectView *backgroundEffectView;
@property (nonatomic, retain) UIView *backgroundFillView;
@property (nonatomic, retain) HULayeredContentEffect *contentEffect;
@property (nonatomic) double contentEffectAlpha;
@property (nonatomic, retain) UIVisualEffectView *contentEffectView;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic) double cornerRadius;

- (void).cxx_destruct;
- (void)_applyCornerRadius;
- (void)_updateBackgroundEffects;
- (void)_updateContentEffects;
- (void)_updateSubviewOrder;
- (id)backgroundEffect;
- (double)backgroundEffectAlpha;
- (id)backgroundEffectView;
- (id)backgroundFillView;
- (id)contentEffect;
- (double)contentEffectAlpha;
- (id)contentEffectView;
- (id)contentView;
- (double)cornerRadius;
- (id)initWithContentEffect:(id)arg1 backgroundEffect:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBackgroundEffect:(id)arg1;
- (void)setBackgroundEffectAlpha:(double)arg1;
- (void)setBackgroundEffectView:(id)arg1;
- (void)setBackgroundFillView:(id)arg1;
- (void)setContentEffect:(id)arg1;
- (void)setContentEffectAlpha:(double)arg1;
- (void)setContentEffectView:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;

@end
