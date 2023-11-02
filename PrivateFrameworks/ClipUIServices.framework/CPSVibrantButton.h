
@interface CPSVibrantButton : UIView {
    UIButton * _button;
    UIVisualEffectView * _effectView;
}

@property (nonatomic, readonly) UIButton *uiButton;

- (void).cxx_destruct;
- (id)initWithButtonType:(long long)arg1;
- (void)setAdjustFontSizeToFitWidth:(bool)arg1;
- (id)uiButton;
- (void)updateCornerRadius;

@end
