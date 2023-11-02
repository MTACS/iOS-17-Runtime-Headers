
@interface _CRKProviderBundleManager : CRBundleManager {
    NSMutableSet * _providerBundles;
}

+ (Class)bundleClass;
+ (id)bundleDirectoryName;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)getProviderBundlesWithCompletion:(id /* block */)arg1;

@end
