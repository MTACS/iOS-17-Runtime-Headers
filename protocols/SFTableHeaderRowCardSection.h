
@protocol SFTableHeaderRowCardSection <SFTableRowCardSection>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;

@end
