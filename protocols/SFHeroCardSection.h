
@protocol SFHeroCardSection <SFCardSection>

@required

- (NSArray *)buttonItems;
- (NSDictionary *)dictionaryRepresentation;
- (SFImage *)image;
- (int)imageAlign;
- (NSData *)jsonData;
- (void)setButtonItems:(NSArray *)arg1;
- (void)setImage:(SFImage *)arg1;
- (void)setImageAlign:(int)arg1;
- (void)setSubtitle:(SFRichText *)arg1;
- (void)setTitle:(SFRichText *)arg1;
- (void)setType:(NSString *)arg1;
- (SFRichText *)subtitle;
- (SFRichText *)title;
- (NSString *)type;

@end
