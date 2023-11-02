
@protocol _SFPBEntitySearchMetadata <NSObject>

@required

- (NSString *)entityIdentifier;
- (NSString *)entitySearchQuery;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setEntityIdentifier:(NSString *)arg1;
- (void)setEntitySearchQuery:(NSString *)arg1;
- (void)setTokenQuery:(NSString *)arg1;
- (void)setViewConfigName:(NSString *)arg1;
- (NSString *)tokenQuery;
- (NSString *)viewConfigName;

@end
