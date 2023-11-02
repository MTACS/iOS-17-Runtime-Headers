
@interface PCAssetManager : NSObject {
    NSMutableDictionary * _alternateBundles;
    NSMutableDictionary * _bundles;
    NSObject<OS_dispatch_queue> * _internalQueue;
    SFDeviceAssetManager * _sfAssetManager;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)alternateAssetQueryForAssetType:(long long)arg1;
- (id)alternateBundleForAssetType:(long long)arg1;
- (id)assetQueryForAssetType:(long long)arg1;
- (id)assetQueryForAssetType:(long long)arg1 alternate:(bool)arg2;
- (id)assetRequestConfiguration:(long long)arg1 alternate:(bool)arg2;
- (id)bundleForAssetType:(long long)arg1;
- (unsigned char)colorCodeForAssetType:(long long)arg1;
- (void)dealloc;
- (void)handleDownloadCompletion:(id)arg1 assetType:(long long)arg2 error:(id)arg3;
- (void)handleQueryResult:(id)arg1 assetType:(long long)arg2 productType:(id)arg3 isFallback:(bool)arg4 error:(id)arg5 isAlternateBundle:(bool)arg6;
- (id)imageForAssetType:(long long)arg1;
- (id)imageNameForAssetType:(long long)arg1;
- (id)init;
- (void)initiateQuery:(id)arg1 config:(id)arg2;
- (void)prewarmAlternateBundleForAssetType:(long long)arg1;
- (void)prewarmBundleForAssetType:(long long)arg1;
- (void)prewarmBundleForAssetType:(long long)arg1 alternate:(bool)arg2;
- (unsigned int)productVersionForAssetType:(long long)arg1;
- (void)sfAssetManagerEnsureStarted;

@end
