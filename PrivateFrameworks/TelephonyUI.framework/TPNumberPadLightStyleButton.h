
@interface TPNumberPadLightStyleButton : TPNumberPadButton

+ (double)highlightedCircleViewAlpha;
+ (id)imageForCharacter:(long long)arg1;
+ (id)imageForCharacter:(long long)arg1 highlighted:(bool)arg2;
+ (double)unhighlightedCircleViewAlpha;
+ (bool)usesTelephonyGlyphsWhereAvailable;

- (id)buttonColor;
- (id)defaultColor;

@end
