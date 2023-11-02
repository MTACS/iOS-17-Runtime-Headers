
@interface AAUIImageControl : UIControl {
    UIImageView * _imageView;
    AAUILabel * _label;
    UIView * _overlayView;
}

@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, readonly) AAUILabel *label;

- (void).cxx_destruct;
- (void)_updateLabelVisibility;
- (void)_updateOverlayViewVisibility;
- (id)imageView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;

@end