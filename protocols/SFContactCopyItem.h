
@protocol SFContactCopyItem <SFCopyItem>

@required

- (NSURL *)contactFileLocation;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (SFPerson *)person;
- (void)setContactFileLocation:(NSURL *)arg1;
- (void)setPerson:(SFPerson *)arg1;

@end
