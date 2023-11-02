
@protocol _SFPBURLImage <NSObject>

@required

- (_SFPBURL *)darkUrlValue;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setDarkUrlValue:(_SFPBURL *)arg1;
- (void)setUrlValue:(_SFPBURL *)arg1;
- (_SFPBURL *)urlValue;

@end
