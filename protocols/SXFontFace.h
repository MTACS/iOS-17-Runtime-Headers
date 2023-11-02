
@protocol SXFontFace <NSObject>

@required

- (<SXFontAttributes> *)fontAttributes;
- (NSDictionary *)fontDescriptorAttributes;
- (NSString *)fontName;

@end
