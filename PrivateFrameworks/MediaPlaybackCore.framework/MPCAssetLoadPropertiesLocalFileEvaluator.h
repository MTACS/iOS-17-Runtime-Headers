
@interface MPCAssetLoadPropertiesLocalFileEvaluator : NSObject {
    MPCPlaybackEngine * _playbackEngine;
}

@property (nonatomic, readonly) MPCPlaybackEngine *playbackEngine;

- (void).cxx_destruct;
- (long long)_loadedAudioAssetTypeForFileAsset:(id)arg1;
- (long long)_recommendationForEvaluation:(id)arg1 assetCachingIsAllowed:(bool)arg2 userDefaults:(id)arg3;
- (bool)_shouldUpgradeCacheOnPlay:(id)arg1 assetCachingIsAllowed:(bool)arg2;
- (bool)_shouldUpgradeDownloadOnPlay:(id)arg1 defaults:(id)arg2;
- (id)evaluateAssetLoadProperties:(id)arg1 allowingCachedAssets:(bool)arg2 defaults:(id)arg3;
- (id)initWithPlaybackEngine:(id)arg1;
- (bool)isHLSFileAsset:(id)arg1;
- (id)playbackEngine;

@end
