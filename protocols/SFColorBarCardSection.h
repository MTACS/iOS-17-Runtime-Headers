
@protocol SFColorBarCardSection <SFCardSection>

@required

- (SFColor *)barColor;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setBarColor:(SFColor *)arg1;
- (void)setSubtitle:(SFRichText *)arg1;
- (void)setTitle:(SFRichText *)arg1;
- (void)setTopText:(SFRichText *)arg1;
- (SFRichText *)subtitle;
- (SFRichText *)title;
- (SFRichText *)topText;

@end
