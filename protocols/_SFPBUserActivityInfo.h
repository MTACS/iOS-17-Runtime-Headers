
@protocol _SFPBUserActivityInfo <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSString *)key;
- (void)setKey:(NSString *)arg1;
- (void)setStringValue:(NSString *)arg1;
- (void)setUrlValue:(_SFPBURL *)arg1;
- (void)setValueType:(int)arg1;
- (NSString *)stringValue;
- (_SFPBURL *)urlValue;
- (int)valueType;

@end
