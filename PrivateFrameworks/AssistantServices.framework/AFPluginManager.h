
@interface AFPluginManager : NSObject {
    NSMutableDictionary * _domainKeyDictionary;
    NSArray * _domainKeys;
    id /* block */  _factoryInitializationBlock;
    bool  _hasLoadedBundles;
    NSString * _path;
}

+ (id)pluginManagerForPath:(id)arg1 domainKeys:(id)arg2 factoryInitializationBlock:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_loadBundlesIfNeeded;
- (void)_registerBundle:(id)arg1;
- (id)description;
- (void)enumerateFactoryInstancesForDomainKey:(id)arg1 groupIdentifier:(id)arg2 classIdentifier:(id)arg3 usingBlock:(id /* block */)arg4;
- (id)initWithPath:(id)arg1 domainKeys:(id)arg2 factoryInitializationBlock:(id /* block */)arg3;
- (void)preloadBundles;

@end
