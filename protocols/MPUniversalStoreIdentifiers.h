
@protocol MPUniversalStoreIdentifiers <NSObject>

@required

- (long long)adamID;
- (long long)assetAdamID;
- (NSArray *)formerAdamIDs;
- (NSString *)globalPlaylistID;
- (NSString *)informalMediaClipID;
- (NSString *)informalStaticAssetID;
- (long long)lyricsAdamID;
- (long long)purchasedAdamID;
- (long long)reportingAdamID;
- (NSString *)socialProfileID;
- (long long)subscriptionAdamID;
- (NSString *)universalCloudLibraryID;

@end
