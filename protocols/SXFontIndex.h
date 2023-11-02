
@protocol SXFontIndex <NSObject>

@required

- (<SXFontAttributes> *)fontAttributesForFontName:(NSString *)arg1;
- (<SXFontFace> *)fontFaceForFontAttributes:(id <SXFontAttributes>)arg1 size:(long long)arg2;
- (NSString *)fontNameForFontAttributes:(id <SXFontAttributes>)arg1 size:(long long)arg2;

@end
