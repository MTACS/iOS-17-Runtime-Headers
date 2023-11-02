
@interface SBHomeScreenButton : UIButton {
    UIView * _backgroundView;
    SBHomeScreenMaterialView * _materialView;
}

@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } backgroundInsets;
@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, readonly) UIImage *defaultContentImage;
@property (nonatomic, readonly) SBHomeScreenMaterialView *materialView;

- (void).cxx_destruct;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })backgroundInsets;
- (id)backgroundView;
- (id)defaultContentImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 backgroundView:(id)arg2;
- (void)layoutSubviews;
- (id)materialView;
- (void)setBackgroundView:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;

@end
