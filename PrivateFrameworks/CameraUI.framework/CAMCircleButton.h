
@interface CAMCircleButton : UIButton {
    UIImageView * __backgroundView;
    UIImageView * __imageView;
    CAMSlashContainer * __slashView;
}

@property (nonatomic, readonly) UIImageView *_backgroundView;
@property (nonatomic, readonly) UIImageView *_imageView;
@property (setter=_setSlashView:, nonatomic, retain) CAMSlashContainer *_slashView;
@property (nonatomic) long long orientation;

- (void).cxx_destruct;
- (id)_backgroundView;
- (id)_createCircleImageForContentSize:(id)arg1;
- (id)_imageView;
- (void)_setSlashView:(id)arg1;
- (id)_slashView;
- (void)_updateBackgroundImage;
- (id)imageNameForAXHUD;
- (id)imageNameForCurrentState;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (long long)orientation;
- (void)setHighlighted:(bool)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2;
- (bool)shouldShowSlashForCurrentState;
- (bool)shouldUseActiveTintForCurrentState;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateImage;
- (void)updateSlashAnimated:(bool)arg1;
- (void)updateTintColors;

@end
