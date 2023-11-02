
@protocol SFPerformContactQueryCommand <SFCommand>

@required

- (NSString *)contactIdentifier;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setContactIdentifier:(NSString *)arg1;

@end
