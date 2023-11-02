
@protocol SFCallCommand <SFCommand>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (NSString *)phoneNumber;
- (void)setPhoneNumber:(NSString *)arg1;

@end
