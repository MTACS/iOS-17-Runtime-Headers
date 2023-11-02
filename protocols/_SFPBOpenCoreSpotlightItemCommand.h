
@protocol _SFPBOpenCoreSpotlightItemCommand <NSObject>

@required

- (NSString *)actionIdentifier;
- (NSString *)applicationBundleIdentifier;
- (NSString *)coreSpotlightIdentifier;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setActionIdentifier:(NSString *)arg1;
- (void)setApplicationBundleIdentifier:(NSString *)arg1;
- (void)setCoreSpotlightIdentifier:(NSString *)arg1;

@end
