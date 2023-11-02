
@protocol _SFPBOpenAppClipCommand <NSObject>

@required

- (NSString *)clipIdentifier;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setClipIdentifier:(NSString *)arg1;

@end
