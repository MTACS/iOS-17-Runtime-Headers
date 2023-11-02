
@interface LPImageView : LPComponentView {
    UIView * _backgroundView;
    long long  _currentScalingMode;
    LPImage * _filteredImage;
    LPImage * _image;
    UIImageView * _imageView;
    LPImageViewStyle * _originalStyle;
    UIView * _overlayView;
    long long  _platterReason;
    LPImagePresentationProperties * _properties;
    LPImageViewStyle * _style;
}

- (void).cxx_destruct;
- (id)_createImageViewWithImage:(id)arg1;
- (id)_createOverlayViewWithOpacity:(double)arg1;
- (long long)_filter;
- (void)_setImageViewScalingMode:(long long)arg1;
- (void)_updateScalingMode;
- (void)_userInterfaceStyleDidChange:(id)arg1;
- (void)ensureImageView;
- (struct CGSize { double x1; double x2; })imageSizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithHost:(id)arg1;
- (id)initWithHost:(id)arg1 image:(id)arg2 properties:(id)arg3 style:(id)arg4;
- (void)installDarkeningViewIfNeeded;
- (void)layoutComponentView;
- (long long)scalingModeForSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)shouldApplyBackground;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateBorder;
- (void)updateCornerRadius;
- (void)updateShadowPath;

@end
