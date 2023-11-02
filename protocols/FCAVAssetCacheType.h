
@protocol FCAVAssetCacheType <NSObject>

@required

- (void)adoptFileAtURL:(NSURL *)arg1 forAssetIdentifier:(NSString *)arg2 remoteURL:(NSURL *)arg3 contentKeyIdentifiers:(NSArray *)arg4 extension:(NSString *)arg5;
- (NSURL *)cachedFileURLForAssetIdentifier:(NSString *)arg1;
- (bool)containsAssetWithIdentifier:(NSString *)arg1;
- (FCContentArchive *)contentArchiveForAssetIdentifier:(NSString *)arg1;
- (NSArray *)contentKeyIdentifiersForAllAssets;
- (NSArray *)contentKeyIdentifiersForAssetIdentifier:(NSString *)arg1;
- (FCInterestToken *)importAVAsset:(NTPBAVAsset *)arg1;
- (FCInterestToken *)interestTokenForAssetIdentifier:(NSString *)arg1;
- (FCInterestToken *)interestTokenForAssetIdentifiers:(NSArray *)arg1;

@end
