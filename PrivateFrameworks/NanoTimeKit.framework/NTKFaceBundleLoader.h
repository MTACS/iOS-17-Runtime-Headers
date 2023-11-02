
@interface NTKFaceBundleLoader : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cacheLock;
    NSArray * _cachedFaceBundles;
    NTKBundleLoader * _loader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _loaderLock;
    NSSet * _urls;
}

+ (id)faceBundleLoaderWithDirectories:(id)arg1;

- (void).cxx_destruct;
- (void)_enumerateBundles:(id /* block */)arg1;
- (void)_loadClassesUsingBlock:(id /* block */)arg1;
- (void)enumerateFaceBundleClassesIgnoringCache:(bool)arg1 withBlock:(id /* block */)arg2;
- (id)initWithURLs:(id)arg1;
- (id)loadFaceBundleWithIdentifier:(id)arg1;
- (id)loadLegacyFaceBundleForStyle:(long long)arg1;

@end
