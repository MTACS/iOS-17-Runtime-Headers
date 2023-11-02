
@protocol _SFPBCoreSpotlightCopyItem <NSObject>

@required

- (void)addDataProviderTypeIdentifiers:(NSString *)arg1;
- (void)addFileProviderTypeIdentifiers:(NSString *)arg1;
- (NSString *)applicationBundleIdentifier;
- (void)clearDataProviderTypeIdentifiers;
- (void)clearFileProviderTypeIdentifiers;
- (NSString *)coreSpotlightIdentifier;
- (NSArray *)dataProviderTypeIdentifiers;
- (NSString *)dataProviderTypeIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)dataProviderTypeIdentifiersCount;
- (NSArray *)fileProviderTypeIdentifiers;
- (NSString *)fileProviderTypeIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)fileProviderTypeIdentifiersCount;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setApplicationBundleIdentifier:(NSString *)arg1;
- (void)setCoreSpotlightIdentifier:(NSString *)arg1;
- (void)setDataProviderTypeIdentifiers:(NSArray *)arg1;
- (void)setFileProviderTypeIdentifiers:(NSArray *)arg1;

@end
