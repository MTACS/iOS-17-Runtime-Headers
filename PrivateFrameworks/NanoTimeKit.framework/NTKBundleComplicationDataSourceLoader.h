
@interface NTKBundleComplicationDataSourceLoader : NSObject <NSCopying> {
    NSArray * _cachedDataSources;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cachedDataSourcesLock;
}

+ (id)aggregateComplicationLoaderWithComplicationLoaders:(id)arg1;
+ (id)complicationDataSourceLoaderWithBlock:(id /* block */)arg1;
+ (id)complicationDataSourceLoaderWithDirectories:(id)arg1;
+ (id)complicationDataSourceLoaderWithDirectory:(id)arg1;
+ (id)defaultComplicationDataSourceLoader;
+ (id)disabledComplicationDataSourceLoader;

- (void).cxx_destruct;
- (void)_loadClassesUsingBlock:(id /* block */)arg1;
- (id)cachedDataSources;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)enumerateComplicationClassesWithBlock:(id /* block */)arg1;
- (id)init;

@end
