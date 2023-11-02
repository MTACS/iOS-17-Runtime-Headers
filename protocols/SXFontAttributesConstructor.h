
@protocol SXFontAttributesConstructor <NSObject>

@required

- (<SXFontAttributes> *)fontAttributesForFontDescriptions:(NSArray *)arg1;
- (<SXFontFace> *)fontFaceForAttributes:(id <SXFontAttributes>)arg1 size:(long long)arg2;
- (NSString *)fontNameForAttributes:(id <SXFontAttributes>)arg1 size:(long long)arg2;

@end
