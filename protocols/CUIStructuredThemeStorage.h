
@protocol CUIStructuredThemeStorage <NSObject>

@required

- (unsigned int)authoredWithSchemaVersion;
- (bool)canGetRenditionWithKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (NSDictionary *)catalogGlobals;
- (unsigned int)distilledInCoreUIVersion;
- (unsigned int)documentFormatVersion;
- (double)fontSizeForFontSizeType:(NSString *)arg1;
- (bool)getFontName:(id*)arg1 baselineOffset:(double*)arg2 forFontType:(NSString *)arg3;
- (bool)getPhysicalColor:(struct _colordef { unsigned int x1; unsigned int x2; struct _rgbquad { unsigned int x_3_1_1 : 8; unsigned int x_3_1_2 : 8; unsigned int x_3_1_3 : 8; unsigned int x_3_1_4 : 8; } x3; }*)arg1 withName:(NSString *)arg2;
- (bool)hasPhysicalColorWithName:(NSString *)arg1;
- (CUIThemeRendition *)renditionWithKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (CUIThemeRendition *)renditionWithKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1 usingKeySignature:(NSString *)arg2;
- (unsigned int)thinnedWithCoreUIVersion;

@optional

- (unsigned long long)colorSpaceID;

@end
