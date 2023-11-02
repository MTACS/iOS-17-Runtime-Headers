
@protocol _SFPBImageOption <NSObject>

@required

- (NSString *)defaultValue;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSString *)name;
- (_SFPBStringDictionary *)options;
- (void)setDefaultValue:(NSString *)arg1;
- (void)setName:(NSString *)arg1;
- (void)setOptions:(_SFPBStringDictionary *)arg1;

@end
