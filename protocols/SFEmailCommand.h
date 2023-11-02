
@protocol SFEmailCommand <SFCommand>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSString *)email;
- (NSData *)jsonData;
- (void)setEmail:(NSString *)arg1;

@end
