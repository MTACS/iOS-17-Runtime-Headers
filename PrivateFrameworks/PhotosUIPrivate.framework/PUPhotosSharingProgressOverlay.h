
@interface PUPhotosSharingProgressOverlay : UIView {
    UIWindow * _cachedMainWindow;
    bool  _isShowing;
    UIView * _progressView;
}

@property (nonatomic) UIWindow *cachedMainWindow;
@property (nonatomic, retain) UIView *progressView;

- (void).cxx_destruct;
- (id)_grayScaleImageFromImage:(id)arg1;
- (void)_installInStatusBarWindow;
- (id)_mainWindow;
- (id)_screenshotImage;
- (void)_setupOverlayAnimated:(bool)arg1;
- (void)_tearDownOverlayAnimated:(bool)arg1;
- (void)addProgressView:(id)arg1;
- (id)cachedMainWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)progressView;
- (void)setCachedMainWindow:(id)arg1;
- (void)setProgressView:(id)arg1;
- (void)setShowing:(bool)arg1 animated:(bool)arg2;
- (void)willRemoveSubview:(id)arg1;

@end
