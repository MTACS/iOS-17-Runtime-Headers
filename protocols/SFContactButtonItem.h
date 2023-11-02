
@protocol SFContactButtonItem <SFButtonItem>

@required

- (NSString *)contactIdentifier;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (SFPerson *)person;
- (void)setContactIdentifier:(NSString *)arg1;
- (void)setPerson:(SFPerson *)arg1;

@end
