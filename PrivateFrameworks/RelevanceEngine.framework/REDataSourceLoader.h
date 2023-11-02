
@interface REDataSourceLoader : NSObject <NSCopying> {
    REClassLoader * _loader;
}

+ (id)aggregateDataSourceLoaderWithDataSourceLoaders:(id)arg1;
+ (id)dataSourceLoaderWithBlock:(id /* block */)arg1;
+ (id)dataSourceLoaderWithDataSources:(id)arg1;
+ (id)dataSourceLoaderWithDirectories:(id)arg1;
+ (id)dataSourceLoaderWithDirectories:(id)arg1 dataSourceKey:(id)arg2;
+ (id)dataSourceLoaderWithDirectory:(id)arg1;
+ (id)defaultDataSourceLoader;
+ (id)disabledDataSourceLoader;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)enumerateBundleConfigurations:(id /* block */)arg1;
- (void)enumerateDataSourceClassesWithBlock:(id /* block */)arg1;
- (void)enumerateDataSourceObjectsWithBlock:(id /* block */)arg1;
- (bool)isEqual:(id)arg1;
- (void)prewarm;

@end
