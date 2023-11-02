
@protocol SFHorizontalButtonCardSection <SFCardSection>

@required

- (NSArray *)buttonCardSections;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setButtonCardSections:(NSArray *)arg1;
- (void)setType:(NSString *)arg1;
- (NSString *)type;

@end
