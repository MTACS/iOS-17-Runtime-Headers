
@interface SBLightPasscodeNumberPadButton : TPNumberPadLightStyleButton <SBUIPasscodeNumberPadButton> {
    UIColor * _reduceTransparencyButtonColor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIColor *reduceTransparencyButtonColor;
@property (readonly) Class superclass;

+ (double)_numberPadButtonOuterCircleDiameter;
+ (bool)_shouldUseAlternativeCirlceViewAlphas;
+ (struct CGSize { double x1; double x2; })defaultSize;
+ (double)highlightedCircleViewAlpha;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })paddingOutsideRing;
+ (double)unhighlightedCircleViewAlpha;
+ (bool)usesTelephonyGlyphsWhereAvailable;

- (void).cxx_destruct;
- (int)characterType;
- (void)conformsToSBUIPasscodeNumberPadButton;
- (id)initForCharacter:(long long)arg1;
- (id)reduceTransparencyButtonColor;
- (void)setReduceTransparencyButtonColor:(id)arg1;
- (id)stringCharacter;

@end
