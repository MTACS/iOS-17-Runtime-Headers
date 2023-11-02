
@protocol SFCompactRowCardSection <SFCardSection>

@required

- (NSDictionary *)dictionaryRepresentation;
- (SFImage *)image;
- (bool)isSubtitleDetatched;
- (NSData *)jsonData;
- (void)setImage:(SFImage *)arg1;
- (void)setIsSubtitleDetatched:(bool)arg1;
- (void)setSubtitle:(SFRichText *)arg1;
- (void)setTitle:(SFRichText *)arg1;
- (void)setType:(NSString *)arg1;
- (SFRichText *)subtitle;
- (SFRichText *)title;
- (NSString *)type;

@end
