
@interface PROLegacyPluginManager : NSObject <PROAPIAccessing> {
    struct __CFDictionary { } * _apiRegistry;
    NSMutableArray * _pluginProtocols;
    NSMutableDictionary * _pluginRegistry;
    NSMutableArray * _pluginSearchDirectories;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)pluginManager;

- (int)addPluginProtocol:(id)arg1;
- (int)addPluginSearchDirectory:(id)arg1;
- (id)apiForProtocol:(id)arg1;
- (void)dealloc;
- (int)getBundlePath:(id*)arg1 forPluginClassName:(id)arg2;
- (int)getNumPluginsForProtocol:(id)arg1;
- (int)getPluginClass:(Class*)arg1 forPluginClassName:(id)arg2;
- (int)getPluginClass:(Class*)arg1 forPluginDisplayName:(id)arg2;
- (int)getPluginClass:(Class*)arg1 forPluginDisplayName:(id)arg2 forProtocol:(id)arg3;
- (int)getPluginClassNames:(id)arg1 forGroupName:(id)arg2;
- (int)getPluginClassNames:(id)arg1 forGroupName:(id)arg2 forProtocol:(id)arg3;
- (int)getPluginClassNames:(id)arg1 forProtocol:(id)arg2;
- (int)getPluginDisplayNames:(id)arg1 forGroupName:(id)arg2;
- (int)getPluginDisplayNames:(id)arg1 forGroupName:(id)arg2 forProtocol:(id)arg3;
- (int)getPluginDisplayNames:(id)arg1 forProtocol:(id)arg2;
- (int)getPluginGroupNames:(id)arg1;
- (int)getPluginGroupNames:(id)arg1 forProtocol:(id)arg2;
- (int)getPluginInfoDictionaries:(id)arg1 forProtocol:(id)arg2;
- (id)init;
- (int)loadPluginClass:(Class*)arg1 withName:(id)arg2 fromBundlePath:(id)arg3;
- (void)localizeKey:(id)arg1 withDefault:(id)arg2 forPlugin:(id)arg3 fromBundle:(id)arg4;
- (int)registerBundle:(id)arg1 withPluginDictionaryList:(id)arg2;
- (int)registerBundleDynamic:(id)arg1;
- (int)registerPluginWithDictionary:(id)arg1 withClassName:(id)arg2 withBundle:(id)arg3 withProtocolName:(id)arg4;
- (int)removeApiForProtocol:(id)arg1;
- (int)scanForPlugins;
- (int)scanForPluginsInDirectory:(id)arg1;
- (int)setApiObject:(id)arg1 forProtocol:(id)arg2;
- (int)setApiObjects:(id)arg1 forProtocols:(id)arg2;
- (int)setPluginSearchDirectories:(id)arg1;

@end
