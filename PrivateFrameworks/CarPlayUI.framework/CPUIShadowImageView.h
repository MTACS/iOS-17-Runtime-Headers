
@interface CPUIShadowImageView : UIView {
    UIImage * _image;
    UIImageView * _imageView;
    UIImage * _placeholderImage;
    UIImageView * _placeholderView;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, retain) UIImage *placeholderImage;
@property (nonatomic, readonly) UIImageView *placeholderView;

- (void).cxx_destruct;
- (bool)_isDarkMode;
- (long long)contentMode;
- (id)image;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)placeholderImage;
- (id)placeholderView;
- (void)setContentMode:(long long)arg1;
- (void)setImage:(id)arg1;
- (void)setNeedsDisplay;
- (void)setPlaceholderImage:(id)arg1;
- (void)setupEffects;
- (void)traitCollectionDidChange:(id)arg1;

@end
