
@interface PKPaletteReturnKeyButton : PKPaletteButton {
    long long  _axis;
    PKPaletteReturnKeyButtonContentView * _contentView;
    PKTextInputLanguageSelectionToken * _observerToken;
    long long  _returnKeyType;
    double  _scalingFactor;
}

@property (nonatomic) long long axis;
@property (nonatomic, retain) PKPaletteReturnKeyButtonContentView *contentView;
@property (nonatomic, retain) PKTextInputLanguageSelectionToken *observerToken;
@property (nonatomic) long long returnKeyType;

- (void).cxx_destruct;
- (id)_backgroundColor;
- (struct CGSize { double x1; double x2; })_contentViewSize;
- (id)_regularLayoutBackgroundColor;
- (id)_returnKeyImage;
- (id)_returnKeyImageSymbolConfiguration;
- (id)_returnKeyLabelText;
- (id)_returnKeyTintColor;
- (bool)_shouldUseBlueReturnKeyColor;
- (id)_textColor;
- (void)_updateContentViewOrientation;
- (void)_updateImageView;
- (void)_updateLabelText;
- (void)_updateUI;
- (bool)_useCompactLayout;
- (long long)axis;
- (id)contentView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)observerToken;
- (long long)returnKeyType;
- (double)scalingFactor;
- (void)setAxis:(long long)arg1;
- (void)setContentView:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setObserverToken:(id)arg1;
- (void)setReturnKeyType:(long long)arg1;
- (void)setScalingFactor:(double)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
