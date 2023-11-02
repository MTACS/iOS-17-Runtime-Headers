
@protocol SFOpenPunchoutCommand <SFCommand>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (SFPunchout *)punchout;
- (void)setPunchout:(SFPunchout *)arg1;

@end
