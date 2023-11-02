
@protocol SFHeroTitleCardSection <SFCardSection>

@required

- (NSArray *)buttonItems;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (unsigned long long)maxVisibleButtonItems;
- (void)setButtonItems:(NSArray *)arg1;
- (void)setMaxVisibleButtonItems:(unsigned long long)arg1;
- (void)setSubtitle:(SFRichText *)arg1;
- (void)setTitle:(SFRichText *)arg1;
- (void)setType:(NSString *)arg1;
- (SFRichText *)subtitle;
- (SFRichText *)title;
- (NSString *)type;

@end
