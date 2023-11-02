
@interface _LTSpeechTranslationAssetInfo : NSObject {
    NSArray * _allAssets;
    _LTOfflineAssetManager * _assetManager;
    _LTLocalePair * _localePair;
    NSArray * _missingAssets;
    NSArray * _missingMTAssets;
    NSArray * _modelURLs;
    NSArray * _mtAssets;
    bool  _needsUpdate;
    _LTDOfflineConfigurationModel * _offlineConfig;
    _LTDAssetModel * _sourceASRModel;
    _LTDAssetModel * _targetASRModel;
}

+ (void)_createSymlinkDirectoryForLocalePair:(id)arg1 assets:(id)arg2;
+ (id)_languagePairDirectoryForLocalePair:(id)arg1;

- (void).cxx_destruct;
- (long long)_mtModelOfflineState;
- (void)_referenceAssets:(id)arg1 catalogAssets:(id)arg2;
- (bool)_validateSymlinksForAssets:(id)arg1;
- (id)availabilityInfo;
- (void)createSymlinkDirectoryForMTAssets;
- (id)description;
- (void)downloadAssetsUserInitiated:(bool)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithInstalledAssets:(id)arg1 catalogAssets:(id)arg2 localePair:(id)arg3 offlineConfig:(id)arg4 assetManager:(id)arg5;
- (bool)isCompleteBidirectionalModel;
- (bool)isCompletePassthroughModel;
- (void)purgeAssetUserInitiated:(bool)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (id)speechModelURLForLocale:(id)arg1;
- (id)speechModelVersionForLocale:(id)arg1;
- (id)translationModelURLs;
- (bool)updateAvailableInAssets:(id)arg1;

@end
