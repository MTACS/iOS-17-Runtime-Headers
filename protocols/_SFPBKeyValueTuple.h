
@protocol _SFPBKeyValueTuple <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSString *)key;
- (void)setKey:(NSString *)arg1;
- (void)setValue:(NSString *)arg1;
- (NSString *)value;

@end
