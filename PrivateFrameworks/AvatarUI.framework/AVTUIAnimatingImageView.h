
@interface AVTUIAnimatingImageView : UIView {
    UIImageView * _fadeInImageView;
    UIImage * _image;
    UIImageView * _imageView;
}

@property (nonatomic, readonly) UIImageView *fadeInImageView;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) UIImageView *imageView;

- (void).cxx_destruct;
- (id)fadeInImageView;
- (id)image;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentMode:(long long)arg1;
- (void)setContinuousCornerRadius:(double)arg1;
- (void)setImage:(id)arg1;
- (void)setImage:(id)arg1 animated:(bool)arg2;

@end
