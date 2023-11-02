
@protocol _SFPBFindMyCardSection <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (_SFPBPerson *)person;
- (void)setPerson:(_SFPBPerson *)arg1;

@end
