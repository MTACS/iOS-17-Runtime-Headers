
@protocol _SFPBColorBarCardSection <NSObject>

@required

- (_SFPBColor *)barColor;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setBarColor:(_SFPBColor *)arg1;
- (void)setSubtitle:(_SFPBRichText *)arg1;
- (void)setTitle:(_SFPBRichText *)arg1;
- (void)setTopText:(_SFPBRichText *)arg1;
- (_SFPBRichText *)subtitle;
- (_SFPBRichText *)title;
- (_SFPBRichText *)topText;

@end
