
@interface REClassLoader : NSObject <NSCopying> {
    NSArray * _cachedBundleConfigurations;
    NSArray * _cachedDataSources;
    <REClassLoaderConfiguration> * _configuration;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _loadingLock;
}

@property (nonatomic, readonly) <REClassLoaderConfiguration> *configuration;

+ (id)groupLoaderWithLoaders:(id)arg1;
+ (id)loaderWithBlock:(id /* block */)arg1 configuration:(id)arg2;
+ (id)loaderWithDirectories:(id)arg1 dataSourceKey:(id)arg2 configuration:(id)arg3;
+ (id)loaderWithObjects:(id)arg1 configuration:(id)arg2;

- (void).cxx_destruct;
- (void)_enumerateBundleConfigurations:(id /* block */)arg1;
- (void)_enumerateClassesWithBlock:(id /* block */)arg1;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)enumerateBundleConfigurations:(id /* block */)arg1;
- (void)enumerateClassesWithBlock:(id /* block */)arg1;
- (void)enumerateObjectsWithBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)prewarm;

@end
