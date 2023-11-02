
@protocol SFCommandRowCardSection <SFCardSection>

@required

- (NSDictionary *)dictionaryRepresentation;
- (SFImage *)image;
- (NSData *)jsonData;
- (void)setImage:(SFImage *)arg1;
- (void)setSubtitle:(SFRichText *)arg1;
- (void)setTitle:(SFRichText *)arg1;
- (void)setToggledImage:(SFImage *)arg1;
- (void)setToggledTitle:(SFRichText *)arg1;
- (void)setType:(NSString *)arg1;
- (SFRichText *)subtitle;
- (SFRichText *)title;
- (SFImage *)toggledImage;
- (SFRichText *)toggledTitle;
- (NSString *)type;

@end
