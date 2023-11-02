
@protocol SFEntitySearchMetadata <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSString *)entityIdentifier;
- (NSString *)entitySearchQuery;
- (NSData *)jsonData;
- (void)setEntityIdentifier:(NSString *)arg1;
- (void)setEntitySearchQuery:(NSString *)arg1;
- (void)setTokenQuery:(NSString *)arg1;
- (void)setViewConfigName:(NSString *)arg1;
- (NSString *)tokenQuery;
- (NSString *)viewConfigName;

@end
