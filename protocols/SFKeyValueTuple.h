
@protocol SFKeyValueTuple <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (NSString *)key;
- (void)setKey:(NSString *)arg1;
- (void)setValue:(NSString *)arg1;
- (NSString *)value;

@end
