
@interface CRBundleManager : NSObject {
    NSMutableSet * _bundles;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

+ (Class)bundleClass;
+ (id)bundleDirectoryName;
+ (id)bundleDirectoryPath;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_getBundlesOnCurrentQueueWithCompletion:(id /* block */)arg1;
- (void)getBundlesWithCompletion:(id /* block */)arg1;
- (id)init;

@end
