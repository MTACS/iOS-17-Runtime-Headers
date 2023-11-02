
@interface _LTOfflineAssetManager : NSObject {
    _LTHotfixManager * _hotfixMgr;
}

+ (id)assetDirectory;
+ (id)fallBackAssetResourcePath;
+ (void)initialize;

- (void).cxx_destruct;
- (id)_assetIdentifiersForLanguagePairDirectory:(id)arg1;
- (void)_clearCaches;
- (void)_downloadPassthroughAssetForLocale:(id)arg1 userInitiated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_queryLanguagePairStatusWithCompletion:(id /* block */)arg1;
- (void)_refreshAllAssets:(id /* block */)arg1;
- (void)_removeOldAssetDirectory;
- (id)_speechTranslationAssetInfoForLocalePair:(id)arg1 error:(id*)arg2;
- (id)_speechTranslationAssetInfoForLocalePair:(id)arg1 installedAssets:(id)arg2 catalogAssets:(id)arg3 offlineConfig:(id)arg4 error:(id*)arg5;
- (void)_updateAsset:(id)arg1 catalogAssets:(id)arg2 downloadGroup:(id)arg3 completion:(id /* block */)arg4;
- (id)assetIdentifierReferenceCountDictionary;
- (void)assetSize:(id /* block */)arg1;
- (void)debugDumpAssets:(id)arg1;
- (void)deleteAsset:(id)arg1 completion:(id /* block */)arg2;
- (void)downloadAssetsForLanguagePair:(id)arg1 userInitiated:(bool)arg2 completion:(id /* block */)arg3;
- (id)endpointAssetInfoWithContext:(id)arg1 error:(id*)arg2;
- (id)getEndpointerAssetWithType:(unsigned long long)arg1 error:(id*)arg2;
- (id)init;
- (id)languageDetectorAssetWithError:(id*)arg1;
- (id)modelURLsForLanguagePair:(id)arg1;
- (void)offlineLanguageStatus:(id /* block */)arg1;
- (void)purgeAllAssetsExcludingConfig:(bool)arg1 completion:(id /* block */)arg2;
- (void)purgeAssetForLanguagePair:(id)arg1 userInitiated:(bool)arg2 completion:(id /* block */)arg3;
- (void)refreshAllIfNeededWithCompletion:(id /* block */)arg1;
- (void)removeObsoleteAssets;
- (id)speechTranslationAssetInfoForLocalePair:(id)arg1 error:(id*)arg2;
- (void)updateAllAssets:(id /* block */)arg1;
- (void)updateSpeechTranslationAssetSymLinks:(id)arg1;

@end
