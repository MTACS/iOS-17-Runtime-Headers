
@protocol _SFPBSearchInAppCommand <NSObject>

@required

- (NSString *)applicationBundleIdentifier;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSString *)searchString;
- (void)setApplicationBundleIdentifier:(NSString *)arg1;
- (void)setSearchString:(NSString *)arg1;

@end
