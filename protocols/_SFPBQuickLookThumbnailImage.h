
@protocol _SFPBQuickLookThumbnailImage <NSObject>

@required

- (NSString *)coreSpotlightIdentifier;
- (_SFPBURL *)filePath;
- (NSString *)fileProviderIdentifier;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setCoreSpotlightIdentifier:(NSString *)arg1;
- (void)setFilePath:(_SFPBURL *)arg1;
- (void)setFileProviderIdentifier:(NSString *)arg1;

@end
