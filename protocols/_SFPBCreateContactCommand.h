
@protocol _SFPBCreateContactCommand <NSObject>

@required

- (bool)addToExistingContact;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (_SFPBPerson *)person;
- (void)setAddToExistingContact:(bool)arg1;
- (void)setPerson:(_SFPBPerson *)arg1;

@end
