
@protocol _SFPBContactButtonItem <NSObject>

@required

- (NSString *)contactIdentifier;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (_SFPBPerson *)person;
- (void)setContactIdentifier:(NSString *)arg1;
- (void)setPerson:(_SFPBPerson *)arg1;
- (void)setUniqueId:(unsigned long long)arg1;
- (unsigned long long)uniqueId;

@end
