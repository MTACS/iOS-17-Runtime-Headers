
@interface NANowPlayingBackgroundView : UIView {
    UIImageView * _imageView;
    UIVisualEffectView * _visualEffectsView;
}

@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, readonly) UIVisualEffectView *visualEffectsView;

- (void).cxx_destruct;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImage:(id)arg1;
- (id)visualEffectsView;

@end
