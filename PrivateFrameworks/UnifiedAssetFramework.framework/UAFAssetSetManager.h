
@interface UAFAssetSetManager : NSObject

+ (unsigned long long)coalesceDownloadStatus:(id)arg1;
+ (void)configureAssetDelivery:(id)arg1 configurationManager:(id)arg2;
+ (void)configureAssetDelivery:(id)arg1 configurationManager:(id)arg2 lockIfUnchanged:(bool)arg3;
+ (unsigned long long)downloadStatus:(id)arg1 subscription:(id)arg2;
+ (unsigned long long)downloadStatus:(id)arg1 subscription:(id)arg2 storeManager:(id)arg3 configurationManager:(id)arg4;
+ (id)downloadStatusToString:(unsigned long long)arg1;
+ (id)generateInformationWithError:(id*)arg1;
+ (id)getAssetSetUsages:(id)arg1;
+ (id)getAssetSetUsages:(id)arg1 storeManager:(id)arg2;
+ (id)getConcurrentQueue;
+ (id)getKnownUsagesForAssetSet:(id)arg1 usageType:(id)arg2;
+ (id)getSerialQueue;
+ (id)getSubscriptions:(id)arg1;
+ (id)getSubscriptions:(id)arg1 storeManager:(id)arg2;
+ (id)getSystemUsageAssets:(id)arg1;
+ (void)subscribe:(id)arg1 subscriptions:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (bool)subscribe:(id)arg1 subscriptions:(id)arg2 storeManager:(id)arg3 configurationManager:(id)arg4;
+ (id)sysdiagnoseInformationWithError:(id*)arg1;
+ (void)unsubscribe:(id)arg1 subscriptions:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (bool)unsubscribe:(id)arg1 subscriptions:(id)arg2 storeManager:(id)arg3 configurationManager:(id)arg4;
+ (void)updateAssets:(id)arg1 policies:(id)arg2 queue:(id)arg3 progress:(id /* block */)arg4 completion:(id /* block */)arg5;
+ (void)updateAssets:(id)arg1 policies:(id)arg2 queue:(id)arg3 progress:(id /* block */)arg4 completion:(id /* block */)arg5 storeManager:(id)arg6 configurationManager:(id)arg7;
+ (void)updateAssets:(id)arg1 subscription:(id)arg2 policies:(id)arg3 queue:(id)arg4 progress:(id /* block */)arg5 completion:(id /* block */)arg6;
+ (void)updateAssets:(id)arg1 subscription:(id)arg2 policies:(id)arg3 queue:(id)arg4 progress:(id /* block */)arg5 completion:(id /* block */)arg6 storeManager:(id)arg7 configurationManager:(id)arg8;
+ (void)updateAssets:(id)arg1 subscription:(id)arg2 policies:(id)arg3 queue:(id)arg4 progressWithStatus:(id /* block */)arg5 completion:(id /* block */)arg6;
+ (void)updateAssets:(id)arg1 subscription:(id)arg2 policies:(id)arg3 queue:(id)arg4 progressWithStatus:(id /* block */)arg5 completion:(id /* block */)arg6 storeManager:(id)arg7 configurationManager:(id)arg8;

@end
