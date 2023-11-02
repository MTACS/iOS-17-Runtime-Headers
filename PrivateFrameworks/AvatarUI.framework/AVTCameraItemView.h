
@interface AVTCameraItemView : UIView {
    UIImageSymbolConfiguration * _cameraConfiguration;
    UIImageView * _imageView;
    CAShapeLayer * _shapeLayer;
}

@property (nonatomic, retain) UIImageSymbolConfiguration *cameraConfiguration;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) CAShapeLayer *shapeLayer;

- (void).cxx_destruct;
- (id)cameraConfiguration;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setCameraConfiguration:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setShapeLayer:(id)arg1;
- (id)shapeLayer;
- (void)updateCameraImage;

@end
