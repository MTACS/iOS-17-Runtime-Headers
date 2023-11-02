
@protocol _SFPBContactCopyItem <NSObject>

@required

- (_SFPBURL *)contactFileLocation;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (_SFPBPerson *)person;
- (void)setContactFileLocation:(_SFPBURL *)arg1;
- (void)setPerson:(_SFPBPerson *)arg1;

@end
