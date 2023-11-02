
@interface FlexMobileAssetV2SongAsset : FlexCloudSongAsset {
    long long  _newestCompatibilityVersion;
    long long  _newestContentVersion;
}

@property (nonatomic) long long newestCompatibilityVersion;
@property (nonatomic) long long newestContentVersion;

- (unsigned long long)assetStatus;
- (long long)compatibilityVersionForAssetLocation:(unsigned long long)arg1;
- (bool)contentUpdateAvailable;
- (long long)contentVersionForAssetLocation:(unsigned long long)arg1;
- (id)initWithAssetID:(id)arg1 localURL:(id)arg2 cloudManager:(id)arg3 contentVersion:(long long)arg4 compatibilityVersion:(long long)arg5;
- (long long)newestCompatibilityVersion;
- (long long)newestContentVersion;
- (void)setNewestCompatibilityVersion:(long long)arg1;
- (void)setNewestContentVersion:(long long)arg1;

@end
