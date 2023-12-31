
@protocol SFImageOption <NSObject>

@required

- (NSString *)defaultValue;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (NSString *)name;
- (NSDictionary *)options;
- (void)setDefaultValue:(NSString *)arg1;
- (void)setName:(NSString *)arg1;
- (void)setOptions:(NSDictionary *)arg1;

@end
