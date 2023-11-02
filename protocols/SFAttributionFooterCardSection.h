
@protocol SFAttributionFooterCardSection <SFCardSection>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (SFRichText *)leadingAttribution;
- (SFPunchout *)leadingAttributionPunchout;
- (void)setLeadingAttribution:(SFRichText *)arg1;
- (void)setLeadingAttributionPunchout:(SFPunchout *)arg1;
- (void)setTrailingAttribution:(SFRichText *)arg1;
- (void)setTrailingAttributionPunchout:(SFPunchout *)arg1;
- (void)setType:(NSString *)arg1;
- (SFRichText *)trailingAttribution;
- (SFPunchout *)trailingAttributionPunchout;
- (NSString *)type;

@end
