
@interface BCDiscoverPluginManager : NSObject {
    NSArray * _discoverPlugins;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _discoverPluginsLock;
}

@property (nonatomic, copy) NSArray *discoverPlugins;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } discoverPluginsLock;

+ (id)_discoverPluginDirectoryURL;
+ (id)discoverPluginBundles;

- (void).cxx_destruct;
- (id)_buildDiscoverPlugins;
- (id)discoverPlugins;
- (struct os_unfair_lock_s { unsigned int x1; })discoverPluginsLock;
- (id)init;
- (void)setDiscoverPlugins:(id)arg1;
- (id)sortedPluginsBySectionForInput:(id)arg1;

@end
