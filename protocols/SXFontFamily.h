
@protocol SXFontFamily <NSObject>

@required

- (NSString *)familyName;
- (<SXFontFace> *)fontFaceWithAttributes:(id <SXFontAttributes>)arg1 size:(long long)arg2;
- (NSSet *)fontFaces;

@end
