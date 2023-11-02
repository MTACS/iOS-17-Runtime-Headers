
@interface MKPlaceHeaderButton : UIButton <_MKPlaceActionControlledButton> {
    _MKPlaceActionButtonController * _buttonController;
    bool  _buttonHighlighted;
    unsigned long long  _buttonType;
    NSLayoutConstraint * _heightConstraint;
    bool  _primary;
    MKVibrantView * _vibrantView;
}

@property (nonatomic) _MKPlaceActionButtonController *buttonController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (bool)_isTintColorWhite;
- (id)_primaryButtonColor;
- (id)_primaryButtonTextColor;
- (void)_setVibrantView;
- (void)_updateStyleNonPrimaryButton;
- (void)_updateStylePrimaryButton;
- (void)applyButtonDefaultConfiguration;
- (id)buttonController;
- (void)buttonSelected:(id)arg1;
- (void)infoCardThemeChanged;
- (id)init;
- (id)initWithPrimaryType:(unsigned long long)arg1;
- (void)placeActionButtonControllerTextDidChange:(id)arg1;
- (void)setButtonController:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setPrimaryTitle:(id)arg1;
- (void)setPrimaryTitle:(id)arg1 subtitle:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)updateButtonWithHighlighted:(bool)arg1;

@end
