
@protocol SFPersonHeaderCardSection <SFCardSection>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (SFPerson *)person;
- (void)setPerson:(SFPerson *)arg1;

@end
