
@interface PLCropOverlayPreviewBottomBar : UIView {
    long long  _backgroundStyle;
    UIButton * _cancelButton;
    UIButton * _doneButton;
    UIButton * _fileResizingButton;
    UIButton * _playbackButton;
}

@property (nonatomic) long long backgroundStyle;
@property (nonatomic, readonly) UIButton *cancelButton;
@property (nonatomic, readonly) UIButton *doneButton;
@property (nonatomic, readonly) UIButton *fileResizingButton;
@property (nonatomic, readonly) UIButton *playbackButton;

- (void)_commonPLCropOverlayEditPhotoBottomBarInitialization;
- (void)_updateBackgroundStyle;
- (long long)backgroundStyle;
- (id)cancelButton;
- (void)dealloc;
- (id)doneButton;
- (id)fileResizingButton;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)playbackButton;
- (void)safeAreaInsetsDidChange;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setBackgroundStyle:(long long)arg1 animated:(bool)arg2;

@end
