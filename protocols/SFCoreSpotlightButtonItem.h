
@protocol SFCoreSpotlightButtonItem <SFButtonItem>

@required

- (NSArray *)actionItemTypes;
- (NSString *)applicationBundleIdentifier;
- (NSString *)coreSpotlightIdentifier;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setActionItemTypes:(NSArray *)arg1;
- (void)setApplicationBundleIdentifier:(NSString *)arg1;
- (void)setCoreSpotlightIdentifier:(NSString *)arg1;

@end
