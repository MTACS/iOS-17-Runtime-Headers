
@protocol MPMutableUniversalStoreIdentifiers <MPUniversalStoreIdentifiers>

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
- (void)setAdamID:(long long)arg1;
- (void)setAssetAdamID:(long long)arg1;
- (void)setFormerAdamIDs:(NSArray *)arg1;
- (void)setGlobalPlaylistID:(NSString *)arg1;
- (void)setInformalMediaClipID:(NSString *)arg1;
- (void)setInformalStaticAssetID:(NSString *)arg1;
- (void)setLyricsAdamID:(long long)arg1;
- (void)setPurchasedAdamID:(long long)arg1;
- (void)setReportingAdamID:(long long)arg1;
- (void)setSocialProfileID:(NSString *)arg1;
- (void)setSubscriptionAdamID:(long long)arg1;
- (void)setUniversalCloudLibraryID:(NSString *)arg1;
- (NSString *)socialProfileID;
- (long long)subscriptionAdamID;
- (NSString *)universalCloudLibraryID;

@end
