
@interface MKCatalystButton : UIButton <_MKPlaceActionControlledButton> {
    _MKPlaceActionButtonController * _buttonController;
    CALayer * _extraShadowLayer;
    CAGradientLayer * _gradientLayer;
    bool  _isPrimaryButton;
    NSAttributedString * _subTitle;
    NSAttributedString * _title;
}

@property (nonatomic) _MKPlaceActionButtonController *buttonController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CALayer *extraShadowLayer;
@property (nonatomic, retain) CAGradientLayer *gradientLayer;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isPrimaryButton;
@property (nonatomic, retain) NSAttributedString *subTitle;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSAttributedString *title;

+ (id)catalystButton;
+ (struct CGColor { }*)extraShadowLayerBackgroundColorWithDarkMode:(bool)arg1 isbuttonEnabled:(bool)arg2;
+ (id)titleFont;

- (void).cxx_destruct;
- (id)_attributedStringForSubTitle:(id)arg1 controlState:(unsigned long long)arg2;
- (id)_attributedStringForTitle:(id)arg1 controlState:(unsigned long long)arg2;
- (id)_attributedStringWithTitle:(id)arg1 subtitle:(id)arg2 controlState:(unsigned long long)arg3;
- (void)_updateColors;
- (void)applyBorder:(bool)arg1;
- (id)buttonController;
- (void)buttonSelected:(id)arg1;
- (void)didMoveToSuperview;
- (id)extraShadowLayer;
- (id)gradientLayer;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isPrimaryButton;
- (void)layoutSubviews;
- (void)placeActionButtonControllerTextDidChange:(id)arg1;
- (void)setButtonController:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setExtraShadowLayer:(id)arg1;
- (void)setGradientLayer:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setIsPrimaryButton:(bool)arg1;
- (void)setPrimaryTitle:(id)arg1;
- (void)setPrimaryTitle:(id)arg1 subtitle:(id)arg2;
- (void)setSubTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subTitle;
- (id)title;
- (void)traitEnvironment:(id)arg1 didChangeTraitCollection:(id)arg2;

@end
