
@interface SFCloseButton : UIButton {
    UIVisualEffectView * _blurEffectView;
    UIImageView * _imageView;
    UIView * _opaqueBackgroundView;
    double  _opaqueBackgroundVisibility;
    UIImageView * _opaqueImageView;
    long long  _style;
    UIVisualEffectView * _vibrantEffectView;
}

@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic) double opaqueBackgroundVisibility;

- (void).cxx_destruct;
- (id)_makeXmarkImageView;
- (id)imageView;
- (id)initWithStyle:(long long)arg1 primaryAction:(id)arg2;
- (void)layoutSubviews;
- (double)opaqueBackgroundVisibility;
- (void)setOpaqueBackgroundVisibility:(double)arg1;

@end
