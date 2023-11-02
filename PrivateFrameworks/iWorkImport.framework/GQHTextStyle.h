
@interface GQHTextStyle : NSObject

+ (bool)getDefaultLineHeight:(struct __CFString { }*)arg1 fontSize:(float)arg2 defLineHeight:(int*)arg3;
+ (void)mapStyle:(id)arg1 style:(id)arg2 state:(id)arg3;
+ (void)mapStyle:(id)arg1 style:(id)arg2 state:(id)arg3 isSpan:(bool)arg4;
+ (const char *)name;
+ (struct __CFString { }*)platformCreateCssFontFamilyStringFromFontName:(struct __CFString { }*)arg1;
+ (bool)platformGetDefaultLineHeight:(struct __CTFont { }*)arg1 fontSize:(float)arg2 defLineHeight:(int*)arg3;
+ (void)platformGetTraitsFromFont:(struct __CTFont { }*)arg1 hasBold:(bool*)arg2 hasItalic:(bool*)arg3;
+ (void)reduceFontSizeForSuperscriptedText:(id)arg1 style:(id)arg2 state:(id)arg3;

@end
