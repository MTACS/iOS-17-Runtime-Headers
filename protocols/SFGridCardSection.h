
@protocol SFGridCardSection <SFCardSection>

@required

- (NSArray *)cardSections;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setCardSections:(NSArray *)arg1;
- (void)setType:(NSString *)arg1;
- (NSString *)type;

@end
