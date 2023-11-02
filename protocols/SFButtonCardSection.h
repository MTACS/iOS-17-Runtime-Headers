
@protocol SFButtonCardSection <SFCardSection>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setThumbnail:(SFImage *)arg1;
- (void)setTitle:(SFRichText *)arg1;
- (void)setType:(NSString *)arg1;
- (SFImage *)thumbnail;
- (SFRichText *)title;
- (NSString *)type;

@end
