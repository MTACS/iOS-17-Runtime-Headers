
@interface UIKBBackdropView : UIVisualEffectView {
    UIImage * _imageForCorners;
}

@property (nonatomic, retain) UIImage *imageForCorners;

- (void).cxx_destruct;
- (bool)_applyCornerMaskToSelf;
- (id)_generateCornerContentsImage:(unsigned long long)arg1;
- (void)_setRenderConfig:(id)arg1;
- (id)imageForCorners;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2;
- (void)setImageForCorners:(id)arg1;
- (int)textEffectsVisibilityLevel;
- (void)transitionToStyle:(long long)arg1;
- (void)updateCorners:(unsigned long long)arg1;
- (void)updateFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withCorners:(unsigned long long)arg2;

@end
