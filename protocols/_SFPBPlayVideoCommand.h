
@protocol _SFPBPlayVideoCommand <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setUrl:(_SFPBURL *)arg1;
- (_SFPBURL *)url;

@end
