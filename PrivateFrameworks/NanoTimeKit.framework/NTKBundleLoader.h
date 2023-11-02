
@interface NTKBundleLoader : NSObject {
    NSMutableDictionary * _bundlesByPath;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, retain) NSMutableDictionary *bundlesByPath;

+ (id)rootDirectory;

- (void).cxx_destruct;
- (id)bundlesByPath;
- (id)bundlesFromDirectoryURL:(id)arg1;
- (void)enumerateBundlesFromDirectoryURL:(id)arg1 enumerator:(id /* block */)arg2;
- (id)init;
- (id)loadBundlesFromDirectoryURL:(id)arg1 enumerator:(id /* block */)arg2;
- (void)resetCacheForDirectoryURL:(id)arg1;
- (void)setBundlesByPath:(id)arg1;

@end
