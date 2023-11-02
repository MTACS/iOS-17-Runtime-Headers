
@protocol SFQuickLookThumbnailImage <SFImage>

@required

- (NSString *)coreSpotlightIdentifier;
- (NSDictionary *)dictionaryRepresentation;
- (NSURL *)filePath;
- (NSString *)fileProviderIdentifier;
- (NSData *)jsonData;
- (void)setCoreSpotlightIdentifier:(NSString *)arg1;
- (void)setFilePath:(NSURL *)arg1;
- (void)setFileProviderIdentifier:(NSString *)arg1;

@end
