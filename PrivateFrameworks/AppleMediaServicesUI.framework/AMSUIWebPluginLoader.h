
@interface AMSUIWebPluginLoader : NSObject {
    AMSUIWebClientContext * _context;
    NSDictionary * _installedPluginURLs;
    NSMutableDictionary * _loadedPluginsMap;
}

@property (nonatomic, readonly) AMSUIWebClientContext *context;
@property (nonatomic, readonly) NSDictionary *installedPluginURLs;
@property (nonatomic, readonly) NSArray *loadedPlugins;
@property (nonatomic, retain) NSMutableDictionary *loadedPluginsMap;

- (void).cxx_destruct;
- (id)_loadInstalledPlugins;
- (id)context;
- (id)initWithContext:(id)arg1;
- (id)installedPluginURLs;
- (id)loadedPlugins;
- (id)loadedPluginsMap;
- (id)pluginForBundleIdentifier:(id)arg1;
- (void)setLoadedPluginsMap:(id)arg1;

@end
