
@interface SBPasscodeNumberPadButton : TPNumberPadDarkStyleButton <SBUIPasscodeNumberPadButton> {
    UIColor * _reduceTransparencyButtonColor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIColor *reduceTransparencyButtonColor;
@property (readonly) Class superclass;

+ (int)_characterTypeForCharacter:(long long)arg1;
+ (bool)_isPortrait;
+ (double)_numberPadButtonOuterCircleDiameter;
+ (bool)_shouldUseAlternativeCirlceViewAlphas;
+ (id)_stringCharacterForCharacter:(long long)arg1;
+ (struct CGSize { double x1; double x2; })defaultSize;
+ (double)highlightedCircleViewAlpha;
+ (double)outerCircleDiameter;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })paddingOutsideRing;
+ (double)unhighlightedCircleViewAlpha;

- (void).cxx_destruct;
- (int)characterType;
- (void)conformsToSBUIPasscodeNumberPadButton;
- (id)initForCharacter:(long long)arg1;
- (id)reduceTransparencyButtonColor;
- (void)setReduceTransparencyButtonColor:(id)arg1;
- (id)stringCharacter;

@end
