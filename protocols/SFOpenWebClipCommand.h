
@protocol SFOpenWebClipCommand <SFCommand>

@required

- (NSString *)clipIdentifier;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setClipIdentifier:(NSString *)arg1;

@end
