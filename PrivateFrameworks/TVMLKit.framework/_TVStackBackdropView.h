
@interface _TVStackBackdropView : UIView {
    long long  _blurEffectStyle;
    UIImage * _image;
    UIImageView * _imageView;
    UIVisualEffectView * _visualEffectView;
}

@property (nonatomic) long long blurEffectStyle;
@property (nonatomic, retain) UIImage *image;

- (void).cxx_destruct;
- (long long)blurEffectStyle;
- (id)image;
- (id)initWithBlurEffectStyle:(long long)arg1;
- (void)layoutSubviews;
- (void)setBlurEffectStyle:(long long)arg1;
- (void)setImage:(id)arg1;

@end
