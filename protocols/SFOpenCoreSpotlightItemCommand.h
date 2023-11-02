
@protocol SFOpenCoreSpotlightItemCommand <SFCommand>

@required

- (NSString *)actionIdentifier;
- (NSString *)applicationBundleIdentifier;
- (NSString *)coreSpotlightIdentifier;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setActionIdentifier:(NSString *)arg1;
- (void)setApplicationBundleIdentifier:(NSString *)arg1;
- (void)setCoreSpotlightIdentifier:(NSString *)arg1;

@end
