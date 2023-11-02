
@protocol SFLeadingTrailingCardSection <SFCardSection>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (NSArray *)leadingCardSections;
- (double)leadingToTrailingRatio;
- (void)setLeadingCardSections:(NSArray *)arg1;
- (void)setLeadingToTrailingRatio:(double)arg1;
- (void)setTrailingCardSections:(NSArray *)arg1;
- (void)setType:(NSString *)arg1;
- (NSArray *)trailingCardSections;
- (NSString *)type;

@end
