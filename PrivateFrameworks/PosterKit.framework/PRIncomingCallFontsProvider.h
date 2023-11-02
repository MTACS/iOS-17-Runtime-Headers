
@interface PRIncomingCallFontsProvider : NSObject

+ (bool)_canTextBePartiallyRenderedForFont:(id)arg1 text:(id)arg2;
+ (bool)_canTextBePartiallyRenderedForFontRef:(struct __CTFont { }*)arg1 text:(id)arg2;
+ (bool)_canTextBePartiallyRenderedForFontWithName:(id)arg1 text:(id)arg2;
+ (bool)_canTextBePartiallyRenderedForTimeFontIdentifier:(id)arg1 text:(id)arg2;
+ (id)_cjkFontSizeMap;
+ (double)_deviceBasedFontSizeForSize:(double)arg1;
+ (id)_fallbackFontsForFont:(id)arg1 displayingText:(id)arg2;
+ (id)_preferredLanguageForFont:(struct __CTFont { }*)arg1;
+ (id)_renderCompatibleIdentifiersForTimeFontIdentifiers:(id)arg1 text:(id)arg2;
+ (struct { id x1; id x2; })_sampleFallbackForFont:(id)arg1;
+ (struct { id x1; id x2; })_sampleStringForFont:(id)arg1;
+ (double)defaultEmphasizedNameFontSize;
+ (id)defaultNameFont;
+ (double)defaultSecondaryNameFontSize;
+ (id)defaultStatusFont;
+ (double)defaultStatusFontSize;
+ (double)idealTitleFontSizeForText:(id)arg1 usingLayout:(unsigned long long)arg2;
+ (struct { id x1; id x2; })sampleStringForFont:(id)arg1 displayingText:(id)arg2;
+ (id)timeFontIdentifiersForText:(id)arg1 availableFonts:(id)arg2;

@end
