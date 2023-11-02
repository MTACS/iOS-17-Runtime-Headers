
@interface SFInteractiveBannerCell : UICollectionViewCell {
    UIButton * _actionButton;
    UIVisualEffectView * _backgroundEffectView;
    id /* block */  _buttonAction;
    UILabel * _captionLabel;
    UILabel * _leadingLabel;
    UILayoutGuide * _textLayoutGuide;
}

@property (nonatomic, retain) _UIVisualEffectBackdropView *backdropCaptureView;
@property (nonatomic, readonly) UILabel *captionLabel;
@property (nonatomic, readonly) UILabel *leadingLabel;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_actionButtonTapped:(id)arg1;
- (void)_removeActionButton;
- (void)_updateActionButtonWithText:(id)arg1;
- (void)_updateVibrancy;
- (id)backdropCaptureView;
- (id)captionLabel;
- (void)configureUsingBanner:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)leadingLabel;
- (void)setBackdropCaptureView:(id)arg1;
- (void)setHighlighted:(bool)arg1;

@end
