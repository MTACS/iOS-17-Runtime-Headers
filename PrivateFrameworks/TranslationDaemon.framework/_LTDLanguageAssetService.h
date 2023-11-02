
@interface _LTDLanguageAssetService : NSObject

+ (void)_purgeUnusedAssetsWithCompletion:(id /* block */)arg1;
+ (id)_selectedAssets;
+ (id)_selectedIdentifiers;
+ (void)assetsWithCompletion:(id /* block */)arg1;
+ (void)assetsWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
+ (void)availableAssetsWithCompletion:(id /* block */)arg1;
+ (id)filterAssets:(id)arg1 options:(unsigned long long)arg2;
+ (void)flushCache;
+ (void)installedAssetsWithCompletion:(id /* block */)arg1;
+ (id)queue;
+ (void)selectedAssetsWithCompletion:(id /* block */)arg1;
+ (id)selectedLocales;
+ (void)setAssets:(id)arg1 options:(unsigned long long)arg2 progress:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (void)setInstalledLocales:(id)arg1 useCellular:(bool)arg2 progress:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (void)setSelectedLocales:(id)arg1;

@end
