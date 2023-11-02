
@interface RERelevanceProviderManagerLoader : NSObject {
    REClassLoader * _loader;
}

+ (id)aggregateRelevanceProviderManagerLoaderWithrelevanceProviderManagerLoaders:(id)arg1;
+ (id)disabledRelevanceProviderManagerLoader;
+ (id)relevanceProviderManagerLoaderWithBlock:(id /* block */)arg1;
+ (id)relevanceProviderManagerLoaderWithDirectories:(id)arg1;
+ (id)relevanceProviderManagerLoaderWithDirectories:(id)arg1 relevanceProviderManagerKey:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)enumerateBundleConfigurations:(id /* block */)arg1;
- (void)enumerationDataSourceClassesWithBlock:(id /* block */)arg1;
- (bool)isEqual:(id)arg1;
- (void)prewarm;

@end
