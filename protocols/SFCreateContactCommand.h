
@protocol SFCreateContactCommand <SFCommand>

@required

- (bool)addToExistingContact;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (SFPerson *)person;
- (void)setAddToExistingContact:(bool)arg1;
- (void)setPerson:(SFPerson *)arg1;

@end
