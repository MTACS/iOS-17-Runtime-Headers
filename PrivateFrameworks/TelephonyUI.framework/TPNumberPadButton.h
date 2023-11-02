
@interface TPNumberPadButton : UIControl <TPNumberPadButtonProtocol> {
    UIVisualEffectView * _backDropVisualEffectView;
    UIColor * _buttonColor;
    UIView * _circleView;
    UIColor * _color;
    CALayer * _glyphLayer;
    CALayer * _highlightedGlyphLayer;
    TPRevealingRingView * _revealingRingView;
    long long  character;
}

@property (nonatomic, retain) UIVisualEffectView *backDropVisualEffectView;
@property (nonatomic, readonly) UIColor *buttonColor;
@property long long character;
@property (retain) UIView *circleView;
@property (nonatomic, retain) UIColor *color;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) CALayer *glyphLayer;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIColor *highlightedButtonColor;
@property (retain) CALayer *highlightedGlyphLayer;
@property (nonatomic, readonly) TPRevealingRingView *revealingRingView;
@property (readonly) Class superclass;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })circleBounds;
+ (struct CGSize { double x1; double x2; })defaultSize;
+ (id)disabledImageForCharacter:(long long)arg1;
+ (double)highlightedCircleViewAlpha;
+ (double)horizontalPadding;
+ (id)imageForCharacter:(long long)arg1;
+ (id)imageForCharacter:(long long)arg1 highlighted:(bool)arg2;
+ (id)imageForCharacter:(long long)arg1 highlighted:(bool)arg2 whiteVersion:(bool)arg3;
+ (bool)isCarPlay;
+ (void)loadNumberPadKeyPrototypeView;
+ (id)localizedLettersForCharacter:(long long)arg1;
+ (double)outerCircleDiameter;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })paddingOutsideRing;
+ (void)resetLocale;
+ (void)resetLocaleIfNeeded;
+ (id)scriptKey;
+ (double)unhighlightedCircleViewAlpha;
+ (bool)usesBoldAssets;
+ (bool)usesButtonColorMatrixFilters;
+ (bool)usesButtonSaturationFilters;
+ (bool)usesTelephonyGlyphsWhereAvailable;
+ (double)verticalPadding;

- (void).cxx_destruct;
- (id)backDropVisualEffectView;
- (id)buttonColor;
- (long long)character;
- (id)circleView;
- (id)color;
- (id)defaultColor;
- (id)glyphLayer;
- (void)highlightCircleView:(bool)arg1 animated:(bool)arg2;
- (id)highlightedButtonColor;
- (id)highlightedGlyphLayer;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initForCharacter:(long long)arg1;
- (id)initForCharacter:(long long)arg1 style:(long long)arg2;
- (void)reloadImagesForCurrentCharacter;
- (id)revealingRingView;
- (void)setBackDropVisualEffectView:(id)arg1;
- (void)setCharacter:(long long)arg1;
- (void)setCircleView:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setGlyphLayer:(id)arg1;
- (void)setGreyedOut:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlightedGlyphLayer:(id)arg1;
- (void)touchCancelled;
- (void)touchDown;
- (void)touchUp;

@end
