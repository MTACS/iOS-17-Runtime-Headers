
@interface _CRSServiceBundleManager : CRBundleManager

+ (Class)bundleClass;
+ (id)bundleDirectoryName;
+ (id)sharedInstance;

- (void)getServiceBundlesWithCompletion:(id /* block */)arg1;

@end
