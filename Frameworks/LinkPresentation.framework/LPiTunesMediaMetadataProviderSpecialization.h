
@interface LPiTunesMediaMetadataProviderSpecialization : LPMetadataProviderSpecialization {
    bool  _canceled;
    LPFetcherGroup * _fetcherGroup;
    NSString * _identifier;
    LPiTunesMediaLookupTask * _lookupTask;
    MPStoreLyricsSnippetURLComponents * _lyricComponents;
    LPSpecializationMetadata * _resolvedMetadata;
    NSString * _storefrontCountryCode;
    <LPiTunesMediaUnresolvedMetadata> * _unresolvedMetadata;
}

+ (id)assetArrayFromScreenshotArray:(id)arg1;
+ (id)assetArrayFromScreenshotDictionary:(id)arg1 usingPreferredPlatformArray:(id)arg2;
+ (id)assetArrayScreenshotArray:(id)arg1;
+ (id)assetFromVideoPreviewDictionary:(id)arg1 usingPreferredPlatformArray:(id)arg2;
+ (long long)determineOrientationOfScreenshotsInArray:(id)arg1;
+ (id)extractOffers:(id)arg1;
+ (void)requestSourceApplicationMetadataForBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
+ (unsigned long long)specialization;
+ (id)specializedMetadataProviderForMetadata:(id)arg1 withContext:(id)arg2;
+ (id)specializedMetadataProviderForURLWithContext:(id)arg1;

- (void).cxx_destruct;
- (void)cancel;
- (void)completed;
- (void)done;
- (void)fail;
- (id)initWithIdentifier:(id)arg1 storefrontCountryCode:(id)arg2 withContext:(id)arg3;
- (id)initWithLyricComponents:(id)arg1 withContext:(id)arg2;
- (id)processResponseDictionary:(id)arg1 withStorefrontIdentifier:(id)arg2;
- (void)resolve;
- (id)schema;
- (void)start;

@end
