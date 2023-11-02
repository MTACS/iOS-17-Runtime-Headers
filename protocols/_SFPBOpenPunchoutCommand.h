
@protocol _SFPBOpenPunchoutCommand <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (_SFPBPunchout *)punchout;
- (void)setPunchout:(_SFPBPunchout *)arg1;

@end
