
@interface TPNumberPadDynamicButton : TPNumberPadButton

+ (long long)currentStyle;
+ (double)highlightedCircleViewAlpha;
+ (id)imageForCharacter:(long long)arg1;
+ (id)imageForCharacter:(long long)arg1 highlighted:(bool)arg2;
+ (double)unhighlightedCircleViewAlpha;
+ (bool)usesTelephonyGlyphsWhereAvailable;

- (id)buttonColor;
- (id)initForCharacter:(long long)arg1 style:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateCurrentStyleIfNecessaryFromStyle:(long long)arg1;

@end
