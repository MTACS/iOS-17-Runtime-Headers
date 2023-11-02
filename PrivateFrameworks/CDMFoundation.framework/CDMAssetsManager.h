
@interface CDMAssetsManager : NSObject {
    NSString * _assetDirPath;
    CDMDefaultAssetsManager * _cdmDefaultAssetsManager;
    CDMTuriTrialAssetsManager * _cdmTuriTrialAssetsManager;
    CDMUAFAssetsManager * _cdmUAFAssetsManager;
    NSFileManager * _fileManager;
    NSLocale * _locale;
}

@property (nonatomic, readonly) NSString *assetDirPath;
@property (nonatomic, readonly) NSLocale *locale;

+ (id)getFactorNamesForService:(id)arg1;

- (void).cxx_destruct;
- (void)_setupTuriTrialAssetManager:(id*)arg1;
- (void)_setupUafAssetManager:(id*)arg1;
- (bool)areAssetsAvailableForServices:(id)arg1 inAssetPaths:(id)arg2 withError:(id*)arg3;
- (bool)areAssetsAvailableForServices:(id)arg1 inAssetPaths:(id)arg2 withError:(id*)arg3 withSelfMetadata:(id)arg4 withSelfContextId:(id)arg5 withDataDispatcherContext:(id)arg6;
- (id)assetDirPath;
- (id)extractFactorAndFoldersForServices:(id)arg1;
- (id)getAssetsByFactorNamesForServices:(id)arg1;
- (id)getFactorNamesForNonSkippableServices:(id)arg1;
- (id)getFactorToUnprocessedNLAsset:(id)arg1;
- (id)initWithLocale:(id)arg1;
- (id)initWithLocale:(id)arg1 assetDirPath:(id)arg2;
- (id)initWithLocale:(id)arg1 assetDirPath:(id)arg2 graphName:(id)arg3;
- (bool)isAssetAvailableForService:(id)arg1 inAssetPaths:(id)arg2 withError:(id*)arg3;
- (id)locale;
- (id)processNLAsset:(id)arg1 withAssetFolders:(id)arg2;
- (id)processSideLoadedAssetForNLAsset:(id)arg1 withAssetFolders:(id)arg2;
- (bool)promoteAssetsForServices:(id)arg1 withFailedServices:(id)arg2 withSelfContextId:(id)arg3 withSelfMetadata:(id)arg4 withDataDispatcherContext:(id)arg5;
- (bool)registerForServices:(id)arg1 withAssetsDelegate:(id)arg2 selfContextId:(id)arg3 selfMetadata:(id)arg4 dataDispatcherContext:(id)arg5;
- (bool)setAssetsProvisionalForServices:(id)arg1 withSelfContextId:(id)arg2 withSelfMetadata:(id)arg3 withDataDispatcherContext:(id)arg4;
- (void)setupWithError:(id*)arg1;

@end
