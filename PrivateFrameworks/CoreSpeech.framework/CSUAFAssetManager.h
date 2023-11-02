
@interface CSUAFAssetManager : NSObject {
    UAFAssetSet * _assetSet;
    NSString * _locale;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_getInstalledAssetofType:(unsigned long long)arg1 forLocale:(id)arg2 completion:(id /* block */)arg3;
- (void)getInstalledAssetofType:(unsigned long long)arg1 forLocale:(id)arg2 completion:(id /* block */)arg3;
- (id)init;

@end
