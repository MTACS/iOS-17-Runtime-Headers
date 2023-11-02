
@interface UITableViewCellEditControl : UIControl {
    UIColor * _accessoryBackgroundColor;
    UIColor * _accessoryTintColor;
    UITableViewCell * _cell;
    double  _focalHeight;
    double  _focalY;
    UIImageView * _imageView;
    unsigned int  _reserved;
    unsigned int  _rotated;
    unsigned int  _rotating;
    UIImageView * _shadowView;
    unsigned int  _style;
}

@property (nonatomic, retain) UIColor *accessoryBackgroundColor;
@property (nonatomic, retain) UIColor *accessoryTintColor;
@property (getter=isRotated, nonatomic) bool rotated;
@property (nonatomic, readonly) bool wantsImageShadow;
@property (nonatomic, readonly) bool wantsMaskingWhileAnimatingDisabled;

- (void).cxx_destruct;
- (id)__scalarStatisticsForUserTouchUpInsideEvent;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)_createImageViewIfNecessary;
- (id)_currentImage;
- (id)_deleteImage;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)_imageView;
- (id)_insertImage;
- (id)_multiSelectNotSelectedImage;
- (id)_multiSelectSelectedImage;
- (void)_multiselectColorChanged;
- (id)_renderedImage;
- (id)_shadowImage;
- (void)_toggleRotate;
- (void)_toggleRotateAnimationDidStop;
- (void)_updateImageView;
- (id)accessoryBackgroundColor;
- (id)accessoryTintColor;
- (void)adjustLayoutForFocalRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })defaultSize;
- (id)initWithTableViewCell:(id)arg1 editingStyle:(long long)arg2;
- (bool)isRotated;
- (bool)isRotating;
- (void)layoutSubviews;
- (void)setAccessoryBackgroundColor:(id)arg1;
- (void)setAccessoryTintColor:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setRotated:(bool)arg1;
- (void)setRotated:(bool)arg1 animated:(bool)arg2;
- (void)setSelected:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (bool)wantsImageShadow;
- (bool)wantsMaskingWhileAnimatingDisabled;

@end
