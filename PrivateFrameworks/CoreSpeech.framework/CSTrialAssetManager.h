
@interface CSTrialAssetManager : NSObject {
    NSDictionary * _trialClientDict;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_getSiriAttAssetsForType:(unsigned long long)arg1 forLocale:(id)arg2 completion:(id /* block */)arg3;
- (void)getInstalledAssetofType:(unsigned long long)arg1 forLocale:(id)arg2 completion:(id /* block */)arg3;
- (id)init;

@end
