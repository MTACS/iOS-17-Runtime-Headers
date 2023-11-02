
@interface VKCImageDataDetectorViewHighlightButton : VKPlatformView {
    UIImageView * _blurImageView;
    UIImageView * _imageView;
    double  _rotation;
}

@property (nonatomic, retain) UIImageView *blurImageView;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic) double rotation;

- (void).cxx_destruct;
- (id)blurImage:(id)arg1 withRadius:(double)arg2;
- (id)blurImageView;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)rotation;
- (void)setBlurImageView:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImageView:(id)arg1;
- (void)setRotation:(double)arg1;

@end
