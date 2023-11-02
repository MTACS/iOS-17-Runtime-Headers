
@protocol SFLargeTitleDetailedRowCardSection <SFCardSection>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setSubtitleButtonItem:(SFButtonItem *)arg1;
- (void)setTitle:(SFRichText *)arg1;
- (void)setTrailingButtonItems:(NSArray *)arg1;
- (void)setType:(NSString *)arg1;
- (SFButtonItem *)subtitleButtonItem;
- (SFRichText *)title;
- (NSArray *)trailingButtonItems;
- (NSString *)type;

@end
