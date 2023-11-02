
@protocol SFCoreSpotlightCopyItem <SFCopyItem>

@required

- (NSString *)applicationBundleIdentifier;
- (NSString *)coreSpotlightIdentifier;
- (NSArray *)dataProviderTypeIdentifiers;
- (NSDictionary *)dictionaryRepresentation;
- (NSArray *)fileProviderTypeIdentifiers;
- (NSData *)jsonData;
- (void)setApplicationBundleIdentifier:(NSString *)arg1;
- (void)setCoreSpotlightIdentifier:(NSString *)arg1;
- (void)setDataProviderTypeIdentifiers:(NSArray *)arg1;
- (void)setFileProviderTypeIdentifiers:(NSArray *)arg1;

@end
