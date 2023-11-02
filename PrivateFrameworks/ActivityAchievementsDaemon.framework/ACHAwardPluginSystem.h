
@interface ACHAwardPluginSystem : NSObject {
    NSArray * _plugins;
    NSArray * _progressProviders;
}

- (void).cxx_destruct;
- (id)_createPluginsFromClasses:(id)arg1;
- (void)_loadPlugins;
- (Class)_loadPrincipalClassConformingToProtocols:(id)arg1 fromBundleAtPath:(id)arg2;
- (id)_loadPrincipalClassesConformingToProtocols:(id)arg1 fromBundlesInDirectoryAtPath:(id)arg2 error:(id*)arg3;
- (id)_pluginClasses;
- (id)_pluginDirectoryPath;
- (id)_principalClassProtocols;
- (id)createProgressProviders;
- (id)createTemplateAssetSources;
- (id)init;

@end
