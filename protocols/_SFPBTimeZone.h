
@protocol _SFPBTimeZone <NSObject>

@required

- (NSString *)identifier;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setIdentifier:(NSString *)arg1;

@end
