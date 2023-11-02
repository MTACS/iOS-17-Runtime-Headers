
@protocol _SFPBURLShareItem <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setUrlValue:(_SFPBURL *)arg1;
- (_SFPBURL *)urlValue;

@end
