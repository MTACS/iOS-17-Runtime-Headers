
@interface PREditingButton : UIButton {
    UIView * _backgroundColorView;
    MTMaterialView * _backgroundView;
    UIImageView * _contentImageView;
    PREditingButtonMaterialView * _materialView;
    long long  _style;
}

@property (nonatomic, readonly) UIView *backgroundColorView;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } backgroundInsets;
@property (nonatomic, retain) MTMaterialView *backgroundView;
@property (nonatomic, readonly) UIImageView *contentImageView;
@property (nonatomic, readonly) UIImage *defaultContentImage;
@property (nonatomic, readonly) PREditingButtonMaterialView *materialView;
@property (nonatomic, readonly) long long style;

- (void).cxx_destruct;
- (void)_didInvalidateContentImageMetrics;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)backgroundColorView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })backgroundInsets;
- (id)backgroundView;
- (id)contentImageView;
- (id)defaultContentImage;
- (id)initWithStyle:(long long)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 primaryAction:(id)arg3;
- (void)layoutSubviews;
- (id)materialView;
- (void)setBackgroundView:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (long long)style;

@end
