
@interface UAFAutoAssetManager : NSObject

+ (bool)assetSetAvailable:(id)arg1 error:(id*)arg2;
+ (bool)autoAssetExistsWithEntries:(id)arg1;
+ (id)configureAssetSet:(id)arg1 assetSetUsages:(id)arg2 configurationManager:(id)arg3 changed:(bool*)arg4;
+ (void)configureAutoAssetsFromAssetSetUsages:(id)arg1 configurationManager:(id)arg2 lockIfUnchanged:(bool)arg3;
+ (id)getAutoAssetSet:(id)arg1 specifiers:(id)arg2 addEntries:(bool)arg3 configured:(bool*)arg4;
+ (id)getAutoSetEntries:(id)arg1 specifiers:(id)arg2;
+ (id)getConcurrentQueue;
+ (id)getCurrentSpecifiers:(id)arg1 expectedAutoAssetType:(id)arg2;
+ (unsigned long long)getDownloadStatusFromAssetSetUsages:(id)arg1 configurationManager:(id)arg2;
+ (id)getReason:(id)arg1 operation:(id)arg2;
+ (id)getSerialQueue;
+ (id)getSpecifiers:(id)arg1 assetSetUsages:(id)arg2;
+ (void)handleDownloadedAndUnavailable:(id)arg1 assetSetUsages:(id)arg2 configurationManager:(id)arg3 lockIfUnchanged:(bool)arg4 autoAssetSet:(id)arg5 assetSetAvailableError:(id)arg6 checkAtomicError:(id)arg7;
+ (void)lockLatestAssetSet:(id)arg1;
+ (void)manageAssetSet:(id)arg1 assetSetUsages:(id)arg2 configurationManager:(id)arg3 lockIfUnchanged:(bool)arg4 eliminateAndRetry:(bool)arg5;
+ (void)observeAssetSet:(id)arg1;
+ (void)removeAutoAssetSet:(id)arg1;
+ (void)setLatestAtomicInstance:(id)arg1 autoAssetSet:(id)arg2;
+ (void)updateAutoAssetsFromAssetSetUsages:(id)arg1 configurationManager:(id)arg2 expensiveNetworking:(bool)arg3 progress:(id /* block */)arg4 completion:(id /* block */)arg5;

@end
