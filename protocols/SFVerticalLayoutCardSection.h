
@protocol SFVerticalLayoutCardSection <SFCardSection>

@required

- (bool)contentsLeading;
- (NSDictionary *)dictionaryRepresentation;
- (SFRichText *)footnote;
- (NSData *)jsonData;
- (void)setContentsLeading:(bool)arg1;
- (void)setFootnote:(SFRichText *)arg1;
- (void)setThumbnail:(SFImage *)arg1;
- (void)setThumbnailOverlayText:(SFRichText *)arg1;
- (void)setTitle:(SFRichText *)arg1;
- (void)setType:(NSString *)arg1;
- (void)setUseAppIconMetrics:(bool)arg1;
- (SFImage *)thumbnail;
- (SFRichText *)thumbnailOverlayText;
- (SFRichText *)title;
- (NSString *)type;
- (bool)useAppIconMetrics;

@end
