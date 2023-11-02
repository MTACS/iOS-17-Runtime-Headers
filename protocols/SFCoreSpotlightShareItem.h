
@protocol SFCoreSpotlightShareItem <SFShareItem>

@required

- (NSString *)applicationBundleIdentifier;
- (NSString *)coreSpotlightIdentifier;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setApplicationBundleIdentifier:(NSString *)arg1;
- (void)setCoreSpotlightIdentifier:(NSString *)arg1;
- (void)setShareProviderTypeIdentifier:(NSString *)arg1;
- (NSString *)shareProviderTypeIdentifier;

@end
