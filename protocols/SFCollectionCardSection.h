
@protocol SFCollectionCardSection <SFCardSection>

@required

- (SFCommandButtonItem *)buttonItem;
- (NSArray *)cardSections;
- (SFCollectionStyle *)collectionStyle;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setButtonItem:(SFCommandButtonItem *)arg1;
- (void)setCardSections:(NSArray *)arg1;
- (void)setCollectionStyle:(SFCollectionStyle *)arg1;
- (void)setTitle:(SFRichText *)arg1;
- (void)setTitleButtonItem:(SFCommandButtonItem *)arg1;
- (void)setType:(NSString *)arg1;
- (SFRichText *)title;
- (SFCommandButtonItem *)titleButtonItem;
- (NSString *)type;

@end
