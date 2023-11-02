
@interface AKWalrusConfigProvider : NSObject {
    AKWalrusConfig * _cachedConfig;
}

@property (nonatomic, readonly) AKWalrusConfig *cachedConfig;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_extractWalrusConfigWithAccountCountry:(id)arg1 fromGlobalConfig:(id)arg2;
- (id)cachedConfig;
- (void)getWalrusConfigWithCompletion:(id /* block */)arg1;

@end
