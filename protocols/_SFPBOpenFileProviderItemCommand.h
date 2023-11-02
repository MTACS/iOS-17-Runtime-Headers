
@protocol _SFPBOpenFileProviderItemCommand <NSObject>

@required

- (NSString *)coreSpotlightIdentifier;
- (NSString *)fileProviderIdentifier;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setCoreSpotlightIdentifier:(NSString *)arg1;
- (void)setFileProviderIdentifier:(NSString *)arg1;
- (void)setShouldRevealFile:(bool)arg1;
- (bool)shouldRevealFile;

@end
