
@interface TabThumbnailCloseButton : UIButton {
    UIVisualEffectView * _backdropEffectView;
    UIImageView * _imageView;
    UIVisualEffectView * _vibrantEffectView;
}

@property (nonatomic, retain) UIImage *image;

+ (id)backgroundColor;
+ (double)defaultButtonSize;

- (void).cxx_destruct;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setImage:(id)arg1;

@end
