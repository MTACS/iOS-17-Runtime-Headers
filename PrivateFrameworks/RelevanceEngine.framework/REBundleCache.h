
@interface REBundleCache : NSObject {
    REConcurrentDictionary * _cachedBundles;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)bundleAtPath:(id)arg1;
- (void)dealloc;
- (id)init;

@end
