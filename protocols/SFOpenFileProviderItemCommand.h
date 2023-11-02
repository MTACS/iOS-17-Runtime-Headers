
@protocol SFOpenFileProviderItemCommand <SFCommand>

@required

- (NSString *)coreSpotlightIdentifier;
- (NSDictionary *)dictionaryRepresentation;
- (NSString *)fileProviderIdentifier;
- (NSData *)jsonData;
- (void)setCoreSpotlightIdentifier:(NSString *)arg1;
- (void)setFileProviderIdentifier:(NSString *)arg1;
- (void)setShouldRevealFile:(bool)arg1;
- (bool)shouldRevealFile;

@end
