
@interface SFStartPageFooterCell : UICollectionViewCell {
    UIAction * _action;
    UIButton * _button;
    UIVisualEffectView * _buttonBackgroundView;
}

@property (nonatomic, retain) UIAction *action;
@property (nonatomic, retain) _UIVisualEffectBackdropView *backdropCaptureView;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_updateVibrancy;
- (id)action;
- (id)backdropCaptureView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)primaryActionTriggered:(id)arg1;
- (void)setAction:(id)arg1;
- (void)setBackdropCaptureView:(id)arg1;

@end
