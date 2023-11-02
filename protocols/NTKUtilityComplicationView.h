
@protocol NTKUtilityComplicationView <CDComplicationDisplay, CLKMonochromeComplicationView>

@required

- (UIColor *)accentColor;
- (bool)alwaysEnforcePlatterInset;
- (void)applyFaceColorPalette:(NTKFaceColorPalette *)arg1 units:(unsigned long long)arg2;
- (void)applyTransitionFraction:(double)arg1 fromFaceColorPalette:(NTKFaceColorPalette *)arg2 toFaceColorPalette:(NTKFaceColorPalette *)arg3 units:(unsigned long long)arg4 brightenedUnits:(unsigned long long)arg5;
- (CLKDevice *)device;
- (double)editingRotationAngle;
- (double)fontSize;
- (double)fontWeight;
- (double)foregroundAlpha;
- (UIColor *)foregroundColor;
- (double)foregroundImageAlpha;
- (unsigned long long)placement;
- (UIColor *)platterColor;
- (void)setAccentColor:(UIColor *)arg1;
- (void)setAlwaysEnforcePlatterInset:(bool)arg1;
- (void)setDevice:(CLKDevice *)arg1;
- (void)setEditingRotationAngle:(double)arg1;
- (void)setFontSize:(double)arg1;
- (void)setFontWeight:(double)arg1;
- (void)setForegroundAlpha:(double)arg1;
- (void)setForegroundColor:(UIColor *)arg1;
- (void)setForegroundImageAlpha:(double)arg1;
- (void)setPlacement:(unsigned long long)arg1;
- (void)setPlatterColor:(UIColor *)arg1;
- (void)setShadowColor:(UIColor *)arg1;
- (void)setShouldScaleAndFadeWhenHighlighting:(bool)arg1;
- (void)setShouldUseBackgroundPlatter:(bool)arg1;
- (void)setSuppressesInternalColorOverrides:(bool)arg1;
- (void)setUseAlternativePunctuation:(bool)arg1;
- (void)setUseBlockyHighlightCorners:(bool)arg1;
- (void)setUseRoundedFontDesign:(bool)arg1;
- (void)setUsesLegibility:(bool)arg1;
- (UIColor *)shadowColor;
- (bool)shouldScaleAndFadeWhenHighlighting;
- (bool)shouldUseBackgroundPlatter;
- (bool)suppressesInternalColorOverrides;
- (NSDate *)timeTravelDate;
- (bool)useAlternativePunctuation;
- (bool)useBlockyHighlightCorners;
- (bool)useRoundedFontDesign;
- (bool)usesLegibility;

@end
