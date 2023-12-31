
@protocol TMLFontJSExports <JSExport>

@required

- (struct CGFont { }*)CGFontRef;
- (double)ascender;
- (TMLFont *)bold;
- (double)capHeight;
- (double)descender;
- (NSString *)familyName;
- (NSString *)fontName;
- (TMLFont *)italic;
- (double)leading;
- (double)lineHeight;
- (double)pointSize;
- (TMLFont *)withAXRestrictedStyle:(NSString *)arg1;
- (TMLFont *)withAttributes:(NSDictionary *)arg1;
- (TMLFont *)withFamily:(NSString *)arg1;
- (TMLFont *)withScale:(double)arg1;
- (TMLFont *)withScaleTransform:(double)arg1;
- (TMLFont *)withSize:(double)arg1;
- (TMLFont *)withStyle:(NSString *)arg1;
- (TMLFont *)withSymbolicTraits:(unsigned int)arg1;
- (TMLFont *)withWeight:(double)arg1;
- (TMLFont *)withWidth:(double)arg1;
- (double)xHeight;

@end
