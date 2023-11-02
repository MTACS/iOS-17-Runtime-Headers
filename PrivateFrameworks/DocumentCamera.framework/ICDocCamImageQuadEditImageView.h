
@interface ICDocCamImageQuadEditImageView : UIView {
    UIImage * _image;
    CALayer * _imageLayer;
    double  _imageOpacity;
    long long  _orientation;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) CALayer *imageLayer;
@property (nonatomic) double imageOpacity;
@property (nonatomic) long long orientation;

- (void).cxx_destruct;
- (bool)accessibilityIgnoresInvertColors;
- (id)image;
- (id)imageLayer;
- (double)imageOpacity;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)orientation;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImage:(id)arg1;
- (void)setImage:(id)arg1 orientation:(long long)arg2;
- (void)setImageLayer:(id)arg1;
- (void)setImageOpacity:(double)arg1;
- (void)setOrientation:(long long)arg1;

@end
