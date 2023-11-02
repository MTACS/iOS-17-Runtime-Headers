
@interface DBStatusBarHomeButton : UIControl {
    UIImage * _dashboardImage;
    unsigned long long  _displayState;
    UIColor * _focusHighlightColor;
    UIImageView * _focusRingImageView;
    UIImage * _iconsImage;
    UIImageView * _imageView;
}

@property (nonatomic, retain) UIImage *dashboardImage;
@property (nonatomic) unsigned long long displayState;
@property (nonatomic, retain) UIColor *focusHighlightColor;
@property (nonatomic, retain) UIImageView *focusRingImageView;
@property (nonatomic, retain) UIImage *iconsImage;
@property (nonatomic, retain) UIImageView *imageView;

- (void).cxx_destruct;
- (void)_setupImagesIfNecessary;
- (void)_updateDisplayState:(bool)arg1;
- (id)dashboardImage;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (unsigned long long)displayState;
- (id)focusHighlightColor;
- (id)focusRingImageView;
- (id)iconsImage;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setDashboardImage:(id)arg1;
- (void)setDisplayState:(unsigned long long)arg1;
- (void)setFocusHighlightColor:(id)arg1;
- (void)setFocusRingImageView:(id)arg1;
- (void)setIconsImage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;

@end
