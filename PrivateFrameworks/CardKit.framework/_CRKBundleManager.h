
@interface _CRKBundleManager : NSObject {
    NSMutableSet * _bundles;
}

@property (nonatomic, readonly) NSSet *bundles;

+ (Class)bundleClass;
+ (id)bundleDirectoryPath;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)bundles;
- (id)init;
- (void)loadBundles;
- (void)registerBundle:(id)arg1;

@end
