
@protocol SFNewsCardSection <SFCardSection>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (bool)overlayTextInImage;
- (SFImage *)providerImage;
- (SFRichText *)providerTitle;
- (void)setOverlayTextInImage:(bool)arg1;
- (void)setProviderImage:(SFImage *)arg1;
- (void)setProviderTitle:(SFRichText *)arg1;
- (void)setSubtitle:(SFRichText *)arg1;
- (void)setThumbnail:(SFImage *)arg1;
- (void)setTitle:(SFRichText *)arg1;
- (void)setType:(NSString *)arg1;
- (SFRichText *)subtitle;
- (SFImage *)thumbnail;
- (SFRichText *)title;
- (NSString *)type;

@end
