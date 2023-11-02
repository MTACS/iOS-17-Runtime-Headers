
@protocol SFSectionHeaderCardSection <SFCardSection>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setText:(SFRichText *)arg1;
- (void)setType:(NSString *)arg1;
- (SFRichText *)text;
- (NSString *)type;

@end
