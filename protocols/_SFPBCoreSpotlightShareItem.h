
@protocol _SFPBCoreSpotlightShareItem <NSObject>

@required

- (NSString *)applicationBundleIdentifier;
- (NSString *)coreSpotlightIdentifier;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setApplicationBundleIdentifier:(NSString *)arg1;
- (void)setCoreSpotlightIdentifier:(NSString *)arg1;
- (void)setShareProviderTypeIdentifier:(NSString *)arg1;
- (NSString *)shareProviderTypeIdentifier;

@end
