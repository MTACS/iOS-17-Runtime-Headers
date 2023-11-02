
@protocol SFHorizontalScrollCardSection <SFCardSection>

@required

- (NSArray *)cardSections;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (unsigned long long)numberOfRows;
- (void)setCardSections:(NSArray *)arg1;
- (void)setNumberOfRows:(unsigned long long)arg1;
- (void)setType:(NSString *)arg1;
- (NSString *)type;

@end
